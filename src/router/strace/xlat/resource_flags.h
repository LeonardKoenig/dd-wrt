/* Generated by ./xlat/gen.sh from ./xlat/resource_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifndef IN_MPERS

static const struct xlat_data resource_flags_xdata[] = {
#if defined(IPC_CREAT) || (defined(HAVE_DECL_IPC_CREAT) && HAVE_DECL_IPC_CREAT)
  XLAT(IPC_CREAT),
#endif
#if defined(IPC_EXCL) || (defined(HAVE_DECL_IPC_EXCL) && HAVE_DECL_IPC_EXCL)
  XLAT(IPC_EXCL),
#endif
#if defined(IPC_NOWAIT) || (defined(HAVE_DECL_IPC_NOWAIT) && HAVE_DECL_IPC_NOWAIT)
  XLAT(IPC_NOWAIT),
#endif
};
const struct xlat resource_flags[1] = { {
 .data = resource_flags_xdata,
 .size = ARRAY_SIZE(resource_flags_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
