//
// Created by carlos on 25/10/17.
//

#ifndef TP4_OPER_MEMORY_H
#define TP4_OPER_MEMORY_H

#include <map>
#include <vector>
#include "Page.h"

using namespace std;

class Memory {

public:
    /**
     * The constructor
     * @param size the size of this memory
     */
    Memory(unsigned int size);

    /**
     * The destructor
     */
    virtual ~Memory();

    /**
     * Returns the size of memory
     * @return the size of memory
     */
    unsigned int getSize() const;

    /**
     * Allows to save a new page in memory only if there are some space available
     * @param page the page to be saved
     * @return the address assigned in memory
     */
    unsigned savePage(Page page);

    /**
     * Allows get a page for the given address
     * @param address the address assigned to the page
     * @return the page searched, else null
     */
    Page getPage(unsigned address);

    /**
     * Allows to change the page in a given address
     * @param address the address of the page to change
     * @param page the new page to save
     */
    void replacePage(int address,Page page);

    /**
     * To know if there are space free
     * @return true if there are some space
     */
    bool availableSpace();

private:
    /**
     * The number of pages
     */
    unsigned size;

    /**
     * The real memory, associates number of pages with some content
     * For each page, there are some content
     */
    map<int,Page> map_table;

    /**
     * To assigned addresses in the page
     */
    unsigned counter;

};


#endif //TP4_OPER_MEMORY_H
