/*
The Rule of Three,Five,Seven

These rules are used as guidelines when creating constructors for
your specfic class. If you create one of the constructors located within
a subset, you should include defining the rest of the constructors 
with it

3:
Desctructor                 ~X();
Copy Constructor            X(const X&);
Copy Assignment             X& operator = (const X&);

5:
All of three, including
Move constructor (C++11)    X(X&&);
Move assignment  (C++11)    X& operator = (X&&)

7:
All of five, including
Default Constructor
Parametised Constructor

Note that you can aslo have the 2 out of the 7 without the rest,
the rule of 7 is just tacked on so you know all of the different
types of constructors


*/


//preprocess
#include <iostream>
using namespace std;


class Hacker{

    private:
    std::string name;

    public:
    //3
    ~Hacker(){                                          //destructor
        cout << "This is the destructor" << endl;
    }

    Hacker(const Hacker &copyHacker){                   //copy constructor
        name = copyHacker.name;
    }

    //5
    /*note that the following special member functions are not described
        copy constructor
        move constructor
        move assignment
    */



    //7
    Hacker()= default;                                  //default constructor

    Hacker(string _name){                               //parametised constructor
        name = _name;
    }

    //getters and setters
    std::string getName(){
        return name;
    }

    void setName(std::string _name){
        name = _name;
    }

    //Display
    void displayHacker(){
        cout << "My name is " << name << "and i am a hacker.\n";
    }

};