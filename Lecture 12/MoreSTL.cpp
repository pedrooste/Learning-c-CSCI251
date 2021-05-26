/*
Generic Algorithms
    algorithm library: https://en.cppreference.com/w/cpp/algorithm

    Wihtin our STL design, we should apply some genral algorithms to containers through our iterators. This usually includes algorithms
    such as finding sorting and searching. This operation should be independant of the data type and usualy dont add new elements to the
    original sequence.

    most algorithms can be implemeted through the header "#include <algorithm>" and follow the following parametised methods
        alg(beg, end, other args);
        alg(beg, end, dest, other args);
        alg(beg, end, beg2, other args);
        alg(beg, end, beg2, end2, other args);      //here we are taking two containers

    algorithms implemented fall into the following catagories
        non modifying sequence operations (eg find)
        modifying sequence operations (eg copy)
        partitioning operations
        sorting operations
        binary search operations (on sorted ranges)
        set operations (on sorted ranges)
        heap operations
        minimum/maximum operations
        numeric operations


Function Objects
    Generic classes that have an overloaded operator.

Adaptors
    An adaptor is a mechanism that will take one containers and make it act like the other. There are three types of adaptors
        Queue (FIFO)
        Stack (LIFO)
        Prority_queue (priorities based on, by default, <)


Allocaters
    allocators are used to allocate unconstructed memory, this has been used before within an assessment for vecotrs. This serves the purpose of decoupling memory allocation from
    object construction. While we also have "new" for object constructions "std::allocator" defines precise level of control where specfic memory sizes can be defined.
    here are the common operators:
        //creating allocator
        allocator<T> a;

        //common methods
        auto const p = a.allocate(n);   //allocates raw unconstructed memory to hold n objects of type T, p will point to it.
        a.construct(p, args);           //calls constructor for objects of type T associated with the pointer p.
        a.destroy(p);                   //calls the destructors of the object T of pointer p.
        a.deallocate(p,n);              //deallocates the memory of n type T objects pointed to by p.

*/
