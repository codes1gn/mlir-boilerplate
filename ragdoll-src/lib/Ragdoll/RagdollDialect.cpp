//===- RagdollDialect.cpp - Ragdoll dialect ---------------*- C++ -*-===//
//
// This file is licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "Ragdoll/RagdollDialect.h"
#include "Ragdoll/RagdollOps.h"

using namespace mlir;
using namespace mlir::ragdoll;

//===----------------------------------------------------------------------===//
// Ragdoll dialect.
//===----------------------------------------------------------------------===//

void RagdollDialect::initialize() {
  addOperations<
#define GET_OP_LIST
#include "Ragdoll/RagdollOps.cpp.inc"
      >();
}
