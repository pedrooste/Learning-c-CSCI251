/*
Lambdas

lambdas are a type of inline funcion that are used similar to a function pointer.
Lambdas are disposable and treated more like a variable, this saving memory space.

*/

/*
Iterators

Iterators are special variables that point to a specific element within a container.
This may seem initally useless for vectors and arrays, however they become usefull for other types such as stacks that dont have indicies.
These can be easily incremented and decremeneted.


*/

//preprocess
#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

//basic function that will use a lambda (similar to a function pointer)
void ForEach(const std::vector<int>& values, const std::function<void(int)>& func){
    
    for(int value : values){        //enhanced for loop
        func(value);                //calling lambda
    }
}


int main(){

    //creating vector
    std::vector<int> values = {1,5,4,2,4,3};

    //using a lambda within our own define function

    int a = 5;          //variable to be included within lambda function (capture)

    auto lambdaEx = [a](int value) { std::cout << "Value: " << value << ", Caputred int: " << a << '\n';};           //value is our param

    ForEach(values, lambdaEx);

    //lambdas can also be used within pre defined functions, as show below
    std::cout << "------------------------\n";

    auto initalNumber = std::find_if(values.begin(), values.end(), [](int value) { return value > 3;});      //returns the first value that is larger than 3, note that this uses an iterator

    std::cout << "First value that is larger than 3: " << *initalNumber << '\n';


    return 0; 
}