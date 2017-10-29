//
// Created by carlos on 25/10/17.
//

#ifndef TP4_OPER_PROCESS_H
#define TP4_OPER_PROCESS_H


#include "../../Memory/Header/MemManager.h"
#include "Instruction.h"
#include <queue>
#include <map>

using namespace std;

/**
 * This class is a thread implementation
 */
class Process {

public:
    /**
     * The principal concurrent method like in Java
     */
    void start();

private:
    /**
     * Each process has three CPU registers
     */
    int r1, r2, r3;

    /**
     * A queue for instructions to execute
     */
    queue<Instruction> toExecute;

    /**
     * A pointer to memManager to access RAM and sec
     */
    MemManager *manager;

    /**
     * To know if the current process has some pages in RAM
     */
    map<int, int> pageTableRAM;

    /**
     * To know the direction for all pages in sec memory
     */
    map<int, int> pageTableDisk;
};


#endif //TP4_OPER_PROCESS_H
