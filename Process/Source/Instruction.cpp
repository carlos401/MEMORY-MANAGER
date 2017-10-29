//
// Created by carlos on 25/10/17.
//

#include "../Header/Instruction.h"

Instruction::Instruction(Instruction::Operation operation, int origin, int destination){
    Instruction:: operation = operation;
    Instruction:: origin = origin;
    Instruction:: destination = destination;
}

Instruction::Instruction(Operation operation, int origin, int originD, int destination){
    Instruction::operation = operation;
    Instruction::origin = origin;
    Instruction::originD = originD;
    Instruction::destination = destination;
}

Instruction::Operation Instruction::getOperation() const {
    return Instruction::operation;
}


int Instruction::getOrigin() const {
    return Instruction::origin;
}


int Instruction::getDestination() const {
    return Instruction::destination;
}


int Instruction::getOriginD() const {
    return Instruction::originD;
}