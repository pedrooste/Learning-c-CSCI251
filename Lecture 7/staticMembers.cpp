/*
Static Members

This is a simplistic feature that is already known.

Differences within cpp include:
you must define the static member outside of the class
*/

//preprocess
#include <iostream>
using namespace std;

class A {
    private:
        int x;
        static int count;
    public:
        A(){
            count++;
            cout << "Constructor Called" << endl;
        }
        static int getCount(){
            return count;
        }
};
//Initialising static data
int A::count=0;

int main(){
    cout << "Init value:" << A::getCount() << endl;
    A a1 , a2;
    cout << "Number of create constructors: " << A::getCount();
    return 0;
}