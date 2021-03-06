/* Generated by ./xlat/gen.sh from ./xlat/perf_hw_cache_op_id.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(PERF_COUNT_HW_CACHE_OP_READ) || (defined(HAVE_DECL_PERF_COUNT_HW_CACHE_OP_READ) && HAVE_DECL_PERF_COUNT_HW_CACHE_OP_READ)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PERF_COUNT_HW_CACHE_OP_READ) == (0), "PERF_COUNT_HW_CACHE_OP_READ != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PERF_COUNT_HW_CACHE_OP_READ 0
#endif
#if defined(PERF_COUNT_HW_CACHE_OP_WRITE) || (defined(HAVE_DECL_PERF_COUNT_HW_CACHE_OP_WRITE) && HAVE_DECL_PERF_COUNT_HW_CACHE_OP_WRITE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PERF_COUNT_HW_CACHE_OP_WRITE) == (1), "PERF_COUNT_HW_CACHE_OP_WRITE != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PERF_COUNT_HW_CACHE_OP_WRITE 1
#endif
#if defined(PERF_COUNT_HW_CACHE_OP_PREFETCH) || (defined(HAVE_DECL_PERF_COUNT_HW_CACHE_OP_PREFETCH) && HAVE_DECL_PERF_COUNT_HW_CACHE_OP_PREFETCH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PERF_COUNT_HW_CACHE_OP_PREFETCH) == (2), "PERF_COUNT_HW_CACHE_OP_PREFETCH != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PERF_COUNT_HW_CACHE_OP_PREFETCH 2
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat perf_hw_cache_op_id in mpers mode

# else

static const struct xlat_data perf_hw_cache_op_id_xdata[] = {
 XLAT(PERF_COUNT_HW_CACHE_OP_READ),
 XLAT(PERF_COUNT_HW_CACHE_OP_WRITE),
 XLAT(PERF_COUNT_HW_CACHE_OP_PREFETCH),
};
static
const struct xlat perf_hw_cache_op_id[1] = { {
 .data = perf_hw_cache_op_id_xdata,
 .size = ARRAY_SIZE(perf_hw_cache_op_id_xdata),
 .type = XT_SORTED,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
