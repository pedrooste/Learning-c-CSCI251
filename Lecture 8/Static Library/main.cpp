//main driver file to use static library, this will be done within capa system

#include "add.h"
#include <iostream>

int main(){

    std::cout << add(10,13) << std::endl;
    std::cout << add(20,4) << std::endl;


    return 0;
}