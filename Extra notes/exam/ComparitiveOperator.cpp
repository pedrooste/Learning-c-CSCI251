#include <iostream>

//to use this template, the comparitive operator > will have to be overloaded.
template<typename T>
T worst(T obj1, T obj2, T obj3){
    T worst = obj1;
    if(worst > obj2){
        worst = obj2;
    }
    
    if(worst > obj3){
        worst = obj3;
    }

    return worst;
    
}

class Bike{
    private:
        std::string name;
        int size;
        int speed;
    public:
        Bike(std::string name, int size, int speed) : name(name), size(size), speed(speed) {};
        int getSize() {return size;};
        int getSpeed() {return speed;};
        std::string getName() { return name; };

        //overloading operator to be able to use the worst function
        bool operator>(Bike bike){
            if(size*speed > bike.getSize()*bike.getSpeed() ){
                return true;
            }
            return false;
        }
};


int main(){

    Bike b1("Bike 1",5,6);
    Bike b2("Bike 2",7,8);
    Bike b3("Bike 3",3,2);

    std::cout << worst(b1,b2,b3).getName() << '\n';
    //this will return bike 3

    return 0;
}