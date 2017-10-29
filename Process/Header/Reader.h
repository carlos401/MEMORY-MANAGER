//
// Created by cdelgado on 28/10/17.
//

#ifndef TP4_OPER_READER_H
#define TP4_OPER_READER_H

#include <list>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;
/**
 * This class provides functionality to read from a txt file
 */
class Reader {
public:
    /**
     * Allows read lines from a .txt file
     * @param nameOfFile the name of file to be open
     * @return a list with all lines in the file
     */
    list<string> readFromFile(string nameOfFile);
private:
    //nothing private
};


#endif //TP4_OPER_READER_H
