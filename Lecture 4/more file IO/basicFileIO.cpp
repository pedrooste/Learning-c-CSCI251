/*
Week 4 lecture matieral, talking about file IO further in depth
*/

//preprocess
#include <iostream>
#include <fstream>

int main(){

    std::ifstream inData;        //declarining input file

    char fileName[] = "exams.txt";      //file name

    std::string lastname, mark;      //declaring read varaibles

    inData.open( fileName );


    while ( !inData.eof() ){             //while not the end of the file
        inData >> lastname >> mark;
        std::cout << lastname <<" " <<  mark << std::endl;
    }

    inData.close();         //closing file



    return 0;
}