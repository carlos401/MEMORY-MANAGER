//
// Created by carlos on 25/10/17.
//

#include "../Header/MemManager.h"

MemManager::MemManager(unsigned int numberOfPages) : numberOfPages(numberOfPages) {
    MemManager::memoryAcceses = 0;
    MemManager::RAM = new Memory(numberOfPages);
    //50 represents that secondStorage has infinite space available
    MemManager::secondStorage = new Memory(50);
}

MemManager::~MemManager() {

}

pair<int, int> MemManager::mapDecimalAddress(int address) {
    pair<int,int> result;
    switch (this->numberOfPages){
        case 2:
            result = make_pair((address/8),(address%8));
            break;
        case 4:
            result = make_pair((address/4),(address%4));
            break;
        case 8:
            result = make_pair((address/2),(address%2));
            break;
        default:
            break;
    }
    return result;
}
