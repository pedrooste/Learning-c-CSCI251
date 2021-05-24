/*
Vectors have a dynamic size

Common syntax:
creation:                   std::vector<datatype> varaible = {values}
Adding values               variable.push_back(value}
getting elements            variable[i]
getting the size (lenght)   variable.size()


Here is the documentation for vectors:
https://www.geeksforgeeks.org/vector-in-cpp-stl/

*/

//preprocess
#include <iostream>
#include <vector>

void print_vector(std::vector<int> localData){
    
    std::cout << "Printing out contents of the vector" << std::endl;

    for(int i = 0; i < localData.size() ; i++){
        std::cout << localData[i] << std::endl;
    }
}

int main(){

    std::vector<int> data = {1,2,3};                        //creating a vector
    data.push_back(12);                                     //adding an element
    std::cout << data[data.size() -1] << std::endl;         //we can use vector.size, accessing the vector similar to an array
    std::cout << "Vectors can change their size dynamically, here is the size before we pop the last element: " << data.size() << std::endl;
    data.pop_back();                                        //we can also pop the last element like a stack
    std::cout << "Here is the size after: " << data.size() << std::endl;
    data.erase(data.begin() + 1);                           //removing an element at a specfic position (2nd element)
    data.push_back(144);
    data.push_back(55);
    data.push_back(213);
    print_vector(data);                                     //calling a function




    return 0;
}
