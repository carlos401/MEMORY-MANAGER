//
// Created by carlos on 25/10/17.
//

#ifndef TP4_OPER_INSTRUCTION_H
#define TP4_OPER_INSTRUCTION_H


class Instruction {

public:
    enum Operation { LOAD, LOADI, STORE, ADD};

private:
    Operation operation;
    int origin;
    int destination;
};


#endif //TP4_OPER_INSTRUCTION_H
