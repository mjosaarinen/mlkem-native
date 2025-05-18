/*
 * Copyright (c) The mlkem-native project authors
 * SPDX-License-Identifier: Apache-2.0 OR ISC OR MIT
 */

#include "../../../../common.h"

#if defined(MLK_SYS_RISCV64_KECCAK_INST)

#include <stddef.h>
#include "keccak_inst_wrapper.h"

//	note: inlining messes this up (hardcoded opcode..)

void rv64v_keccak_inst_wrapper(uint64_t *state)
{
  size_t vl = 32;

  __asm volatile(
      "vsetivli x0, 25, e64, m8, tu, mu\n"
      "vle64.v v8, 0(%[state])\n"
      "vsetvli %[vl], %[vl], e64, m8, tu, mu\n"
      // .insn r opc, func3, func7, vd, vs1, vs2
      ".insn r 0x77, 0x2, 0x53, x8, x17, x24\n"
      "vsetivli x0, 25, e64, m8, tu, mu\n"
      "vse64.v v8, 0(%[state])\n"
      : [vl] "+r"(vl)
      : [state] "r"(state)
      :);
}

#endif /* MLK_SYS_RISCV64_KECCAK_INST */
