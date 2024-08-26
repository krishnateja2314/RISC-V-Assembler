#ifndef UTILIS_H
#define UTILIS_H

#include "risc-v.h"
#include "instruction.h"
#include <vector>
#include <string>

// function takes a line and returns vators with all the instrections
std::vector<std::string> tokenize(const std::string &line);
int32_t strToInt(const string &num)
#endif