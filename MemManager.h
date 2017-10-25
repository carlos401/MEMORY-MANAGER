//
// Created by carlos on 25/10/17.
//

#ifndef TP4_OPER_MEMMANAGER_H
#define TP4_OPER_MEMMANAGER_H

#include "Memory.h"

using namespace std;

class MemManager {

public:



private:
    Memory RAM;
    Memory secondStorage;
    unsigned memoryAcceses;
    unsigned numberOfPages;
};




#endif //TP4_OPER_MEMMANAGER_H
