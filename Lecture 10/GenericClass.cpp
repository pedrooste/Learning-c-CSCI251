/*
What is a Generic Class?
    Generic classes can be thought of as a blueprint of a blueprint, where at least one type is generic or paramatised.

Declaring a function
    When declaring a function outside of the class scope, we must use the template keyword before we implement the function

Where do we save the code for class templates?
    Template codes are not class or memeber functions, they are instructions to the cpp compiler for how to generate the class definition. Therefore generic classes should
    be placed within the header file.

*/

//preprocess
#include <iostream>


//generic class
template<typename T>
class Number{
    private:
        T theNumber;
    public:
        Number(const T&);
        void display();
};

//function implementation
template<typename T>
Number<T> :: Number(const T& n){                //constructor
    theNumber = n;
}

template<typename T>                            //display function
void Number<T> :: display() {
    std::cout << theNumber << '\n';
}

//generic class 2
template<typename T>
class MyPair{
    private:
        T a, b;
    public:
        MyPair(T a, T b) : a(a), b(b) {};       //constructor
        T getMax();
        T getMin();
};

//implementing functions
template<typename T>
T MyPair<T>::getMax(){
    if(a >= b){
        return a;
    }
    else{
        return b;
    }
}

template<typename T>
T MyPair<T>::getMin(){
    if(a <= b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    //object creation
    Number<int> anInt(50);                      //note that we have to specify the data type on the objects creation
    Number<double> aDouble(1.234);
    Number<char> aChar('A');

    //using methods
    std::cout << "-----Number class display method-----\n";
    anInt.display();
    aDouble.display();
    aChar.display();

    //object creation
    MyPair<int> intPair(23,43);
    MyPair<double> doublePair(45.88,32.11);
    MyPair<char> charPair('Z','B');

    //using methods
    std::cout << "-----Printing Max-----\n";
    std::cout << "intpair: " << intPair.getMax() << '\n';
    std::cout << "doublePair: " << doublePair.getMax() << '\n';
    std::cout << "charPair: " << charPair.getMax() << '\n';
    
    std::cout << "-----Printing Min-----\n";
    std::cout << "intpair: " << intPair.getMin() << '\n';
    std::cout << "doublePair: " << doublePair.getMin() << '\n';
    std::cout << "charPair: " << charPair.getMin() << '\n';

    return 0;
}