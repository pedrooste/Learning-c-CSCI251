/*
This pointer

Ive been waiting for this for agesssssssssssssssssssssss
This pointer works very simialar to java, pointing to the address of the object
its important to note that you cannot use a this pointer towards friend 
methods as they are not members of the class.

Syntax:
this -> attribute

*/


//preprocess
#include <iostream> 
using namespace std;

class Square {
    private:
        int length;     // Length of a square

    public:
      // Constructor non-default
    Square(int l=2) {
        cout <<"Constructor created." << endl;
        length = l;         
    }
    int area() {
        return length * length;
    }
    
    int compare(Square sq) {
        return this->area() == sq.area();               //this pointer
    }

    int addArea(Square sq){
        return (this->area() + sq.area()) ;
    }
};

int main() {
    Square Square1(3);    // Declare Square1
    Square Square2(4);    // Declare Square2
   
    cout << "---Compare---" << endl;

    if(Square1.compare(Square2)) {
        cout << "Two are equal" <<endl;
    } else {
        cout << "Two are NOT equal" <<endl;
    }

    cout << "---Add Area---" << endl;

    cout << "The sum of the areas is " <<  Square1.addArea(Square2) << endl;

    return 0;
}