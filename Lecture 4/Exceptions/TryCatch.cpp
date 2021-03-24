/*
Explains the basics of try catch, not much depth was presented as we havnt been introduced
to classes yet
*/

//preprocess
#include <iostream>
using namespace std;

//definitions
void functionA();
void functionB();

int main(){

    //The traditional way of error handling, this is bad because it can be hard to determine the cause
    
    int userNumber;
    cout << "(1) Please enter a number between 1 to 10: ";
    cin >> userNumber;
    

    if(userNumber < 1 || userNumber > 10){
        cerr << "invald number" << endl;
        exit(1);    //terminates program
    }


    /*
    A better alternative would be to have the function return a bool type that the main program can handle
    however there are better ways to handle
    */

   /*
   throwing exceptions:
   This follows syntax pretty similar to the examples found within java, multiple catch blocks can be used
   to catch different thrown errors. Different numbers can also be thrown that the catch block can catch then 
   determine later.

   Cpp does not include the finally block

   here we will demonstrate a try/catch stack unwind
   */

  try{
      functionA();
  }
  catch(int& err){
      cerr << "now we are within the main function" << endl;
  }




    return 0;
}


void functionA(){
    //demonstrates stack unwinding

    try{
        functionB();
    }
    catch (int err){
        cerr << "now we are within functionA()" << endl;
        throw(err);
    }
}

void functionB(){
    //demonstrates stack unwinding

    try{
        throw(1);
    }
    catch (int err){
        cerr << "We are within functionB()" << endl;
        throw(err);
    }
}