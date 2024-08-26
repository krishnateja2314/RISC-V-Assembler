#ifndef PARSER_H
#define PARSER_H

#include "instruction.h"
#include "risc-v.h"
#include "utilis.h"
#include <iostream>
#include <vector>
#include <string>

Instruction parseInstruction(const std::string &line);

#endif