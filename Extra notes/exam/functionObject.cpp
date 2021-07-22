#include <iostream>

class FunctionObj{
    public:
        int operator()(float a, float b, double c){
            return (int)(a + b + c);
        }
};

int main(){
    //creating object
    FunctionObj obj;
    //using object operator that has been overloaded.
    std::cout << obj(5.5f, 6.9f, 5.4) << '\n' ;

    return 0;
}