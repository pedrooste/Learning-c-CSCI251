
//preprocess
#include <iostream>
using namespace std;

class Mother{
    public:
    string Mname;

    Mother(){
        cout << "Mother default constructor" << endl;
    }

    Mother(string _Mname){
        Mname = _Mname;
    }

};

class Daughter: public Mother{
    public:
    string Dname;

    Daughter(){
        cout << "Daughter default constructor" << endl;
    }

    Daughter(string _Dname, string _Mname) : Mother(_Mname) {
        Dname = _Dname;
    }
};


int main(){

    //figure out how to call both constructors.
    Daughter d1("yo","mumma");
    cout << "Daughter Name: " << d1.Dname << "\nMother Name: " << d1.Mname;

    return 0;
}