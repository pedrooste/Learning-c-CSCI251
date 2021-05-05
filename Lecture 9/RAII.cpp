/*
RAII - Resoruce Acquisition Is Initialisation (Smart Pointers)


cpp technique which bids the life cycle of a reasoruce that must be aquired before use to the lifetime of an object, this ensures that resources are cleared up freely when
they move out of scope. This reduces memory leaks.

As we know memory leaks occour when when heap allocated (new keyword) variables dont get deleted. We can fix this instead by encapsulating these varaibles within classes
to which the destructor will be automatically called. This can be done with Smart Pointers

Unique Pointers
    objects that only have one pointer accessing the variable
Shared Pointers
    multiple pointers can point to an object



this will be demonstrated below so we can visualise the destructor, however it will be automatically deleted with any object.
*/

//preprocess
#include <iostream>
#include <memory>

class Pizza{
    public:
        //constructors
        Pizza(){
            std::cout << "Pizza get in my tum tum\n";
        }

        ~Pizza(){
            std::cout << "I eat all da pizza, yum yum \n";
        }
};


void uniquePointers(){
    //declaring a unique pointer
    std::unique_ptr<Pizza> pizzaObject(new Pizza());
    //this pizza will be automatically deleted when the function ends
}

void sharedPointers(){
    //delcaring a shared pointer
    std::shared_ptr<Pizza> pizzaObject1(new Pizza());

    //creating a pointer to the above pointer
    std::shared_ptr<Pizza> pizzaObject2 = pizzaObject1;

    //these will both be automatically deleted

}

int main(){

    std::cout << "Starting Program...\n";

    uniquePointers();

    std::cout << "--------------------\n";

    sharedPointers();

    std::cout << "Ending Program...\n";
}