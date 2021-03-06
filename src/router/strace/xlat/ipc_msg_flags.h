/* Generated by ./xlat/gen.sh from ./xlat/ipc_msg_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat ipc_msg_flags in mpers mode

# else

static const struct xlat_data ipc_msg_flags_xdata[] = {
#if defined(MSG_NOERROR) || (defined(HAVE_DECL_MSG_NOERROR) && HAVE_DECL_MSG_NOERROR)
  XLAT(MSG_NOERROR),
#endif
#if defined(MSG_EXCEPT) || (defined(HAVE_DECL_MSG_EXCEPT) && HAVE_DECL_MSG_EXCEPT)
  XLAT(MSG_EXCEPT),
#endif
#if defined(IPC_NOWAIT) || (defined(HAVE_DECL_IPC_NOWAIT) && HAVE_DECL_IPC_NOWAIT)
  XLAT(IPC_NOWAIT),
#endif
};
static
const struct xlat ipc_msg_flags[1] = { {
 .data = ipc_msg_flags_xdata,
 .size = ARRAY_SIZE(ipc_msg_flags_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
