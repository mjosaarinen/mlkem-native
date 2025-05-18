/*
 * Copyright (c) The mlkem-native project authors
 * SPDX-License-Identifier: Apache-2.0 OR ISC OR MIT
 */

#if !defined(MLK_FIPS202_NATIVE_RISCV64_KECCAK_INST_H)
#define MLK_FIPS202_NATIVE_RISCV64_KECCAK_INST_H

#include "../../../common.h"

#if !defined(__ASSEMBLER__)

#include <stddef.h>
#include "src/rv64v_keccak_inst_wrapper.h"

#define MLK_USE_FIPS202_X1_NATIVE
static MLK_INLINE void mlk_keccak_f1600_x1_native(uint64_t *state)
{
  rv64v_keccak_inst_wrapper(state);
}
#endif /* !__ASSEMBLER__ */

#endif /* !MLK_FIPS202_NATIVE_RISCV64_KECCAK_INST_H */
