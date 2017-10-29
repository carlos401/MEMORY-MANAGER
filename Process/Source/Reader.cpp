//
// Created by cdelgado on 28/10/17.
//

#include "../Header/Reader.h"
using namespace std;

list<string> Reader::readFromFile(string nameOfFile) {
    //empty list to return
    list<string> linesReaded();
    //the file is open only to read
    ifstream inputFile(nameOfFile,ifstream::in);
    string line;
    if(inputFile.is_open()){
        while(!inputFile.eof()){
            //get line and save it
            getline(inputFile,line);
            linesReaded().push_back(line);
        }
    }
    return linesReaded();
}

