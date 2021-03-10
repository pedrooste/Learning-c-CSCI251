//driver file

//please note that you will have to compile both files by command line this can be done via
//g++ name.cpp name2.cpp -o exeName.exe
// ./exeName


#include <iostream>
#include "header.h"      //this will include our header file

int main(){
    std::cout << "Please enter a string you would like to print" << std::endl;

    std::string input;

    getline(std::cin, input);

    printInput(input);

    return 0;
}