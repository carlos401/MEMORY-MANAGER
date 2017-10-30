//
// Created by carlos on 25/10/17.
//

#ifndef TP4_OPER_MEMORY_H
#define TP4_OPER_MEMORY_H

#include <map>
#include <unordered_set>
#include <vector>
#include "Page.h"

using namespace std;

class Memory {

public:



private:
    /**
     * The number of pages
     */
    unsigned size;

    /**
     * The real memory, associates number of pages with some content
     * For each page, there are some content
     */
    vector<Page> map_table;

};


#endif //TP4_OPER_MEMORY_H
