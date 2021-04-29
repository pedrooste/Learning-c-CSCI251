/*
Exceptions and objects
    Objects can also be thrown with exceptions, this can be done by defining the data type when throwing / catching an exception. This may be usefull in a number of scenarios, where
    an object may contain bad data or you would like to encapuslate multiple fields of data

    Classes can also be made specfically for exception objects, where the object will be created with a custom process to perform once it has been called, see the example below
    for a demonstration of this

*/

//preprocess
#include <iostream>
using namespace std;

//exception class
class dividebyzero{
    private:
        const char* message;

    public:
        dividebyzero();
        void printMessage();

};

dividebyzero::dividebyzero(){
    message = "You have tried to divide by zero, you cannot do this";
}

void dividebyzero::printMessage(){
    cout << message << endl;
}

//function that we will use, this will throw the exception object
float quotient(int num, int den){
    if(den == 0){
        throw dividebyzero();
    }
    
    return (float) num/den;
}



int main(){

    int numerator, denominator;

    cout << "Please enter a Numerator: ";
    cin >> numerator;

    cout << "Please enter a Denominator: ";
    cin >> denominator;

    try{
        cout << "Quotient: " << quotient(numerator,denominator) << endl;
    }
    catch (dividebyzero err){
        err.printMessage();
        return 1;
    }



    return 0;
}