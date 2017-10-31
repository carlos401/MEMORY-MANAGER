//
// Created by carlos on 25/10/17.
//

#ifndef TP4_OPER_MEMMANAGER_H
#define TP4_OPER_MEMMANAGER_H

#include "Memory.h"

using namespace std;

/**
 * This class manages the interaction between processes and memory
 */
class MemManager {

public:
    /**
     * The constructor
     * @param numberOfPages
     */
    MemManager(unsigned int numberOfPages);

    /**
     * The destructor
     */
    virtual ~MemManager();



private:
    /**
     * To manage the principal memory
     */
    Memory *RAM;

    /**
     * To manage the secondary memory
     */
    Memory *secondStorage;

    /**
     * The number of faults
     */
    unsigned memoryAcceses;

    /**
     * The memory configuration for addresses
     * How many pages does the principal memory have?
     */
    unsigned numberOfPages;

    /**
     * To know if some process has some pages in RAM
     */
    map<int, map<int,int>> pageTableRAM;

    /**
     * To know the direction for all pages in sec memory
     */
    map<int, map<int,int>> pageTableSec;

    /**
     * Function to map a decimal address to the corresponding page and offset address
     * the result depends of the value in numberOfPages
     * @param address the decimal address, value from 0 to 15
     * @return the corresponding page number and offset
     */
    pair<int,int> mapDecimalAddress(int address);
};




#endif //TP4_OPER_MEMMANAGER_H
