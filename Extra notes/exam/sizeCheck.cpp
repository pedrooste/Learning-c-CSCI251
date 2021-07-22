#include <iostream>

int main(){

    int ptr1[5];
    int * const ptr2 = new int[5];          //constant pointer to int
    int * const ptr3 = new int[5];          //constant pointer to int
    ptr2[0] = 0;
    ptr2[1] = 0;
    ptr2[2] = 0;
    ptr2[3] = 0;
    ptr2[4] = 0;
    ptr1[0] = 1;

    std::cout << sizeof(ptr1)/sizeof(ptr1[0]) << " " << sizeof(ptr2)/sizeof(ptr2[0]) << '\n';
    std::cout << sizeof(ptr1) << " " << sizeof(ptr2) << '\n';
    std::cout << sizeof(ptr2) << " " << sizeof(ptr1) << '\n';
    std::cout << (*ptr2) << " " << (*ptr1) << '\n';
    return 0;
}