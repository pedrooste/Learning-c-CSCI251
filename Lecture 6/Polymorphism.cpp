/*
This file will implement the OOP principal of Polymorphism

Polymorphism occurs when you want to overwrite a method or attribute of an inherited aspect of a parent class
basically its a blue print of a blueprint
*/

//preprocess
#include <iostream>

class Animal{
    public:
    void animalSound(){
        std::cout << "The animal makes a sound" << std::endl;
    }
};

class Horse: public Animal{
    public:
    void animalSound(){
        std::cout << "Neigh Neigh" << std::endl;
    }
};

class Deer: public Animal{
    public:
    void animalSound(){
        std::cout << "I dont know what noise a deer makes" << std::endl;
    }
};


int main(){

    //creating objects
    Animal animal1;
    Horse animal2;
    Deer animal3;


    //animal sounds
    animal1.animalSound();
    animal2.animalSound();
    animal3.animalSound();

    return 0;
}