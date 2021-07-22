/*
STL, containers, iterators and more!

                                        -----STL, Standard Template Library-----

STL is an evolving standard for generic programming, making use of compile time with polymorphism. This is done by seperating the data and operators into two seperate sections.
Seperating the data into containers is usefull as we can use iterators as an interface to access them.

Other advantages also include:
    reduced memory size due to less specialised componenets
    reusability
    guarenteed performance and efficiency

When shouldnt you use STL:
    when the functions needed have to be implemented
    the data structure is easier than the operation

STL Componenets
    Containers
    Iterators
    Generic algorithms
    Function objects
    Adaptors            (similar to containers)
        Allocators

                                                -----STL Containers-----

There are two main types of containers, these are

Sequential:
    linear organisation, position of elements are determined by when the are inserted
Associative:
    elements are not necessarily stored within linear fashion, stored and linked on the basis of a key value
    
Sequential Containers
    vector          : Flexible size array, supports fast random access, inserting not at the back may be slow
    deque           : Double ended queue, supports fast random access, can insert/delete at front or back
    list            : Doubly linked list, only bidirectonal sequential access, fast insert/delete at any point
    forward list    : similar but only accessed in a forward fashion
    array           : fixed size, supports fast random access, cannot add or remove elements
    string          : specialised, not fully templated. Similar to a vector but for characters.

    These are pretty explanatory and the implementation can be looked up when you get around to it, a basic array will be demonstrated below

Associative Containers 
    sorted (elements sorted by a key)

    map             : Associative array holding key value pairs             forward only iteration, same with a set
    set             : Container in which the key is the value               notice that you cannot have duplicates
    multimap        : map but with a key that can appear multiple times
    multiset        : set but with a key that can appear multiple times

    Unordered Collections

    unordered_map   : map organised by a hash function
    unordered_set   : set organised by a hash function
    unordered_multimap  : hashed map, keys can appear multiple times            (hash as in secuirty)
    unordered_multiset  : hashed set, keys can appear multiple times


*/

//preprocess
#include <iostream>
#include <array>
#include <string.h>
#include <set>
#include <map>

int main(){

    //arrays
    std::cout << "\n\nArrays\n\n";

    //displaying array display functionality
    std::array<char, 50> a{1,2,3};
    strcpy(&a[0],"Yo Hello Govna");
    std::cout << a[0] << "+++" << a[1] << '\n';
    std::cout << a.data() << '\n';                  //this will print out the entire contents

    //displaying array swap functionality
    std::array<char, 50> brba1{"ello mr heisbrug"};
    std::array<char, 50> brba2{"ello mr ank"};
    brba1.swap(brba2);
    std::cout << brba1.data();

    //sets
    std::cout << "\n\nSets\n\n";

    std::set<int> exclude = {1,1,2};        //this will not include the second 1
    //proving that is in the set
    if(exclude.count(1)!=0){
        std::cout << "1 is an element within the set\n";
    }

    //the set only has a size of two as one one is excluded.
    std::cout << "Size: " << exclude.size() << '\n';
    for (auto i = exclude.begin(); i !=exclude.end(); i++){
        std::cout << *i << '\n';
    }


    //maps
    std::cout << "\n\nMaps\n\n";

    //creating a map
    std::map<int, std::string> mapStudent;
    mapStudent.insert(std::pair<int,std::string>(1,"Student_one"));
    mapStudent.insert(std::pair<int,std::string>(2,"Student_two"));
    mapStudent.insert(std::pair<int,std::string>(3,"Student_three"));
    
    //using an interator to print out the map contents
    std::map<int, std::string>::iterator iter;

    for(iter = mapStudent.begin(); iter != mapStudent.end(); iter++){
        std::cout << iter->first << " " << iter->second << '\n';
    }

    //printing size
    std::cout << "Size: " << mapStudent.size() << '\n';





    return 0;




}