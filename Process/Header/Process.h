//
// Created by carlos on 25/10/17.
//

#ifndef TP4_OPER_PROCESS_H
#define TP4_OPER_PROCESS_H


#include "../../Memory/Header/MemManager.h"

using namespace std;

class Process {

public:

private:
    MemManager manager;
    map<int, int> pageTableRAM;
    map<int, int> pageTableDisk;
};


#endif //TP4_OPER_PROCESS_H
