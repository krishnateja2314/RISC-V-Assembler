# RISC-V Assembler

The primary objective of this project is to design and implement a RISC-V assembler capable of converting RISC-V assembly instructions into their corresponding machine or hexadecimal code using a C++ program. 
## Table of Contents

- [Overview](#overview)
- [Installation](#Installation)
- [Project Structure](#project-structure)
- [File Descriptions](#file-descriptions)
- [Features](#features)


## Overview

This project focuses on supporting a subset of the RISC-V instruction set, specifically the base integer instruction set (RV32I), which is commonly used in educational and industrial applications. The assembler is designed to handle basic instruction formats, such as R-type,I-type,S-type,B-type,U-type and J-type instructions but doesn't support for pseudo-instructions that simplify assembly programming.
 

## Installation

## Project Structure
The project is organized as follows:\
├─ src\
│   ├── data.cpp           \
│   ├── encoder.cpp        \
│   ├── instruction.cpp    \
│   ├── parser.cpp       \
│   ├── main.cpp       \
│   └── utils.cpp        \
├── include  \
│   ├── data.h           \
│   ├── encoder.h        \
│   ├── instruction.h    \
│   ├── parser.h  \
│   └── utils.cpp \
├── input.s           \
├── Makefile           \
└── README.md          


## File Descriptions

- **src/**: Contains all the source code files.
  - `encoder.cpp`: conatains the implementation of encoding functionalities of the instruction.
  - `instruction.cpp`: Contains Implementation of instruction functionalities.
  - `parser.cpp` : Implementation of parsing functionalities.
  - `utils.cpp` Implementation of common utility functions.
  - `data.cpp`: Contains the strings and maps to store the data of the instructions.
  - `main.cpp`: The entry point of the application.

- **include/**: Contains all the Header files for the above source code files used in the project.

- **input.s**: Contains the assembly code which works as the input for the program.

- **Makefile**: Configuration file for Make to build the project.

- **README.md**: Provides an overview of the project, including how to set it up and run it.