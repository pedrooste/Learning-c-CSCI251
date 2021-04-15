/*
Friend Functions

Friend functions are funcitons that are functions that are defined outside
of the classes scope but still has access to all private and protected members.
This is done by passing the object reference to the method.

Even though these methods are defined within the class,
they are not member functions.

These can be defined by using the keyword (friend)
friend return_type function_name(Class & objClass){…}

*/

//preprocess
#include <iostream>
using namespace std;

class Number{
    private:
        int num;
    public:
        Number(){num=8;};
        void printNum(){
            cout<<"The number is: "<<num<<endl;
        }
        friend void addNum(Number &n); //Pass by ?
        friend void minusNum(Number &n);
};

void addNum(Number &n){
    n.num = n.num + 6;
}

void minusNum(Number &n){
    n.num -= 2;
}

int main(){
    Number n1;
    n1.printNum();
    cout<<"------Add Num-------"<<endl;
    // Call friend funciton    
    addNum(n1);
    n1.printNum();  
    cout<<"------Minus Num-------"<<endl;
    // call second friend function.
    minusNum(n1);
    n1.printNum();
    return 0;
}