/*
Move Assignment

Why move instead of copy?
Copy is expensive and uses lots of memory, move which was introduced in cpp+11 fixes this
Move is not copy however, it assgins to the R-Value reference.

Why move instead of refernece?
Creating a reference (&) or a pointer (*) will point to the l hand varaible, this will use the variable, kind of like an object
moving creates a reference to the right hand side, directly pointing to the memory. This can be used in great scenarios like the following
swap function

Can i see a viusal example?
Yes, see the pictures included


*/

//preprocess
#include <iostream>



//swap string function
void swapString(std::string& a, std::string& b){
    std::string temp = move(a); //this will be another reference to the right hand variable, so it wont change when we move a
    a = move(b);
    b = move(temp);
}


int main(){
    
    
    //baisc move demonstration
    int i = 6;
    int & ref = i;

    std::cout << "I value: " << i << '\n';

    ref++;

    std::cout << "ref value after add: " << ref << '\n';
    std::cout << "I value after add : " << i << '\n';

    int && refref = std::move(i);           //gets the r value of r

    refref++;

    std::cout << "refref value after add: " << refref << '\n';
    std::cout << "I value after add add: " << i << '\n';


    //moving string
    std::string string1 = "Gday";
    std::string string2 = "See ya mate!";

    std::cout << string1 << ", " << string2 << '\n';

    swapString(string1,string2);

    std::cout << string1 << ", " << string2 << '\n';


    return 0;
}

