#include <iostream>


//b should be smaller, we need to flip the ratio, use ratioB
double findratioB(int a, int b){
    double result = 100 - ((a-b)/(double (a)))*100;
    return result;
}
double findratioS(int a, int b){
    double result = 100 - ((a-b)/(double (b)))*100;
    return result;
}


int main(){

    std::cout << findratioB(70,25) << std::endl;
    std::cout << findratioS(70,25) << std::endl << std::endl;
    
    std::cout << findratioB(70,70) << std::endl;
    std::cout << findratioS(70,70) << std::endl << std::endl;
    
    std::cout << findratioB(0,0) << std::endl;
    std::cout << findratioS(0,0) << std::endl << std::endl;

    std::cout << findratioB(50,45) << std::endl;
    std::cout << findratioS(50,45) << std::endl << std::endl;

    return 0;
}