cmake_minimum_required(VERSION 3.8)
project(TP4_OPER)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp Memory/Source/MemManager.cpp Memory/Header/MemManager.h Memory/Source/Memory.cpp Memory/Header/Memory.h Process/Source/Process.cpp Process/Header/Process.h Application/Source/Program.cpp Application/Header/Program.h Process/Source/Instruction.cpp Process/Header/Instruction.h Memory/Source/Page.cpp Memory/Header/Page.h Process/Source/Compiler.cpp Process/Header/Compiler.h Process/Source/Reader.cpp Process/Header/Reader.h)
add_executable(TP4_OPER ${SOURCE_FILES} Memory/Source/MemManager.cpp Memory/Header/MemManager.h Memory/Source/Memory.cpp Memory/Header/Memory.h Process/Source/Process.cpp Process/Header/Process.h Application/Source/Program.cpp Application/Header/Program.h Process/Source/Instruction.cpp Process/Header/Instruction.h Memory/Source/Page.cpp Memory/Header/Page.h Process/Source/Compiler.cpp Process/Header/Compiler.h Process/Source/Reader.cpp Process/Header/Reader.h)