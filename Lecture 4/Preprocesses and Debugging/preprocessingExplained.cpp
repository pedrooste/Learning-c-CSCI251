/*
Here we will go more into depth about pre processing, checking out whats all about that #

Types of preprocesses:
    Source file inclusion: #include
    Macro definition/replacement: #define
    Conditional compilation: #ifndef, #ifdef, #else, #endif, ..

These are generally used to help make cpp code more portable, as it can work with a variety of varaibles.


*/

/*
General Debugigng
    When debugging you can use your IDE of choice features such as the breakpoints, this can also be done within GDP.
    We can also use other extensions to check for memory leaks, this is not included within regular IDE (valgrind)
    Profiling can also be used to determine how much time we spend in each apart of the program. (gprof)


/*
defined macros
    these are used to provide entire replacements throughout the code
*/
#define MAX(a,b) (((a) > (b)) ? (a) : b )
#define PI 3.1415

/*
inline function
    this is not called but inserted within the code when 
    requested to reduce the time spent executing
*/
inline int Max(const int a, const int b){
    if(a>b)return a;
    return b;
}


//preprocess hehe
#include <iostream>
#include "preprocess.h"     //used for extern and file guards
#include <cassert>         //used for assertions

//definitions
void macroDefinition();
void externUses();
void debugging();
void assertions();


int main(){

    macroDefinition();
    externUses();
    debugging();
    assertions();

}

void macroDefinition(){

    //platform dependent code, not that it is 'faded' out as if statmetns that do not meet the requirments will not be compiled
    #ifdef v1
        //do whatever..
        std::cout << "v1" << std::endl;
    #elif defined v2
        //do whatever
        std::cout << "v2" << std::endl;
    #else
        //code for defualt
        std::cout << "default (macroDefinition)" << std::endl;
    #endif

}

void externUses(){
    //extern is used when a varaible has been defined within another file that you wish to use, this can be done with extern
    //this is commonly used when variables are named globally
    extern int cool;
    std::cout << "Our variabled (cool) within the header file has a value of: " << cool << std::endl;
}

void debugging(){
    //demonstrates the pre defined processes variables, these are commonly included at a top of a file when debugging.
    //to print these out you will need to incorperate the flag '-DDEBUG' before compiling
    //#define DEBUG

    std::cout << "debuggiang called" << std::endl;

    #ifdef DEBUG
        std::cout << "time: " << __TIME__ << std::endl;
        std::cout << "date: " << __DATE__ << std::endl;
        std::cout << "line: " << __LINE__ << std::endl;
        std::cout << "file: " << __FILE__ << std::endl;
        std::cout << "func: " << __func__ << std::endl;
    #endif


}

void assertions(){
    /*
    Assertions
        assertions are another feature used in defensive programming, they will provide
        a message and terminate if found to be false. These can only be used within
        debugging mode NDEBUG
    */


    //entering debug mode
    #define NDEBUG

    //getting user input
    int userInt;
    
    std::cout << "please enter a number between 1-10: ";
    std::cin >> userInt;

    //asserting, the string is refered to as a tracer
    assert(("The user entered a number outside the range" && ( userInt > 1 & userInt < 10 )));


}




