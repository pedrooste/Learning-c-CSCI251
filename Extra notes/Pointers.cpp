//Basic Pointers explained


//preprocess
#include <iostream>

int main(){

    //creating a pointer
    int var = 5;
    int * pointer  = &var;

    //inital print out
    std::cout << var << " " << pointer << '\n';
    std::cout << var << " " << *pointer << '\n';

    //adding 1 to our pointer
    *pointer = *pointer + 1;

    //second printout
    std::cout << var << " " << pointer << '\n';
    std::cout << var << " " << *pointer << '\n';



    return 0;
}