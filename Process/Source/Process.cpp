//
// Created by carlos on 25/10/17.
//

#include "../Header/Process.h"
#include "../Header/Compiler.h"


Process::Process(string nameOfFile, MemManager *manager) {
    try {
        Process::manager = manager;
        //important operation: compilation process
        Process::toExecute = Compiler().compile(nameOfFile);
        //
        Process::pageTableRAM = map<int,int>();
        Process::pageTableSec = map<int,int>();
    } catch (Ex){

    }


}

void Process::start() {

}


