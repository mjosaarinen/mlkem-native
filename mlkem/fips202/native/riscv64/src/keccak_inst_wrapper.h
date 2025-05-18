/*
 * Copyright (c) The mlkem-native project authors
 * SPDX-License-Identifier: Apache-2.0 OR ISC OR MIT
 */

#if !defined(MLK_FIPS202_NATIVE_RISCV64_SRC_KECCAK_INST_WRAPPER_H)
#define MLK_FIPS202_NATIVE_RISCV64_SRC_KECCAK_INST_WRAPPER_H

/* Replace (single) Keccak-F1600 with a hardcodeed Keccak instruction wrapper */
#include <stdint.h>
void rv64v_keccak_inst_wrapper(uint64_t *state);

#endif /* MLK_FIPS202_NATIVE_RISCV64_SRC_KECCAK_INST_WRAPPER_H */
