# RISC-V Assembler

The primary objective of this project is to design and implement a RISC-V assembler capable of converting RISC-V assembly instructions into their corresponding machine or hexadecimal code using a C++ program.

## Table of Contents

- [Overview](#overview)
- [Instructions](#instructions)
- [Project Expandability](#project-expandability)
- [How to Build](#how-to-build)
- [Installation](#Installation)
- [Project Structure](#project-structure)
- [File Descriptions](#file-descriptions)
- [Features](#features)

## Overview

This project focuses on supporting a subset of the RISC-V instruction set, specifically the base integer instruction set (RV32I), which is commonly used in educational and industrial applications. The assembler is designed to handle basic instruction formats, such as R-type,I-type,S-type,B-type,U-type and J-type instructions but doesn't support for pseudo-instructions that simplify assembly programming.

## Instructions

- This application allows all formats even ecall and ebreak is supported.
- The application is space sencitive. So bad spaces will cause the application to give error.
- If any comment is present after a instrection there shoud be atleast one space between instructon and comment.
- Project can only handile 50 lines excluding comments.
- Any files with assembly code can be tested using `tester.py` irrespective of its name.

## Project Expandability

- If needed more instructions can be added to the `risc_v.h` file.
- New Instruction type can be added by making a function in `instruction.h`.
- The maximum line of input file can be increased by just chenging the 50 in `data.h` and `data.cpp`.

## How to build

Make can be used to build the application:

```console
make all
```

Make all will compile the files and give you a riscv_asm.exe file which can be run using:

```console
./riscv_asm
```

Specific .o files can be compiled by the following commands:

```console
make data.o
make encorder.o
make instruction.o
make main.o
make parser.o
make utils.o
```

Then clean can be used to clean all the files:

```console
make clean
```

Python file can be used to test the project.

```console
python tester.py
```

## Project Structure

The project is organized as follows:\
├─ src\
│ ├── data.cpp \
│ ├── encoder.cpp \
│ ├── instruction.cpp \
│ ├── parser.cpp \
│ ├── main.cpp \
│ └── utils.cpp \
├── include \
│ ├── data.h \
│ ├── encoder.h \
│ ├── instruction.h \
│ ├── parser.h \
│ ├── risc-v.h \
│ └── utils.cpp \
├── test_cases \
├── Makefile \
├── tester.py \
└── README.md

## File Descriptions

- **src/**: Contains all the source code files.

  - `encoder.cpp`: conatains the implementation of encoding functionalities of the instruction.
  - `instruction.cpp`: Contains Implementation of instruction functionalities.
  - `parser.cpp` : Implementation of parsing functionalities.
  - `utils.cpp` Implementation of common utility functions.
  - `data.cpp`: Contains the strings and maps to store the data of the instructions.
  - `main.cpp`: The entry point of the application.

- **include/**: Contains all the Header files for the above source code files used in the project and an additional risc-v.h file.
  - `risc-v.h`: Contains the information about registers and instruction ,their corresponding opcode,funct values.
- **Makefile**: Configuration file for Make to build the project.
- **README.md**: Provides an overview of the project, including how to set it up and run it.
- **test_cases**: Contains all the files which have test cases.
- **tester.py**: This file automaticaly test all the file is test_cases
