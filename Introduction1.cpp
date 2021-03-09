#include <iostream>     //used for input output
#include <cmath>        //used for math functions
#include <string>       //used for string
#include <float.h>    

//compiling
/*
Compiling
To compile within the terminal box use this.... then run by using
g++ name.cpp -o exeName.exe
exeName

*/

//namespaces
/*
What are namespaces? (using Directive)

name spaces are used to avoid function naming conflicts and help determine the difference between functions.
They are commonly brought into the application within beginner tutorials however it is known as bad practice
within the real world. Due to this i will not be using this.

using namespace std;

*/

//declarations
int chocolateInput();           //basic io
void calculatingPower();        //basic function
int hungry(int food);           //custom functions and if statement
void dataTypes();               //datatypes explained
void doubleExplained();         //doubles explained
void strings();                 //string classes explained
void censorship();              //string methods basic example


//constant varaibles
const int constExample = 10;

//main program
int main()
{

    int chocolates = chocolateInput();

    calculatingPower();

    chocolates = hungry(chocolates);

    doubleExplained();

    strings();

    censorship();
   
    return 0;
}


int chocolateInput(){
    //basic input output
    int chocolates;                                                             //variable declaration

    std::cout << "Yo fatty how many chocolates do you want?";                   //terminal output

    std::cin >> chocolates;                                                     //user input

    std::cout << "I have " << chocolates << " chocolates left" << std::endl ;

    return chocolates;
}

void calculatingPower(){
    //basic function calls
    int base;
    int exponent;

    std::cout << "\nPlease insert your base number: ";
    std::cin >> base;

    std::cout << "Please insert your exponent number: ";
    std::cin >> exponent;

    std::cout << "Here is " << base << " to the power of " << exponent << " = " << pow(base, exponent);

}

int hungry(int food){
    //Using our custom function (also using an if loop)
    std::cout << "\nWould you like to eat a chocolate? (y/n)";
    
    std::string choice;                                                 //declaring string variable

    std::cin >> choice;
    //now we need to clear out input as we will be using another input method later.
    std::cin.ignore(256, '\n');
    if( choice == "y"){                                                 //using if statement
        food --;
    }

    std::cout << "You now have " << food << " chocolates left";

    return food;

}

void dataTypes(){

    //data types

    /*
    Most data types carry on over from most programming languages, however we need to include signed numbers

    When representing your numbers in binary, a bit is saved at the end to determine whether the number is 
    positive or negative. This is commonly included, however we can exclude it to increase our number range.

    This can be done by....

    unsigned int;

    you can also cast your data type to another, this can be shown with char as below

    */

   char character = 65;

   std::cout << "\nHere is the character uncasted " << character;
   std::cout << "\nHere is the character casted " << (int) character;

}

void doubleExplained(){
    /*As we know there is a difference between floats, doubles and long doubles etc. Here is how we find
    each one to use
    */


    float floatExample = 12345671234567.55;

    std::cout << "\nHere is the number of decimal points within a float: " << FLT_DIG << std::endl;            //this will tell us how many decimal points
    std::cout << "Here is the number of decimal points within a double: " << DBL_DIG << std::endl;
    std::cout << "Here is the number of decimal points within a long double: " << LDBL_DIG << std::endl;

    //Here is how we fix the issue with numbers outside the printed range (scientific notation)
    std::cout << "Here is a float that goes beyond a printable range (Scientific Notation): " << floatExample << std::endl;
    std::cout << "Here is a float that goes beyond a printable range while fixed: " << std::fixed << floatExample << std::endl;

}


void strings(){

    //this basis uses the string class methodology
    std::string greeting = "Hello";
    
    //We can access a string similar to an array
    std::cout << greeting << std::endl;
    std::cout << greeting[0] << std::endl;

    //as string is within a class it also has methods such as....
    std::cout << "Our greeting is this many characters long: " << greeting.length() << std::endl;

    //when using std::cin, the input will only grab the first word. to get around this we use getline

    //getting string user input
    std::cout << "Please enter a string that you would like to print: ";

    std::string userInput;

    getline(std::cin, userInput);

    std::cout << "Your string reads: " << userInput << std::endl;

}

void censorship(){

    //extending on from strings before, we can use some of the methods stored within the string class to create some form of censorship.

    std::cout << "Please enter the scentence with the word fuck in it: ";

    std::string userInput;

    getline(std::cin, userInput);

    //finding the word fuck and replacing with an astrix

    userInput.replace(userInput.find("fuck"), 4, "****");

    //now we print out

    std::cout << userInput << std::endl;
}



