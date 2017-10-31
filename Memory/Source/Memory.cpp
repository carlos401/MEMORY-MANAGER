//
// Created by carlos on 25/10/17.
//

#include "../Header/Memory.h"

Memory::Memory(unsigned int size) : size(size) {
    Memory::counter = 0;
}

Memory::~Memory() {

}

unsigned int Memory::getSize() const {
    return size;
}

bool Memory::availableSpace() {
    return (this->counter < this->size);
}

unsigned Memory::savePage(Page page){
    this->map_table.insert({this->counter,page});
    ++this->counter;
    return this->counter - 1;
}

Page Memory::getPage(unsigned address) {
    return this->map_table.at(address);
}

void Memory::replacePage(int address, Page page) {
    this->map_table[address] = page;
}
