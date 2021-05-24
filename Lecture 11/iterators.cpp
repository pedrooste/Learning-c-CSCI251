/*
Iterators
    When dealing with arrays, we commonly use pointers to access an the next element within the array. This works well because the pointer can be incremented successfully due to the memory
    storage nature of a static array. Containers are not static, and their elements are not stored contiguously within memory. To fix this, we can instead use pointers which have some extra
    included functionality. These iterators are commonly refered to as smart pointers, as they contain usefull functionality such as detecting when you are at the end of an array.

Iterator Operations
    Here is a list of commonly used operators
    *iter                       : returns a reference to the element denoted
    iter->mem   (*item).mem     : dereferences iter and feches the member element
    ++iter --iter               : increments and decrements iter to the next element
    iter1 == iter2  !=          : compairs two iterators for equality, if they both denote the same element

    auto b = v.begin();          : iterator at the first element
    auto b = v.end();            : iterator at the last element + 1 (the size)
    auto b = v.cbegin();         : const begin
    auto b = v.rbegin();         : used for reverse iterators


Iterator Types
    Container::iterator iter;               : normal iterator
    Container::const_iterator iter;         : read only iterator
    Container::reverse_iterator iter;       : iterator performs in reverse order
    Container::const_reverse_iterator iter; : you get the gist


    */

   //preprocess
   #include <iostream>
   #include <vector>

int main(){
    std::vector<int> v;
    for (int i = 0; i<5; ++i){
        v.push_back(i);       //creating some new elements
    }

    std::vector<int>::iterator i;
    for(i = v.begin(); i != v.end(); ++i){
        std::cout << *i << " ";
        *i *=2;
    }

    std::cout << '\n';

    for (std::vector<int>::reverse_iterator j = v.rbegin(); j != v.rend(); ++j){
        std::cout << *j << " ";
    }

    return 0;


   }