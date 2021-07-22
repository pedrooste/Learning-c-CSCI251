// This is my second introduction file to c++
#include <iostream>         //this will handle user input and output
#include <ctime>             //implements system time
#include <random>           //implements random


//function declarations
void comparingStrings();
void passingByValue(int a);
void passingByReference(int &a);
void basicPointers();
void functionPointer(void (*function)() );
void example1();
void example2();
void voidPointers();
void structs();
void dynamicMemory();
void unions();
void randomNumbers();


// main functions
int main(){    

    comparingStrings();

    //passing by value vs reference. try to avoid reference and instead return a type.
    int exampleValue = 5;
    std::cout << "Here is the example value originally: " << exampleValue << std::endl;
    passingByValue(exampleValue);
    std::cout << "Here is the example after passing by value: " << exampleValue << std::endl;
    passingByReference(exampleValue);
    std::cout << "Here is the example after passing by reference: " << exampleValue << std::endl;


    basicPointers();

    //now we will send a function as a parameter through pointers
    std::cout << "Here we will view pointer functions" << std::endl;
    
    functionPointer(&example1);
    functionPointer(&example2);


    //now we will use structs
    std::cout << "Using structs" << std::endl;
    structs();

    //dynamic memory
    dynamicMemory();

    //unions
    unions();
    
    //random numbers explained
    randomNumbers();


    return 0;
}




//comparing strings
void comparingStrings(){

    std::cout << "Please enter: 'whats up man': ";
    
    std::string userInput;

    getline(std::cin, userInput);
    
    //comparing strings
    if(userInput == "whats up man"){

        std::cout << "The input is equal" << std::endl;
    
    }
    else{
        std::cout << "The input is not  equal" << std::endl;
    }


    //another way to do this
    //if(userInput.compare("whats up man") ==0) std::cout << "equal" << std::endl;

    std::cout << "The following will try to find a character (x) within your string" << std::endl;
    getline(std::cin, userInput);

    //checking for the letter x
    if(userInput.find_first_of("x") == -1){
        std::cout << "x was not found\n" << std::endl;
    }
    else{
        std::cout << "x was found!!\n" << std::endl;
    }
    


}

void passingByValue(int a){
    //passing by value, the varaible will become local
    a = 10;
    std::cout << "(pass by value) The value of the integer within the function: " << a << std::endl;
}

void passingByReference(int &a){
    //passing by reference, the variable will become global between the two functions
    a = 11;
    std::cout << "(pass by reference) The value of the integer within the function: " << a << std::endl;
}

void basicPointers(){
    //basic introduction to pointers, this similar to passing by referenece, however they can be reassigned and perform arthimatic operations
    //pointers are described by the * operand.
    int y = 5;
    int *x = &y;         //this is a pointer to the memory to y
    *x = 1000;       //this will change for both x and y
    std::cout << "The value of y is now 1000 as this has been changed by the x pointer. y = " << y << std::endl;
}

void functionPointer(void (*function)() ){
    //demonstrating the use of function pointers

    /* note that we can also use pointers to point to the memory address of functions
    . this could be usefull in situation such as passing functions as a parameter 
    */

   function();

}

void example1(){
    //basic function used for pointer example

    std::cout << "You are now in the example 1 function" << std::endl;

}

void example2(){
    //basic function used for pointer example

    std::cout << "You are now in the example 2 function" << std::endl;

}

void voidPointers(){
    //we can use void pointers to point to a variety of data types
    int integer = 5;
    void *vp;
    vp = &integer;

    //note that we have to cast the void function in order to heap
    std::cout << "Here is the void pointer initially: " << *((int*)vp ) << std::endl;

    char character = 'A';
    vp = &character;

    std::cout << "Here is the void pointer now: " << *((char*)vp ) << std::endl;


}

void structs(){
    //defines the use of structs


    /*
    . Structs are very similar to classes, composing of a set of 
    public attributes and functions.

    This data has no encapsulation and can be easily accessed and modified

    strucutres must be define in the order that you use them
    */

    struct Address {
        std::string city;
        int postcode;
    };

    struct Student {
        const std::string uni = "UWO";
        std::string name;
        int id;
        Address addr;
    };

    Student s1;
    s1.addr.postcode = 2500;
    s1.addr.city = "Mount Keira";
    s1.id = 999999;
    s1.name = "Pedro";

    std::cout << s1.name << " is from " << s1.addr.city << " " << s1.addr.postcode << " and is studying at " << s1.uni << std::endl;



}

void dynamicMemory(){
    //this function will describe the uses of dynamic memory within cpp

    /*
    . Dynamic memory is used when we dont know how much memory we need or the type. this is pretty much a form of unassigned pointer
    . Whilst using DM we must ensure that we delete (release) any memory that we allocate as this can lead to a memory leak
    . Memory leaks clog up the users memory after the process has been completed (not terminated) and can also lead to information leaks
    */

   //creating a new pointer
   int *intptr;
   //dynamically allocating memory
   intptr = new int;
   //note that you must delete the pointer in order to release the memory
   delete intptr;

   //the auto type can also be used
   auto *autptr = new auto(5.6);
   std::cout << "printing out allocated memory: " << *autptr << std::endl;
   delete autptr;


    /*
    You can also allocate DM to arrays and pointers to pointers, however it is important that we delete all associated pointers. 
    Imporper use of DM commonly leads to two different types of problems

    Segmentation faults
    Using memory that does not belong to you, this can be get/set values from an illegal address or out of bounds array references

    Bus faults
    Accessing memory that that cannot be phyiscally addressed, usually caused by converting a bigger data tpye into a smaller.
    This causes a sort of memory misalignmnet
    */

    float **fptr;
    fptr = new float* [10];   //allocating to array

    for (int i = 0; i < 10; i++){
        fptr[i] = new float[10]; //allocating memory to each
    }

    for (int i = 0; i < 10; i++){
        delete [] fptr[i];      //deleting memory to each
    }

    delete [] fptr;

}

void unions(){
    //describes unions

    /*
    The union data type shares all of the same memory, 
    this is used when storing one varabile that consists of different types

    you cannot use strings within unions
    */

   union UnionExample{
       int a;
       float b;
       char c[5];       //6 bytes will be allocated to this union as this is the biggest size
   };

    UnionExample ex;
    ex.a = 5;

    std::cout << "value of int (set): " << ex.a << ", value of float (not set): " << ex.b << ", value of char array (not set): " << ex.c << std::endl;


}

void randomNumbers(){
    //this function will demonstrate the different methods of generating methods

    //the original way of generating random numbers 0 - 32767
    
    srand(time(0));      //taking the current systems time, this will be used as a seed
    
    std::cout << "generating random numbers based on the old school method" << std::endl;

    for (int i=0; i < 4; i++){
        std::cout << "random number " << i+1 << ": " << rand() << std::endl;     //generating random numbers
    }


    //----------------------------------------------------------------------

    //using the random library, setting min and max values
    std::default_random_engine randEng(time(0));             //setting our seed
    std::uniform_int_distribution<int> uid(0,1000);           //setting our min and max values

    std::cout << "Now we will demonstrate generating random numbers based on the random library" << std::endl;

    for (int i = 0; i < 5; i++){
        std::cout << "random number " << i+1 << ": " << uid(randEng) << std::endl;
    }


    //------------------------------------------------------

    //distribution numbers, this will generate random numbers close to the specified mean

    std::normal_distribution<> normal(5,1.5);

    std::cout << "Now we will demonstrate distribution numbers around a mean" << std::endl;

    for (int i = 0; i < 5; i++){
        std::cout << "random number " << i+1 << ": " << normal(randEng) << std::endl;
    }

    //------------------------------------------------------

    //Here is the final way to generate numbers, this method gives out the truest RNG form and should only be used in mathamatical applications
    // this gives a range of 0 to 4294967295
    
    std::mt19937 mtg(time(0));      //setting the seed
    std::uniform_int_distribution<int> trueRandom(0,1000);      //setting min and max

    std::cout << "Now we will demonstrate true random using mt19937" << std::endl;

    for (int i = 0; i < 5; i++){
        std::cout << "random number " << i+1 << ": " << trueRandom(mtg) << std::endl;
    }

}





