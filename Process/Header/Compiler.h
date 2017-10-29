//
// Created by carlos on 25/10/17.
//

#ifndef TP4_OPER_COMPILER_H
#define TP4_OPER_COMPILER_H


#include "Instruction.h"
#include <queue>
#include <string>

using namespace std;

class Compiler {

public:
    /**
     * Transforms txt file into a list of instructions
     * @param nameOfFile the name of the txt file
     * @return a list of instructions
     */
    queue<Instruction> compile(string nameOfFile);
private:

};


#endif //TP4_OPER_COMPILER_H
