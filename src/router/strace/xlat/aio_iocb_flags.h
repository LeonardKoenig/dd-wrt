/* Generated by ./xlat/gen.sh from ./xlat/aio_iocb_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(IOCB_FLAG_RESFD) || (defined(HAVE_DECL_IOCB_FLAG_RESFD) && HAVE_DECL_IOCB_FLAG_RESFD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IOCB_FLAG_RESFD) == (1), "IOCB_FLAG_RESFD != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IOCB_FLAG_RESFD 1
#endif
#if defined(IOCB_FLAG_IOPRIO) || (defined(HAVE_DECL_IOCB_FLAG_IOPRIO) && HAVE_DECL_IOCB_FLAG_IOPRIO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IOCB_FLAG_IOPRIO) == (2), "IOCB_FLAG_IOPRIO != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IOCB_FLAG_IOPRIO 2
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat aio_iocb_flags in mpers mode

# else

static const struct xlat_data aio_iocb_flags_xdata[] = {
 XLAT(IOCB_FLAG_RESFD),
 XLAT(IOCB_FLAG_IOPRIO),
};
static
const struct xlat aio_iocb_flags[1] = { {
 .data = aio_iocb_flags_xdata,
 .size = ARRAY_SIZE(aio_iocb_flags_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
