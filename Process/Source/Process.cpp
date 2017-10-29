//
// Created by carlos on 25/10/17.
//

#include "../Header/Process.h"
#include "../Header/Reader.h"
#include "../Header/Compiler.h"


Process::Process(string nameOfFile, MemManager *manager) {
    Process::manager = manager;
    Process::toExecute = Compiler().compile(nameOfFile);
    Process::pageTableRAM = map<int,int>();
    Process::pageTableDisk = map<int,int>();
}

void Process::start() {

}


