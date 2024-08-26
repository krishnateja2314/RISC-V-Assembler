#ifndef UTILIS_H
#define UTILIS_H

#include "risc-v.h"
#include "instruction.h"
#include <vector>
#include <string>

// function takes a line and splits it by space and comma and returns a vector
std::vector<std::string> tokenize(const std::string &line);

#endif