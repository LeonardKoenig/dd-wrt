/* Generated by ./xlat/gen.sh from ./xlat/v4l2_tuner_audmodes.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat v4l2_tuner_audmodes[];

# else

static const struct xlat_data v4l2_tuner_audmodes_xdata[] = {
#if defined(V4L2_TUNER_MODE_MONO) || (defined(HAVE_DECL_V4L2_TUNER_MODE_MONO) && HAVE_DECL_V4L2_TUNER_MODE_MONO)
  XLAT(V4L2_TUNER_MODE_MONO),
#endif
#if defined(V4L2_TUNER_MODE_STEREO) || (defined(HAVE_DECL_V4L2_TUNER_MODE_STEREO) && HAVE_DECL_V4L2_TUNER_MODE_STEREO)
  XLAT(V4L2_TUNER_MODE_STEREO),
#endif
#if defined(V4L2_TUNER_MODE_LANG2) || (defined(HAVE_DECL_V4L2_TUNER_MODE_LANG2) && HAVE_DECL_V4L2_TUNER_MODE_LANG2)
  XLAT(V4L2_TUNER_MODE_LANG2),
#endif
#if defined(V4L2_TUNER_MODE_SAP) || (defined(HAVE_DECL_V4L2_TUNER_MODE_SAP) && HAVE_DECL_V4L2_TUNER_MODE_SAP)
  XLAT(V4L2_TUNER_MODE_SAP),
#endif
#if defined(V4L2_TUNER_MODE_LANG1) || (defined(HAVE_DECL_V4L2_TUNER_MODE_LANG1) && HAVE_DECL_V4L2_TUNER_MODE_LANG1)
  XLAT(V4L2_TUNER_MODE_LANG1),
#endif
#if defined(V4L2_TUNER_MODE_LANG1_LANG2) || (defined(HAVE_DECL_V4L2_TUNER_MODE_LANG1_LANG2) && HAVE_DECL_V4L2_TUNER_MODE_LANG1_LANG2)
  XLAT(V4L2_TUNER_MODE_LANG1_LANG2),
#endif
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat v4l2_tuner_audmodes[1] = { {
 .data = v4l2_tuner_audmodes_xdata,
 .size = ARRAY_SIZE(v4l2_tuner_audmodes_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
