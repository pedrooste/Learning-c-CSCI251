/*
Demonstrates passing an object by reference within a getter method
*/

//preprocess
#include <iostream>
#include <vector>



class Engine{
    private:
        int size;
    public:
        void setSize(int _size){ size = _size;};
        int getSize(){ return size; };
};

class Car{
    private:
        std::string name;
        std::vector<Engine> engines;
    public:
        void setName(std::string _name){ name = _name; };
        std::string getName(){ return name; };
        std::vector<Engine>& getEngines(){ return engines; };
};

int main(){

    //creating objects
    Car car1 = Car();
    Engine engine1 = Engine();
    Engine engine2 = Engine();

    //setting attributes
    car1.setName("Boofhead");
    car1.getEngines().push_back(engine1);
    car1.getEngines().push_back(engine2);

    car1.getEngines()[0].setSize(4000);
    car1.getEngines()[1].setSize(5700);


    //printing out
    std::cout << "Car name: " << car1.getName() << ", Engine Size 1: " << car1.getEngines()[0].getSize() << "Litres" << ", Engine Size 1: " << car1.getEngines()[1].getSize() << "Litres " <<  '\n';

    return 0;
}