//
// Created by carlos on 25/10/17.
//

#include "../Header/Process.h"
#include "../Header/Compiler.h"
#include <iostream>


Process::Process(int id,string nameOfFile, MemManager *manager) {
    try {
        Process::id = id;
        Process::manager = manager;
        //important operation: compilation process
        Process::toExecute = Compiler().compile(nameOfFile);
    } catch (exception exception1){
        cout << exception1.what() << endl;
    }

}

void Process::start() {

}


