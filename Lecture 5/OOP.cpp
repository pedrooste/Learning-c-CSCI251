/*
Within this lecture we are finally introduced to OOP, which seems to be a very similar syntax to java which is good.
See the following article to see the differences between cpp and java for OOP
https://www.softwaretestinghelp.com/cpp-vs-java/#:~:text=C%2B%2B%20is%20both%20a%20procedural,completely%20object%2Doriented%20programming%20language.&text=But%20for%20Java%2C%20there%20is,the%20primitive%20and%20object%20types. 
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

    //printing
    std::cout << car1.toString();
    car1.vroom();
    std::cout << car2.toString();
}