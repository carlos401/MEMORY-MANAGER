cmake_minimum_required(VERSION 3.8)
project(TP4_OPER)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp MemManager.cpp MemManager.h Memory.cpp Memory.h Process.cpp Process.h Program.cpp Program.h Instruction.cpp Instruction.h Page.cpp Page.h Compiler.cpp Compiler.h)
add_executable(TP4_OPER ${SOURCE_FILES} MemManager.cpp MemManager.h Memory.cpp Memory.h Process.cpp Process.h Program.cpp Program.h Instruction.cpp Instruction.h Page.cpp Page.h Compiler.cpp Compiler.h)