/*
Operator Overloading
Operator Overloading are functions that are automatically called when an operator
is called between two objects. This is one feature that that is not included 
within java. Lots of different operators can be overloaded, including new and delete keywords

Syntax:
Class operatorsymbol”+” (const Class & obj){}

The following program represents the use over overloading the + and - operators.
*/

//preprocess
#include <iostream> 
using namespace std;



class Distance {
    private:
        int length;     // Length of a square

    public:      
    void setLength(int l){
        length = l;
    }
    int getLength(){
        return length;
    }


                                                                //operator overloading
    Distance operator+(const Distance d) {
        Distance dTmp; // Create of temporary Distance
        dTmp.length = this->length + d.length;
        return dTmp;
    }

    Distance operator-(const Distance d) {
        Distance dTmp;
        dTmp.length = this->length - d.length;
        return dTmp;
    }
};

int main() {
    Distance d1;    // Declare Distance 1
    Distance d2;    // Declare Distance 2
    Distance d3;
    Distance d4;
    d1.setLength(3);
    d2.setLength(4);

    cout << "Distance 1 is: "<<d1.getLength()<<endl;
    cout << "Distance 2 is: "<<d2.getLength()<<endl;

    cout <<"--------Addition--------"<<endl;
    // Add two objects
    d3 = d1 + d2;
    cout << "The total of 2 distance is: "<<d3.getLength()<<endl;
    
    cout <<"--------Subtraction--------"<<endl;
    //Subtract two objects
    d4 = d2 - d1;
    cout << "The difference of 2 distance is: "<< d4.getLength()<<endl;     
    return 0;
}