#include <iostream>


class Circle{
    private:
        double radius;
    public:
        Circle(int radius) : radius(radius) {};
        double calculateArea() { return radius*radius*1.2; };
};

int main(){
    Circle circle(6);
    std::cout << "radius: " << circle.calculateArea();
}