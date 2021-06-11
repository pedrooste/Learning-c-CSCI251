//Here i will list stuff that i should already be doing but im lazy

//enhanced for
//enhanced return

//preprocess
#include <iostream>

int findmax(int a, int b){
    return (a > b) ? a : b;
}

int main(){

    std::cout << "Max between 5 and 9: " << findmax(5,9) << '\n';

    char message[] = {'Y','o','m','u','m','m','a'};

    for(char letter: message){
        std::cout << letter << " ";
    }


    return 0;
}