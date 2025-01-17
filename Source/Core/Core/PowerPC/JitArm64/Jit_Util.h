// Copyright 2015 Dolphin Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "Common/Arm64Emitter.h"
#include "Common/Common.h"

#include "Core/HW/MMIO.h"

void MMIOLoadToReg(MMIO::Mapping* mmio, Arm64Gen::ARM64XEmitter* emit, BitSet32 gprs_in_use,
                   BitSet32 fprs_in_use, Arm64Gen::ARM64Reg dst_reg, u32 address, u32 flags);

void MMIOWriteRegToAddr(MMIO::Mapping* mmio, Arm64Gen::ARM64XEmitter* emit, BitSet32 gprs_in_use,
                        BitSet32 fprs_in_use, Arm64Gen::ARM64Reg src_reg, u32 address, u32 flags);
