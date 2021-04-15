/*
Interface 

An interface describes the behavious and capabilities of a class, without
commiting to a particular impelmentation

This can be created by using an abstract class, this is created within cpp by using the keyword
virtual for each method.

Abstract classes can not be used to create objects, sub classes must inherit all methods of the interface.
If the subclass fails to define a method within the interface, the program will not compile.


This is similar to the concept defined within java.
*/

//preprocess
#include <iostream>
using namespace std;

//interface
class Shape{
    public:

    //virtual method
    virtual double calculateArea() = 0;

    //setters
    void setWidth(int _width){
        width = _width;
    }

    void setHeight(int _height){
        height = _height;
    }

    protected:
        int width;
        int height;


};

//dervived classes
class Rectangle: public Shape{
    public:
    double calculateArea(){
        return (width * height);
    }
};

class Triangle: public Shape{
    public:
    double calculateArea(){
        return (width * height)/2.0;
    }
};


int main(){

    //creating objects
    Rectangle shape1;
    shape1.setHeight(5);
    shape1.setWidth(6);
    
    Triangle shape2;
    shape2.setHeight(5);
    shape2.setWidth(6);


    //printing the areas
    cout << "Area of rectangle: " << shape1.calculateArea() << endl;
    cout << "Area of triangle: " << shape2.calculateArea() << endl;


    return 0;
    
}