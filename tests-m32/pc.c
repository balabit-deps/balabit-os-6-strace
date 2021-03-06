/*
 * Copyright (c) 2015 Dmitry V. Levin <ldv@altlinux.org>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. The name of the author may not be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifdef HAVE_CONFIG_H
# include "config.h"
#endif
#include <dlfcn.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/wait.h>
#include <sys/sendfile.h>

int main(void)
{
	const unsigned long pagesize = sysconf(_SC_PAGESIZE);

#ifdef __s390__
	/*
	 * The si_addr field is unreliable:
	 * https://marc.info/?l=linux-s390&m=142515870124248&w=2
	 */
	return 77;
#endif

	/* write instruction pointer length to the log */
	if (write(-1, NULL, 2 * sizeof(void *)) >= 0)
		return 77;

	/* just a noticeable line in the log */
	if (munmap(&main, 0) >= 0)
		return 77;

	int pid = fork();
	if (pid < 0)
		return 77;

	if (!pid) {
		const unsigned long mask = ~(pagesize - 1);
		unsigned long addr = (unsigned long) &main & mask;
		unsigned long size = pagesize << 1;

#ifdef HAVE_DLADDR
		Dl_info info;
		if (dladdr(&main, &info)) {
			const unsigned long base =
				(unsigned long) info.dli_fbase & mask;
			if (base < addr) {
				size += addr - base;
				addr = base;
			}
		} else
#endif
		{
			addr -= size;
			size <<= 1;
		}

		/* SIGSEGV is expected */
		(void) munmap((void *) addr, size);
		(void) munmap((void *) addr, size);
		return 77;
	}

	int status;
	if (wait(&status) != pid ||
	    !WIFSIGNALED(status) ||
	    WTERMSIG(status) != SIGSEGV)
		return 77;

	/* dump process map for debug purposes */
	close(0);
	if (!open("/proc/self/maps", O_RDONLY))
		(void) sendfile(1, 0, NULL, pagesize);

	return 0;
}
