/* Generated by ./xlat/gen.sh from ./xlat/v4l2_input_types.in; do not edit. */

#ifdef IN_MPERS

# error static const struct xlat v4l2_input_types in mpers mode

#else

static
const struct xlat v4l2_input_types[] = {
#if defined(V4L2_INPUT_TYPE_TUNER) || (defined(HAVE_DECL_V4L2_INPUT_TYPE_TUNER) && HAVE_DECL_V4L2_INPUT_TYPE_TUNER)
  XLAT(V4L2_INPUT_TYPE_TUNER),
#endif
#if defined(V4L2_INPUT_TYPE_CAMERA) || (defined(HAVE_DECL_V4L2_INPUT_TYPE_CAMERA) && HAVE_DECL_V4L2_INPUT_TYPE_CAMERA)
  XLAT(V4L2_INPUT_TYPE_CAMERA),
#endif
 XLAT_END
};

#endif /* !IN_MPERS */
