//This file explains the syntax and use of constants within cpp



//preproccessing
#include <iostream>

class A{
    public:
        static const int a;
        static int b;
        const int c = 7;
};

const int A::a = 5;
int A::b = 6;


main(){
    A objecta;
    objecta.b;


    std::cout << A::a << " " << A::b << '\n';
    std::cout << objecta.c << '\n';
}