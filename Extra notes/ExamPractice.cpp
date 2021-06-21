
#include <iostream>
#include <vector>

//question 1
class Animal{
    private:
    std::string name;
    int age;
    public:
    Animal(std::string name, int age): name(name), age(age) {};
};

class Cat: Animal{
    private:
    int tail;
    int mass;
    int teeth;
    Cat(std::string name, int age, int tail, int mass, int teeth) : Animal(name,age), tail(tail), mass(mass), teeth(teeth) {};

};


//q2

class Victem{
};

class Dragon{
    private:
        std::string name;
        int age;
        int size;
        std::string cave;
        std::vector<Victem> victem;

    public:
        Dragon(std::string name, int age, int size, std::string cave) : name(name), age(age), size(size), cave(cave) {};    //victems will be added later through a set method
        
        void display(){
            std::cout << name << ' ' << age << ' ' << size << ' ' << cave << '\n';
        }
        void displayVictemHist();       //no implementation
};

//q3
/*
friend functions are functions that are defined outside of the classes scope however have access to all attributes within the 'friend' objects, this is especially usefull within this
scenario, where two objects are being used to compare. A friend function can be created by passing in the objects reference as a parameter.
*/
/*
void compare(Dragon& dragon, Cat& cat){
    int catDetails = cat.getTail() * cat.getTeeth();

    if(catDetails > dragon.getAge(); ){
        std::cout << "Cat is better";
    }
    else{
        std::cout << "Dragon is better";
    }
}
*/

//q4
/*
This pointer is used to reference the memory address of an attribute stored within the object, this becomes especially usefull when paremeteres are passed with the same variable name
as the objects attributes, as the confusion of naming clashes are avoided.

To print out the contents within a class, we can use the this or pointer to member operator to gain direct access to private variables stored within the class as the memory address is
referenced, allowing us to print out the object information.
*/

//q5

/*
Procedural programming is heavily defined, not allowing for many different routes within the software as each needs to be hard coded. Object Oriented Programming solved this issue, creating object like structures
that could hold different information depedning on the context. Abstract classes were also introduced, where the functionality of a method could be later defined in a specialised class. Generic programming aimed to increase
the abstraction of code, thus reducing redundant code that has to be implemented, this was introduced by creating class and function templates that do not need a data type specified, as this is defined within the implementation.

For example object oriented programming introduced the concept of polymorphism, where specialisation can be defined within a class. Within procedural programming, this would have to be defined through two implemetations of a struct
and method functionality, creating redundant code. However if if you needed to use a class with two different data types to store and provide functionality, you would have to create two specfic classes relating to each data type. 
Generic programming sought to fix this issue, allowing for template functions and classes where the data type is unknown.

*/

//q6

class Lecture{};
class Subject{};

class Instance{
    private:
    Lecture lect;
    Subject sub;
    std::string location;
    std::string session;
};

//q7
/*
question answer

The rule of three defines that if you define one of the three following, you should probably define them all; destructor, copy construtor, copy assignment operator. The defined copy
constructor allows for the implementation of a deep copy instead of a generic shallow copy. This is often paired with a destructor as allocated memory may need to be specfically deleted.

*/

class B{
    public:
        int number;
};

class A{
    private:
        B b;

    public:
        A shallowCopy(){
            A c;
            c.b = this->b;
            return c;
        }

        A deepCopy(){
            A c;
            B d;
            d.number = this->b.number; 
            c.b = d;

            return c;
        }
};

//q8

/*
Within this fragment of code we can see two possible scenarios, one is that class A has been derived from two classes B and C, this allows the class A to call both initalisation methods.
The other scenario is that C has been derived from B and A is derived from C. This means that the grandparent class is called first, then the child class is called.

*/

//q9?

//q10
/* Header files can be seen as an interface, where the client can view the methods and attributes that have been defined, however, not how they have been implemented. The object files contain this implementation
however it has been compiled so the source code and implementation cannot be seen. This is commonly provided to the client to limit the amount of implmenation that they can see, thus protecting your source code.

*/

//q11

class stormexception{
    private:
        bool custom;
        int m;
    
    public:
        stormexception(){
            custom = false;
        };
        stormexception(int m){
            this->m = m;
            custom = true;
        };

        void what(){
            if(custom){
                std::cout << "Storm: " << m << "kilometers away!\n";
            }
            else{
                std::cout << "Storm: Take cover NOW!";
            }
        }
};

void functionEx(){
    try{
        int storm = 5;

        if(storm > 0){
            throw stormexception(storm);
        }
        else{
            throw stormexception();
        }
    }
    catch(stormexception err){
        err.what();
    }
}

//q12
/*
Containers are used to store specfic data, providing functionality based on the data. Iterators provide an interface to this data pointing to each piece of information based on the index, allowing the user to proceed through the data without knowing the implementation.
*/

void functionEx2(){
    std::vector<int> ex = {1,2,3,4,5,6};

    std::vector<int>::iterator it;

    for(it = ex.begin(); it != ex.end(); it++){
        std::cout << *it << " ";
    }
}

