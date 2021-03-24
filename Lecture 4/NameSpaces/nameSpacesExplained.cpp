/*
This file will explain nameSpaces, although they are pretty simple
*/

//preprocess
#include <iostream>
using namespace std;    //this is what we will be learning!

//delcaring our own namespace
namespace pedrosStuff{
    //varaible declartions
    int coolness = 1000;
    int strength = 1000;
    int happyness = 0;

    //we can aslo nest namespaces

    namespace caitlyn{
        int cute = 5000;
        int sexy = 5000;
    }


    //inline namespaces mean that i can provide an updated variable, to return to the old i must specify
    inline namespace caitlyn2{
        int sexy = 3000;
    }
}





int main(){

    /*
    namespaces are used to address the scope of a varaible, function, class etc
    these are commonly seen when refering to the std::

    to reference a name space we use :: alternativly we can define which type of namespace 
    (scope) we are using

    you should never put using nameSpace within a header file as this will apply to the entire code
    breaking the point of using it in the first place
    */

   

    int happyness = 500;

    cout << "(local) Our code has the variable happyness which is: " << happyness << endl;
    cout << "(namespace) Pedros happyness is: " << pedrosStuff::happyness << endl;
    cout << "(nested) Caitlyn is very cute: " << pedrosStuff::caitlyn::cute << endl;
    cout << "(inline) Caitlyn is also very sexy: " << pedrosStuff::sexy << endl;

    //using namespaces stays local
    {
        //defining a namespace
        using namespace pedrosStuff;
        cout << "(Using a namespace) Pedro is very strong: " << strength << endl;   //note that local variables will still overide this

        //assigning a alias
        namespace yeet = pedrosStuff::caitlyn2;
        cout << "(using an alais) Caitlyn is very sexy: " << yeet::sexy << endl;
    }

    //here we can see conditional compilation macros
    #ifdef AAA
    cout << "The varaible has been previously defined" << endl;     //this line wont even be compiled.
    #else
    cout << "It hasnt been defined" << endl;
    #endif


    return 0;

}