#ifndef RISC_V_H
#define RISC_V_H

#include "instruction.h"
#include <unordered_map>

const std::unordered_map<std::string, InstructionInfo> instructionData = {
    {"add", {InstructionFormat::R_TYPE, 0x33, 0x0, 0x00}},
    {"sub", {InstructionFormat::R_TYPE, 0x33, 0x0, 0x20}},
    {"xor", {InstructionFormat::R_TYPE, 0x33, 0x4, 0x00}},
    {"or", {InstructionFormat::R_TYPE, 0x33, 0x6, 0x00}},
    {"and", {InstructionFormat::R_TYPE, 0x33, 0x7, 0x00}},
    {"sll", {InstructionFormat::R_TYPE, 0x33, 0x1, 0x00}},
    {"srl", {InstructionFormat::R_TYPE, 0x33, 0x5, 0x00}},
    {"sra", {InstructionFormat::R_TYPE, 0x33, 0x5, 0x20}},
    {"slt", {InstructionFormat::R_TYPE, 0x33, 0x2, 0x00}},
    {"sltu", {InstructionFormat::R_TYPE, 0x33, 0x3, 0x00}},
    {"addi", {InstructionFormat::I_TYPE, 0x33, 0x0, 0x00}},
    {"xori", {InstructionFormat::I_TYPE, 0x33, 0x4, 0x00}},
};

#endif