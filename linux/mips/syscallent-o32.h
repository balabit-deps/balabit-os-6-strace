#if defined LINUX_MIPSO32
/* For an O32 strace, decode the o32 syscalls.  */
[4000] = { MA,	0,		SEN(syscall),			"syscall"		}, /* start of Linux o32 */
[4001] = { 1,	TP|SE,		SEN(exit),			"exit"			},
[4002] = { 0,	TP,		SEN(fork),			"fork"			},
[4003] = { 3,	TD,		SEN(read),			"read"			},
[4004] = { 3,	TD,		SEN(write),			"write"			},
[4005] = { 3,	TD|TF,		SEN(open),			"open"			},
[4006] = { 1,	TD,		SEN(close),			"close"			},
[4007] = { 3,	TP,		SEN(waitpid),			"waitpid"		},
[4008] = { 2,	TD|TF,		SEN(creat),			"creat"			},
[4009] = { 2,	TF,		SEN(link),			"link"			},
[4010] = { 1,	TF,		SEN(unlink),			"unlink"		},
[4011] = { 3,	TF|TP|SE|SI,	SEN(execve),			"execve"		},
[4012] = { 1,	TF,		SEN(chdir),			"chdir"			},
[4013] = { 1,	0,		SEN(time),			"time"			},
[4014] = { 3,	TF,		SEN(mknod),			"mknod"			},
[4015] = { 2,	TF,		SEN(chmod),			"chmod"			},
[4016] = { 3,	TF,		SEN(chown),			"lchown"		},
[4017] = { 0,	TM,		SEN(break),			"break"			},
[4018] = { 2,	TF,		SEN(oldstat),			"oldstat"		},
[4019] = { 3,	TD,		SEN(lseek),			"lseek"			},
[4020] = { 0,	0,		SEN(getpid),			"getpid"		},
[4021] = { 5,	TF,		SEN(mount),			"mount"			},
[4022] = { 1,	TF,		SEN(umount),			"umount"		},
[4023] = { 1,	0,		SEN(setuid),			"setuid"		},
[4024] = { 0,	NF,		SEN(getuid),			"getuid"		},
[4025] = { 1,	0,		SEN(stime),			"stime"			},
[4026] = { 4,	0,		SEN(ptrace),			"ptrace"		},
[4027] = { 1,	0,		SEN(alarm),			"alarm"			},
[4028] = { 2,	TD,		SEN(oldfstat),			"oldfstat"		},
[4029] = { 0,	TS,		SEN(pause),			"pause"			},
[4030] = { 2,	TF,		SEN(utime),			"utime"			},
[4031] = { 0,	0,		SEN(stty),			"stty"			},
[4032] = { 0,	0,		SEN(gtty),			"gtty"			},
[4033] = { 2,	TF,		SEN(access),			"access"		},
[4034] = { 1,	0,		SEN(nice),			"nice"			},
[4035] = { 1,	0,		SEN(ftime),			"ftime"			},
[4036] = { 0,	0,		SEN(sync),			"sync"			},
[4037] = { 2,	TS,		SEN(kill),			"kill"			},
[4038] = { 2,	TF,		SEN(rename),			"rename"		},
[4039] = { 2,	TF,		SEN(mkdir),			"mkdir"			},
[4040] = { 1,	TF,		SEN(rmdir),			"rmdir"			},
[4041] = { 1,	TD,		SEN(dup),			"dup"			},
[4042] = { 1,	TD,		SEN(pipe),			"pipe"			},
[4043] = { 1,	0,		SEN(times),			"times"			},
[4044] = { 0,	0,		SEN(prof),			"prof"			},
[4045] = { 1,	TM|SI,		SEN(brk),			"brk"			},
[4046] = { 1,	0,		SEN(setgid),			"setgid"		},
[4047] = { 0,	NF,		SEN(getgid),			"getgid"		},
[4048] = { 1,	TS,		SEN(signal),			"signal"		},
[4049] = { 0,	NF,		SEN(geteuid),			"geteuid"		},
[4050] = { 0,	NF,		SEN(getegid),			"getegid"		},
[4051] = { 1,	TF,		SEN(acct),			"acct"			},
[4052] = { 2,	TF,		SEN(umount2),			"umount2"		},
[4053] = { 0,	0,		SEN(lock),			"lock"			},
[4054] = { 3,	TD,		SEN(ioctl),			"ioctl"			},
[4055] = { 3,	TD,		SEN(fcntl),			"fcntl"			},
[4056] = { 0,	0,		SEN(mpx),			"mpx"			},
[4057] = { 2,	0,		SEN(setpgid),			"setpgid"		},
[4058] = { 0,	0,		SEN(ulimit),			"ulimit"		},
[4059] = { 1,	0,		SEN(oldolduname),		"oldolduname"		},
[4060] = { 1,	0,		SEN(umask),			"umask"			},
[4061] = { 1,	TF,		SEN(chroot),			"chroot"		},
[4062] = { 2,	0,		SEN(ustat),			"ustat"			},
[4063] = { 2,	TD,		SEN(dup2),			"dup2"			},
[4064] = { 0,	0,		SEN(getppid),			"getppid"		},
[4065] = { 0,	0,		SEN(getpgrp),			"getpgrp"		},
[4066] = { 0,	0,		SEN(setsid),			"setsid"		},
[4067] = { 3,	TS,		SEN(sigaction),			"sigaction"		},
[4068] = { 0,	TS,		SEN(siggetmask),		"sgetmask"		},
[4069] = { 1,	TS,		SEN(sigsetmask),		"ssetmask"		},
[4070] = { 2,	0,		SEN(setreuid),			"setreuid"		},
[4071] = { 2,	0,		SEN(setregid),			"setregid"		},
[4072] = { 3,	TS,		SEN(sigsuspend),		"sigsuspend"		},
[4073] = { 1,	TS,		SEN(sigpending),		"sigpending"		},
[4074] = { 2,	0,		SEN(sethostname),		"sethostname"		},
[4075] = { 2,	0,		SEN(setrlimit),			"setrlimit"		},
[4076] = { 2,	0,		SEN(getrlimit),			"getrlimit"		},
[4077] = { 2,	0,		SEN(getrusage),			"getrusage"		},
[4078] = { 2,	0,		SEN(gettimeofday),		"gettimeofday"		},
[4079] = { 2,	0,		SEN(settimeofday),		"settimeofday"		},
[4080] = { 2,	0,		SEN(getgroups),			"getgroups"		},
[4081] = { 2,	0,		SEN(setgroups),			"setgroups"		},
[4082] = { 0,	0,		SEN(printargs),			"reserved82"		},
[4083] = { 2,	TF,		SEN(symlink),			"symlink"		},
[4084] = { 2,	TF,		SEN(oldlstat),			"oldlstat"		},
[4085] = { 3,	TF,		SEN(readlink),			"readlink"		},
[4086] = { 1,	TF,		SEN(uselib),			"uselib"		},
[4087] = { 2,	TF,		SEN(swapon),			"swapon"		},
[4088] = { 4,	0,		SEN(reboot),			"reboot"		},
[4089] = { 3,	TD,		SEN(readdir),			"readdir"		},
[4090] = { 6,	TD|TM|SI,	SEN(mmap),			"mmap"			},
[4091] = { 2,	TM|SI,		SEN(munmap),			"munmap"		},
[4092] = { 2,	TF,		SEN(truncate),			"truncate"		},
[4093] = { 2,	TD,		SEN(ftruncate),			"ftruncate"		},
[4094] = { 2,	TD,		SEN(fchmod),			"fchmod"		},
[4095] = { 3,	TD,		SEN(fchown),			"fchown"		},
[4096] = { 2,	0,		SEN(getpriority),		"getpriority"		},
[4097] = { 3,	0,		SEN(setpriority),		"setpriority"		},
[4098] = { 0,	0,		SEN(profil),			"profil"		},
[4099] = { 3,	TF,		SEN(statfs),			"statfs"		},
[4100] = { 3,	TD,		SEN(fstatfs),			"fstatfs"		},
[4101] = { 0,	0,		SEN(ioperm),			"ioperm"		},
[4102] = { 2,	TD,		SEN(socketcall),		"socketcall"		},
[4103] = { 3,	0,		SEN(syslog),			"syslog"		},
[4104] = { 3,	0,		SEN(setitimer),			"setitimer"		},
[4105] = { 2,	0,		SEN(getitimer),			"getitimer"		},
[4106] = { 2,	TF,		SEN(stat),			"stat"			},
[4107] = { 2,	TF,		SEN(lstat),			"lstat"			},
[4108] = { 2,	TD,		SEN(fstat),			"fstat"			},
[4109] = { 1,	0,		SEN(olduname),			"olduname"		},
[4110] = { 0,	0,		SEN(iopl),			"iopl"			},
[4111] = { 0,	0,		SEN(vhangup),			"vhangup"		},
[4112] = { 0,	0,		SEN(idle),			"idle"			},
[4113] = { 5,	0,		SEN(vm86old),			"vm86"			},
[4114] = { 4,	TP,		SEN(wait4),			"wait4"			},
[4115] = { 1,	TF,		SEN(swapoff),			"swapoff"		},
[4116] = { 1,	0,		SEN(sysinfo),			"sysinfo"		},
[4117] = { 6,	TI,		SEN(ipc),			"ipc"			},
[4118] = { 1,	TD,		SEN(fsync),			"fsync"			},
[4119] = { 0,	TS,		SEN(sigreturn),			"sigreturn"		},
[4120] = { 5,	TP,		SEN(clone),			"clone"			},
[4121] = { 2,	0,		SEN(setdomainname),		"setdomainname"		},
[4122] = { 1,	0,		SEN(uname),			"uname"			},
[4123] = { 0,	0,		SEN(modify_ldt),		"modify_ldt"		},
[4124] = { 1,	0,		SEN(adjtimex),			"adjtimex"		},
[4125] = { 3,	TM|SI,		SEN(mprotect),			"mprotect"		},
[4126] = { 3,	TS,		SEN(sigprocmask),		"sigprocmask"		},
[4127] = { 2,	0,		SEN(create_module),		"create_module"		},
[4128] = { 3,	0,		SEN(init_module),		"init_module"		},
[4129] = { 2,	0,		SEN(delete_module),		"delete_module"		},
[4130] = { 1,	0,		SEN(get_kernel_syms),		"get_kernel_syms"	},
[4131] = { 4,	TF,		SEN(quotactl),			"quotactl"		},
[4132] = { 1,	0,		SEN(getpgid),			"getpgid"		},
[4133] = { 1,	TD,		SEN(fchdir),			"fchdir"		},
[4134] = { 2,	0,		SEN(bdflush),			"bdflush"		},
[4135] = { 3,	0,		SEN(sysfs),			"sysfs"			},
[4136] = { 1,	0,		SEN(personality),		"personality"		},
[4137] = { 0,	0,		SEN(afs_syscall),		"afs_syscall"		},
[4138] = { 1,	NF,		SEN(setfsuid),			"setfsuid"		},
[4139] = { 1,	NF,		SEN(setfsgid),			"setfsgid"		},
[4140] = { 5,	TD,		SEN(llseek),			"_llseek"		},
[4141] = { 3,	TD,		SEN(getdents),			"getdents"		},
[4142] = { 5,	TD,		SEN(select),			"_newselect"		},
[4143] = { 2,	TD,		SEN(flock),			"flock"			},
[4144] = { 3,	TM,		SEN(msync),			"msync"			},
[4145] = { 3,	TD,		SEN(readv),			"readv"			},
[4146] = { 3,	TD,		SEN(writev),			"writev"		},
[4147] = { 3,	0,		SEN(printargs),			"cacheflush"		},
[4148] = { 3,	0,		SEN(printargs),			"cachectl"		},
[4149] = { 4,	0,		SEN(sysmips),			"sysmips"		},
[4150] = { 0,	0,		SEN(setup),			"setup"			},
[4151] = { 1,	0,		SEN(getsid),			"getsid"		},
[4152] = { 1,	TD,		SEN(fdatasync),			"fdatasync"		},
[4153] = { 1,	0,		SEN(sysctl),			"_sysctl"		},
[4154] = { 2,	TM,		SEN(mlock),			"mlock"			},
[4155] = { 2,	TM,		SEN(munlock),			"munlock"		},
[4156] = { 1,	TM,		SEN(mlockall),			"mlockall"		},
[4157] = { 0,	TM,		SEN(munlockall),		"munlockall"		},
[4158] = { 2,	0,		SEN(sched_setparam),		"sched_setparam"	},
[4159] = { 2,	0,		SEN(sched_getparam),		"sched_getparam"	},
[4160] = { 3,	0,		SEN(sched_setscheduler),	"sched_setscheduler"	},
[4161] = { 1,	0,		SEN(sched_getscheduler),	"sched_getscheduler"	},
[4162] = { 0,	0,		SEN(sched_yield),		"sched_yield"		},
[4163] = { 1,	0,		SEN(sched_get_priority_max),	"sched_get_priority_max"},
[4164] = { 1,	0,		SEN(sched_get_priority_min),	"sched_get_priority_min"},
[4165] = { 2,	0,		SEN(sched_rr_get_interval),	"sched_rr_get_interval"	},
[4166] = { 2,	0,		SEN(nanosleep),			"nanosleep"		},
[4167] = { 5,	TM|SI,		SEN(mremap),			"mremap"		},
[4168] = { 3,	TN,		SEN(accept),			"accept"		},
[4169] = { 3,	TN,		SEN(bind),			"bind"			},
[4170] = { 3,	TN,		SEN(connect),			"connect"		},
[4171] = { 3,	TN,		SEN(getpeername),		"getpeername"		},
[4172] = { 3,	TN,		SEN(getsockname),		"getsockname"		},
[4173] = { 5,	TN,		SEN(getsockopt),		"getsockopt"		},
[4174] = { 2,	TN,		SEN(listen),			"listen"		},
[4175] = { 4,	TN,		SEN(recv),			"recv"			},
[4176] = { 6,	TN,		SEN(recvfrom),			"recvfrom"		},
[4177] = { 3,	TN,		SEN(recvmsg),			"recvmsg"		},
[4178] = { 4,	TN,		SEN(send),			"send"			},
[4179] = { 3,	TN,		SEN(sendmsg),			"sendmsg"		},
[4180] = { 6,	TN,		SEN(sendto),			"sendto"		},
[4181] = { 5,	TN,		SEN(setsockopt),		"setsockopt"		},
[4182] = { 2,	TN,		SEN(shutdown),			"shutdown"		},
[4183] = { 3,	TN,		SEN(socket),			"socket"		},
[4184] = { 4,	TN,		SEN(socketpair),		"socketpair"		},
[4185] = { 3,	0,		SEN(setresuid),			"setresuid"		},
[4186] = { 3,	0,		SEN(getresuid),			"getresuid"		},
[4187] = { 5,	0,		SEN(query_module),		"query_module"		},
[4188] = { 3,	TD,		SEN(poll),			"poll"			},
[4189] = { 3,	0,		SEN(nfsservctl),		"nfsservctl"		},
[4190] = { 3,	0,		SEN(setresgid),			"setresgid"		},
[4191] = { 3,	0,		SEN(getresgid),			"getresgid"		},
[4192] = { 5,	0,		SEN(prctl),			"prctl"			},
[4193] = { 0,	TS,		SEN(rt_sigreturn),		"rt_sigreturn"		},
[4194] = { 4,	TS,		SEN(rt_sigaction),		"rt_sigaction"		},
[4195] = { 4,	TS,		SEN(rt_sigprocmask),		"rt_sigprocmask"	},
[4196] = { 2,	TS,		SEN(rt_sigpending),		"rt_sigpending"		},
[4197] = { 4,	TS,		SEN(rt_sigtimedwait),		"rt_sigtimedwait"	},
[4198] = { 3,	TS,		SEN(rt_sigqueueinfo),		"rt_sigqueueinfo"	},
[4199] = { 2,	TS,		SEN(rt_sigsuspend),		"rt_sigsuspend"		},
[4200] = { 6,	TD,		SEN(pread),			"pread64"		},
[4201] = { 6,	TD,		SEN(pwrite),			"pwrite64"		},
[4202] = { 3,	TF,		SEN(chown),			"chown"			},
[4203] = { 2,	TF,		SEN(getcwd),			"getcwd"		},
[4204] = { 2,	0,		SEN(capget),			"capget"		},
[4205] = { 2,	0,		SEN(capset),			"capset"		},
[4206] = { 2,	TS,		SEN(sigaltstack),		"sigaltstack"		},
[4207] = { 4,	TD|TN,		SEN(sendfile),			"sendfile"		},
[4208] = { 5,	TN,		SEN(getpmsg),			"getpmsg"		},
[4209] = { 5,	TN,		SEN(putpmsg),			"putpmsg"		},
[4210] = { 6,	TD|TM|SI,	SEN(mmap_4koff),		"mmap2"			},
[4211] = { 4,	TF,		SEN(truncate64),		"truncate64"		},
[4212] = { 4,	TD,		SEN(ftruncate64),		"ftruncate64"		},
[4213] = { 2,	TF,		SEN(stat64),			"stat64"		},
[4214] = { 2,	TF,		SEN(lstat64),			"lstat64"		},
[4215] = { 2,	TD,		SEN(fstat64),			"fstat64"		},
[4216] = { 2,	TF,		SEN(pivotroot),			"pivot_root"		},
[4217] = { 3,	TM,		SEN(mincore),			"mincore"		},
[4218] = { 3,	TM,		SEN(madvise),			"madvise"		},
[4219] = { 3,	TD,		SEN(getdents64),		"getdents64"		},
[4220] = { 3,	TD,		SEN(fcntl64),			"fcntl64"		},
[4221] = { },
[4222] = { 0,	0,		SEN(gettid),			"gettid"		},
[4223] = { 5,	TD,		SEN(readahead),			"readahead"		},
[4224] = { 5,	TF,		SEN(setxattr),			"setxattr"		},
[4225] = { 5,	TF,		SEN(setxattr),			"lsetxattr"		},
[4226] = { 5,	TD,		SEN(fsetxattr),			"fsetxattr"		},
[4227] = { 4,	TF,		SEN(getxattr),			"getxattr"		},
[4228] = { 4,	TF,		SEN(getxattr),			"lgetxattr"		},
[4229] = { 4,	TD,		SEN(fgetxattr),			"fgetxattr"		},
[4230] = { 3,	TF,		SEN(listxattr),			"listxattr"		},
[4231] = { 3,	TF,		SEN(listxattr),			"llistxattr"		},
[4232] = { 3,	TD,		SEN(flistxattr),		"flistxattr"		},
[4233] = { 2,	TF,		SEN(removexattr),		"removexattr"		},
[4234] = { 2,	TF,		SEN(removexattr),		"lremovexattr"		},
[4235] = { 2,	TD,		SEN(fremovexattr),		"fremovexattr"		},
[4236] = { 2,	TS,		SEN(kill),			"tkill"			},
[4237] = { 4,	TD|TN,		SEN(sendfile64),		"sendfile64"		},
[4238] = { 6,	0,		SEN(futex),			"futex"			},
[4239] = { 3,	0,		SEN(sched_setaffinity),		"sched_setaffinity"	},
[4240] = { 3,	0,		SEN(sched_getaffinity),		"sched_getaffinity"	},
[4241] = { 2,	0,		SEN(io_setup),			"io_setup"		},
[4242] = { 1,	0,		SEN(io_destroy),		"io_destroy"		},
[4243] = { 5,	0,		SEN(io_getevents),		"io_getevents"		},
[4244] = { 3,	0,		SEN(io_submit),			"io_submit"		},
[4245] = { 3,	0,		SEN(io_cancel),			"io_cancel"		},
[4246] = { 1,	TP|SE,		SEN(exit),			"exit_group"		},
[4247] = { 4,	0,		SEN(lookup_dcookie),		"lookup_dcookie"	},
[4248] = { 1,	TD,		SEN(epoll_create),		"epoll_create"		},
[4249] = { 4,	TD,		SEN(epoll_ctl),			"epoll_ctl"		},
[4250] = { 4,	TD,		SEN(epoll_wait),		"epoll_wait"		},
[4251] = { 5,	TM|SI,		SEN(remap_file_pages),		"remap_file_pages"	},
[4252] = { 1,	0,		SEN(set_tid_address),		"set_tid_address"	},
[4253] = { 0,	0,		SEN(restart_syscall),		"restart_syscall"	},
[4254] = { 7,	TD,		SEN(fadvise64_64),		"fadvise64"		},
[4255] = { 3,	TF,		SEN(statfs64),			"statfs64"		},
[4256] = { 2,	TD,		SEN(fstatfs64),			"fstatfs64"		},
[4257] = { 3,	0,		SEN(timer_create),		"timer_create"		},
[4258] = { 4,	0,		SEN(timer_settime),		"timer_settime"		},
[4259] = { 2,	0,		SEN(timer_gettime),		"timer_gettime"		},
[4260] = { 1,	0,		SEN(timer_getoverrun),		"timer_getoverrun"	},
[4261] = { 1,	0,		SEN(timer_delete),		"timer_delete"		},
[4262] = { 2,	0,		SEN(clock_settime),		"clock_settime"		},
[4263] = { 2,	0,		SEN(clock_gettime),		"clock_gettime"		},
[4264] = { 2,	0,		SEN(clock_getres),		"clock_getres"		},
[4265] = { 4,	0,		SEN(clock_nanosleep),		"clock_nanosleep"	},
[4266] = { 3,	TS,		SEN(tgkill),			"tgkill"		},
[4267] = { 2,	TF,		SEN(utimes),			"utimes"		},
[4268] = { 6,	TM,		SEN(mbind),			"mbind"			},
[4269] = { 5,	TM,		SEN(get_mempolicy),		"get_mempolicy"		},
[4270] = { 3,	TM,		SEN(set_mempolicy),		"set_mempolicy"		},
[4271] = { 4,	0,		SEN(mq_open),			"mq_open"		},
[4272] = { 1,	0,		SEN(mq_unlink),			"mq_unlink"		},
[4273] = { 5,	0,		SEN(mq_timedsend),		"mq_timedsend"		},
[4274] = { 5,	0,		SEN(mq_timedreceive),		"mq_timedreceive"	},
[4275] = { 2,	0,		SEN(mq_notify),			"mq_notify"		},
[4276] = { 3,	0,		SEN(mq_getsetattr),		"mq_getsetattr"		},
[4277] = { 5,	0,		SEN(vserver),			"vserver"		},
[4278] = { 5,	TP,		SEN(waitid),			"waitid"		},
[4279] = { },
[4280] = { 5,	0,		SEN(add_key),			"add_key"		},
[4281] = { 4,	0,		SEN(request_key),		"request_key"		},
[4282] = { 5,	0,		SEN(keyctl),			"keyctl"		},
[4283] = { 1,	0,		SEN(set_thread_area),		"set_thread_area"	},
[4284] = { 0,	TD,		SEN(inotify_init),		"inotify_init"		},
[4285] = { 3,	TD,		SEN(inotify_add_watch),		"inotify_add_watch"	},
[4286] = { 2,	TD,		SEN(inotify_rm_watch),		"inotify_rm_watch"	},
[4287] = { 4,	TM,		SEN(migrate_pages),		"migrate_pages"		},
[4288] = { 4,	TD|TF,		SEN(openat),			"openat"		},
[4289] = { 3,	TD|TF,		SEN(mkdirat),			"mkdirat"		},
[4290] = { 4,	TD|TF,		SEN(mknodat),			"mknodat"		},
[4291] = { 5,	TD|TF,		SEN(fchownat),			"fchownat"		},
[4292] = { 3,	TD|TF,		SEN(futimesat),			"futimesat"		},
[4293] = { 4,	TD|TF,		SEN(newfstatat),		"fstatat64"		},
[4294] = { 3,	TD|TF,		SEN(unlinkat),			"unlinkat"		},
[4295] = { 4,	TD|TF,		SEN(renameat),			"renameat"		},
[4296] = { 5,	TD|TF,		SEN(linkat),			"linkat"		},
[4297] = { 3,	TD|TF,		SEN(symlinkat),			"symlinkat"		},
[4298] = { 4,	TD|TF,		SEN(readlinkat),		"readlinkat"		},
[4299] = { 3,	TD|TF,		SEN(fchmodat),			"fchmodat"		},
[4300] = { 3,	TD|TF,		SEN(faccessat),			"faccessat"		},
[4301] = { 6,	TD,		SEN(pselect6),			"pselect6"		},
[4302] = { 5,	TD,		SEN(ppoll),			"ppoll"			},
[4303] = { 1,	TP,		SEN(unshare),			"unshare"		},
[4304] = { 6,	TD,		SEN(splice),			"splice"		},
[4305] = { 7,	TD,		SEN(sync_file_range),		"sync_file_range"	},
[4306] = { 4,	TD,		SEN(tee),			"tee"			},
[4307] = { 4,	TD,		SEN(vmsplice),			"vmsplice"		},
[4308] = { 6,	TM,		SEN(move_pages),		"move_pages"		},
[4309] = { 2,	0,		SEN(set_robust_list),		"set_robust_list"	},
[4310] = { 3,	0,		SEN(get_robust_list),		"get_robust_list"	},
[4311] = { 4,	0,		SEN(kexec_load),		"kexec_load"		},
[4312] = { 3,	0,		SEN(getcpu),			"getcpu"		},
[4313] = { 6,	TD,		SEN(epoll_pwait),		"epoll_pwait"		},
[4314] = { 3,	0,		SEN(ioprio_set),		"ioprio_set"		},
[4315] = { 2,	0,		SEN(ioprio_get),		"ioprio_get"		},
[4316] = { 4,	TD|TF,		SEN(utimensat),			"utimensat"		},
[4317] = { 3,	TD|TS,		SEN(signalfd),			"signalfd"		},
[4318] = { 4,	TD,		SEN(timerfd),			"timerfd"		},
[4319] = { 1,	TD,		SEN(eventfd),			"eventfd"		},
[4320] = { 6,	TD,		SEN(fallocate),			"fallocate"		},
[4321] = { 2,	TD,		SEN(timerfd_create),		"timerfd_create"	},
[4322] = { 2,	TD,		SEN(timerfd_gettime),		"timerfd_gettime"	},
[4323] = { 4,	TD,		SEN(timerfd_settime),		"timerfd_settime"	},
[4324] = { 4,	TD|TS,		SEN(signalfd4),			"signalfd4"		},
[4325] = { 2,	TD,		SEN(eventfd2),			"eventfd2"		},
[4326] = { 1,	TD,		SEN(epoll_create1),		"epoll_create1"		},
[4327] = { 3,	TD,		SEN(dup3),			"dup3"			},
[4328] = { 2,	TD,		SEN(pipe2),			"pipe2"			},
[4329] = { 1,	TD,		SEN(inotify_init1),		"inotify_init1"		},
[4330] = { 5,	TD,		SEN(preadv),			"preadv"		},
[4331] = { 5,	TD,		SEN(pwritev),			"pwritev"		},
[4332] = { 4,	TP|TS,		SEN(rt_tgsigqueueinfo),		"rt_tgsigqueueinfo"	},
[4333] = { 5,	TD,		SEN(perf_event_open),		"perf_event_open"	},
[4334] = { 4,	TN,		SEN(accept4),			"accept4"		},
[4335] = { 5,	TN,		SEN(recvmmsg),			"recvmmsg"		},
[4336] = { 2,	TD,		SEN(fanotify_init),		"fanotify_init"		},
[4337] = { 6,	TD|TF,		SEN(fanotify_mark),		"fanotify_mark"		},
[4338] = { 4,	0,		SEN(prlimit64),			"prlimit64"		},
[4339] = { 5,	TD|TF,		SEN(name_to_handle_at),		"name_to_handle_at"	},
[4340] = { 3,	TD,		SEN(open_by_handle_at),		"open_by_handle_at"	},
[4341] = { 2,	0,		SEN(clock_adjtime),		"clock_adjtime"		},
[4342] = { 1,	TD,		SEN(syncfs),			"syncfs"		},
[4343] = { 4,	TN,		SEN(sendmmsg),			"sendmmsg"		},
[4344] = { 2,	TD,		SEN(setns),			"setns"			},
[4345] = { 6,	0,		SEN(process_vm_readv),		"process_vm_readv"	},
[4346] = { 6,	0,		SEN(process_vm_writev),		"process_vm_writev"	},
[4347] = { 5,	0,		SEN(kcmp),			"kcmp"			},
[4348] = { 3,	TD,		SEN(finit_module),		"finit_module"		},
[4349] = { 3,	0,		SEN(sched_setattr),		"sched_setattr"		},
[4350] = { 4,	0,		SEN(sched_getattr),		"sched_getattr"		},
[4351] = { 5,	TD|TF,		SEN(renameat2),			"renameat2"		},
[4352] = { 3,	0,		SEN(seccomp),			"seccomp",		},
[4353] = { 3,	0,		SEN(getrandom),			"getrandom",		},
[4354] = { 2,	TD,		SEN(memfd_create),		"memfd_create",		},
[4355] = { 3,	TD,		SEN(bpf),			"bpf",			},
[4356] = { 5,	TD|TF|TP|SE|SI,	SEN(execveat),			"execveat",		},
[4357] = { 1,	TD,		SEN(userfaultfd),		"userfaultfd",		},
[4358] = { 2,	0,		SEN(membarrier),		"membarrier",		},
[4359] = { 3,	TM,		SEN(mlock2),			"mlock2"		},
[4360 ... 4399] = { },

# define SYS_socket_subcall      4400
# include "subcall.h"

/* end of Linux o32 */ [SYS_socket_subcall + SYS_socket_nsubcalls + SYS_ipc_nsubcalls ... 4999] = { },

#else

# include "syscallent-o32-stub.h"
/* end of Linux o32 */ [4400 ... 4999] = { },

#endif
