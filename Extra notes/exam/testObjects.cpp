#include <iostream>

class A{};

void test(A obj){
    std::cout << &obj << " " << '\n';
}

int main(){

    A a;
    A b = a;

    std::cout << &a << "    " << &b << '\n';

    test(a);

}