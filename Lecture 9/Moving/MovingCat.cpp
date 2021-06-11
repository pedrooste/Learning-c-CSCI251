/*
Implementing the move constructor for a cat object
*/
#include<iostream>
#include<string>
using namespace std;

class Cat
{
private:
   string name;
   string breed;
   int age;
   static constexpr double licenseFee = 10;

public:
   Cat() = default;
   ~Cat();
   Cat(string name, string breed, int age);
   Cat(const Cat&); //copy constructor
   Cat(Cat &&myCat); //move
   
   void setName(string name){ this->name = name; };
   string getName(){ return name; };
};

Cat::~Cat()
{
  cout << "Destructor" << endl;
}

Cat::Cat(string _name, string _breed, int _age)
{
   name = _name;
   breed = _breed;
   age = _age;
   cout<<"Cat constructing"<<endl;
}

Cat::Cat(const Cat& copyCat)
{
   name = copyCat.name;
   breed = copyCat.breed;
   age = copyCat.age;
   cout<<"Copy Cat constructor"<<endl;
}

//this will construct a new cat, using the variables from the other constructor
Cat::Cat(Cat && myCat){
    name = move(myCat.name);
    breed = move(myCat.breed);
    age = move(myCat.age);
    cout<<"move Cat constructor"<<endl;
}

int main()
{
     Cat myCat("Tigger", "Fluffy unit", 3);
     Cat secondCat=myCat;
     Cat thirdCat = move(secondCat);// call move constructor
     thirdCat.setName("Bubbles");
     std::cout << "Name1: " << myCat.getName() << " Name3: " << thirdCat.getName() << '\n';
    return 0;
}
