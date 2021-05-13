/*
Generic Programming
    Generic programing allows the programmer to write a general algorthm that will work with all data types
    this is different to overloading as the compiler automatically creates the function of that type


What is a function template?
    A function template is a function blueprint that uses generic data types, this makes your code 
    easier to save and reuse.



*/

//preprocess
#include <iostream>



//simple function that returns the largest number
template<typename T>
T findMax(T a, T b){
    return (a>b) ? a : b;
}

//swaps a and b         note that we can also use class
template<class T>
void swap(T a, T b){
    std::cout << b << " " << a << '\n';
}

//showing an array
template<typename T>
void showArr(T* arr, size_t size){
    for (size_t i = 0; i < size; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << '\n';
}

//printing function with two data types
template <typename T, typename U>
void printout (T a, U b){
    std::cout << "First parameter: " << a << ", Second paramter: " << b << '\n';
}

//non type template arguments
template <class T, int N>
T multiply(T value){
    return value * N;
}



template <typename T>
void mySwap(T &a, T &b){
    std::cout << "generic function\n";
    T temp;
    temp = a;
    a = b;
    b = temp;
}

//explicit specialisation is when we specifically define what the data types are
template <>
void mySwap<int>(int &a, int &b){
    std::cout << "specialisation function\n";
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){

    //using our find max generic function
    std::cout << "------Finding max-----\n";

    std::cout << findMax(12,54) << '\n';
    std::cout << findMax(24.67,13.0) << '\n';
    std::cout << findMax('a','b') << '\n';          //notice that the b character will be larger

    //using our swap function
    std::cout << "-----Swapping-----\n";
    
    swap(10,5);
    swap(5,10);

    swap(12.5,41.4);
    swap(41.4,12.5);

    swap("Hello", "Ngoc");
    swap("Ngoc", "Hello");

    //using our array function
    std::cout << "------Displaying Array-----\n";

    int array1[] = {1,2,3,4,5};
    char array2[] = {'h','e','l','l','o',' ','g','o','v'};
    double array3[] = {1.11,2.22,3.33};

    showArr<int>(array1, sizeof(array1)/sizeof(int));
    showArr<char>(array2, sizeof(array2)/sizeof(char));
    showArr<double>(array3, sizeof(array3)/sizeof(double));

    //using our print function
    std::cout << "------Print Function------\n";
    printout(5,5.4532);
    printout(5,"ello there lov");

    //using our multiple function
    std::cout << "-----Multiplying------\n";
    std::cout << multiply<int,2>(10) << '\n';
    std::cout << multiply<int,2>(2.4) << '\n';              //why is it returning an int

    //specialisation function
    std::cout <<"------Specialisation function-----\n";
    int a = 1, b = 2;
    double c = 4.44, d = 2.66;
    mySwap(a,b);
    mySwap(c,d);
    std::cout << a << " " << b << '\n';
    std::cout << c << " " << d << '\n';

    //needs some quick work


}