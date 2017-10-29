//
// Created by carlos on 25/10/17.
//

#include <cstring>
#include "../Header/Compiler.h"
#include "../Header/Reader.h"

queue<Instruction> Compiler::compile(string nameOfFile) {
    //to return
    queue<Instruction> instructions();
    //to read from a txt file
    Reader rd;
    string token, line;
    list<string> txtContent = rd.readFromFile(nameOfFile);
    list<string>::iterator iterator1 = txtContent.begin();
    //logic zone
    while ((line = *iterator1)!= NULL) {
        //get the instruction
        token = strtok(line," ");
        //create the operation
        if(token.compare("load")){
            //read the memory address
            int memAddress = stoi(strtok(NULL,""));
            //read the register
            int regster = stoi(strtok(NULL,""));
            //push to the queue
            instructions().push(Instruction(Instruction::LOAD,memAddress,regster));
            iterator1++;
        } else if (token.compare("loadi")){
            //read the constant value
            int value = stoi(strtok(NULL,""));
            //read the destination register
            int regster = stoi(strtok(NULL,""));
            instructions().push(Instruction(Instruction::LOADI,value,regster));
            iterator1++;
        } else if(token.compare("store")){
            //read the register
            int regster = stoi(strtok(NULL,""));
            //read the memory address
            int memAddress = stoi(strtok(NULL,""));
            instructions().push(Instruction(Instruction::STORE,regster,memAddress));
            iterator1++;
        } else if(token.compare("add")){
            //read the destination register
            int regDest = stoi(strtok(NULL,""));
            //read the first operand
            int regster1 = stoi(strtok(NULL,""));
            //read the second operand
            int regster2 = stoi(strtok(NULL,""));
            instructions().push(Instruction(Instruction::ADD,regster1,regster2,regDest));
            iterator1++;
        }
    }
    return instructions();
}
