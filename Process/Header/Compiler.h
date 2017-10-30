//
// Created by carlos on 25/10/17.
//

#ifndef TP4_OPER_COMPILER_H
#define TP4_OPER_COMPILER_H


#include "Instruction.h"
#include <queue>
#include <string>
#include <list>

using namespace std;

class Compiler{

public:

    /**
     * Transforms txt file into a queue of instructions
     * @param nameOfFile the name of the txt file
     * @return a queue of instructions
     */
    queue<Instruction> compile(string nameOfFile);

private:
    /**
     * Allows read lines from a .txt file
     * @param nameOfFile the name of file to be open
     * @return a list with all lines in the file
     */
    list<string> readFromFile(string nameOfFile);
};


#endif //TP4_OPER_COMPILER_H
