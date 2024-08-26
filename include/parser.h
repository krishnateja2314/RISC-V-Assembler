#include "instruction.h"
#include "../include/risc-v.h"
#include "../include/utilis.h"
#include <iostream>
#include <vector>

Instruction parseInstruction(const std::string &line);