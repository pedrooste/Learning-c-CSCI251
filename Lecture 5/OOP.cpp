/*
Within this lecture we are finally introduced to OOP, which seems to be a very similar syntax to java which is good.
See the following article to see the differences between cpp and java for OOP
https://www.softwaretestinghelp.com/cpp-vs-java/#:~:text=C%2B%2B%20is%20both%20a%20procedural,completely%20object%2Doriented%20programming%20language.&text=But%20for%20Java%2C%20there%20is,the%20primitive%20and%20object%20types. 

New stuff within cpp


Constructors
    These can also be private within CPP, this is often used to implement a design pattern called
    a singleton. This is when you only want to have one instance of the class

Destructors
    Destructors are called whenever an object goes out of scope
    This allows memory to be released, avoiding any memory leaks
    Only one destructor is defined per class, with no paramters and a return type.

    When calling constructors on a group of objects, it deltes each object within the stack
    following LIFO (Last In, First Out)

    This dosnt need to be explicitally called, as the program will automatically call it if each
    object created within the function.

    destructors can also be private, this could be used for different reasons such as safe reference
    tracking. However we must refer to each object created through a pointer in order for
    the program to compile. This often leads to a memory leak


*/

//preprocess
#include <iostream>
#include <sstream>


class Car{

    ///private attributes
    private:
        std::string color;
        std::string model;
        int year;
        float engineSize;

    public:
    //overloaded constructor
    Car(std::string c, std::string m, int y, float e){
        color = c;
        model = m;
        year = y;
        engineSize = e;
    }

    //default constructor
    Car(){
        std::cout << "you have called the default constructor \n\n";
    }

    //copy constructor


    //deconstructor
    ~Car(){
        //delete area
        std::cout << "The Car object has been deleted" << std::endl;
    }

    //getters
    std::string getColor(){
        return color;
    }

    std::string getModel(){
        return model;
    }

    int getYear(){
        return year;
    }

    float getEngineSize(){
        return engineSize;
    }

    //setters
    void setColor(std::string c){
        color = c;
    }

    void setModel(std::string m){
        model = m;
    }

    void setYear(int y){
        year = y;
    }

    void setEngineSize(float e){
        engineSize = e;
    }

    //to string method
    std::string toString(){
        std::stringstream carString;

        carString << "Color: " << color << ", Model: " << model << ", Engine Size: " << engineSize << "\n\n";

        return carString.str();
    }

    void vroom();



};

//defining a method outstide of the class
void Car::vroom(){
    std::cout << "mmmmmmmmmmmmmmmmmnnnnnnnnnnnnnnnnnneeeeeeeeewwwwwwwwwwwwwwwww vrom vrom \n\n";
}


int main(){

    //creating car object through constructor
    Car car1("red","Ford",2007,4.0);
    Car car2("blue","Holden",2006,3.6);
    Car car3 = car1;     //using copy constructor (note this isnt just cloning the address as noraml)

    //printing
    std::cout << car1.toString();
    car1.vroom();
    std::cout << car2.toString();

    //changing varaible and printing
    car3.setColor("White");
    std::cout << car1.toString();
    std::cout << car3.toString();

    //note that the destructor will be called automatically


    return 0;
}