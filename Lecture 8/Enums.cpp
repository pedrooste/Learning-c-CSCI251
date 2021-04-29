/*
Enumerations
    Enumerations are used to define sets of integer values, these can be in the form of 'plain' enums and class enums
    These integer values can be assinged per variable, or automatically set according to their position.

Enums help avoid nameing clashes, which can be seen below
    // webcolors.h (third party header)
    #define RED   0xFF0000
    #define GREEN 0x00FF00
    #define BLUE  0x0000FF

    // productinfo.h
    // The following define product subtypes based on color
    #define RED    0
    #define PURPLE 1
    #define BLUE   2

    int webby = BLUE;   // webby == 2; probably not what was desired

Here is the updated class enum, which can hold more information, this will also avoid name clashes
    enum class Web_color { red = 0xFF0000, green = 0x00FF00, blue = 0x0000FF };
    enum class Product_info { red = 0, purple = 1, blue = 2 };

    int webby = blue;   // error: be specific
    Web_color webby = Web_color::blue;

Unscoped vs Scoped
    Unscoped enums do not have a class, and remain global for the rest of the code. This can cause secuirty concerns and nameing clashes.
    Scoped enums have a class and can be accessed via a scope resolution operator (typename::value)
    Due to unscoped enums automatically casting to an int, it can also be incorrectly used within numerical operations.
*/


//examples

//preproccess
#include <iostream>

int main(){
    enum class Web_color { red = 0xFF0000, green = 0x00FF00, blue = 0x0000FF };
    enum class Product_info { red = 0, purple = 1, blue = 2 };

    //int webby = blue;   // error: be specific
    Web_color webby = Web_color::blue;

    //note that enums are stored as integers
    std::cout << (int) webby << std::endl;

    return 0;
}
