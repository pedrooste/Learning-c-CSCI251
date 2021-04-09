/*
This file will contain an implemenation of inheritence within a simple form

*/


//https://www.studytonight.com/cpp/order-of-constructor-call.php

//preprocess

#include <iostream>

//classes

//main class
class hacker{
    private:
    std::string name;
    int age;
    
    //this can be accessed as public by any sub class, while private will only be accessable through methods
    protected:
    std::string gender;;


    public:
    //constructors
    hacker(){

    }

    hacker(std::string n, int a){
        name = n;
        age = a;
    }



    //getters and setters
    void setName(std::string Hname){
        name = Hname;
    }

    void setAge(int Hage){
        age = Hage;
    }

    void setGender(std::string g){
        gender = g;
    }

    std::string getName(){
        return name;
    }

    int getAge(){
        return age;
    }

    std::string getGender(){
        return gender;
    }

    void scanning(){
        //prints out a scanning statmetn
        std::cout << getName() << " is scanning for intrusions" << std::endl;
    }
};

//inheritence
class WHatHacker: public hacker{

    private:
    std::string organisation;

    public:
    //constructors
    WHatHacker(){

    };

    WHatHacker(std::string n, int a, std::string o) :hacker(n, a){
        o = organisation;

    }


    //getters and setters
    
    void setOrganisation(std::string o){
        organisation = o;
    }

    std::string getOrganisation(){
        return organisation;
    }

    void WStatement(){
        //prints out a statemetn
        std::cout << getName() << " is a white hat hacker! They work for " << getOrganisation() << std::endl;
    }

};

//mulitlevel inheritence
class ChildHacker: public WHatHacker{
    
    public:
    void childStatements(){
        std::cout << getName() << " is a child of a White Hat Hacker, only " << getAge() << " years old and a " << gender << std::endl;
    }
};

//another main class
class Green{
    public:
    std::string gStatement(){
        return "I am green";
    }
};

class Red{
    public:
    std::string rStatment(){
        return "I am red";
    }
};

class Color: public Green, public Red{
    public:

    void colorStatment(){
        std::cout << gStatement() << " and " << rStatment() << std::endl;
    }
};


int main(){
    
    
    //single level inheritence
    WHatHacker hacker1("pedro", 55,"uow");
    //hacker1.setName("Pedro");
    //hacker1.setAge(55);
    //hacker1.setOrganisation("UOW");
    //hacker1.setGender("Male");

    hacker1.scanning();
    hacker1.WStatement();

    std::cout << "-----\n";

    //multilevel inheritence
    ChildHacker hacker2;
    hacker2.setName("Caitlyn");
    hacker2.setAge(20);
    hacker2.setOrganisation("ANU");
    hacker2.setGender("Female");


    hacker2.WStatement();
    hacker2.childStatements();

    std::cout << "-----\n";

    //multiple inheritence
    Color color1;
    color1.colorStatment();

    std::cout << "-----\n";


    return 0;
}


//questions
//how do constructors work