/*
Pairs

Similar to an array, however they can contain any type of file together, this is intialised with the make_pair function.

I cant really see how these are commonly used, as we have classes, mabye only in individual scenarios.\

however here is the syntax below, it is pretty simple
*/

//preprocess
#include <iostream>


int main(){

    std::pair<int, std::string> pairEx = std::make_pair(10, "Caitlyn");

    std::cout << pairEx.first << " " << pairEx.second << '\n';

    return 0;
}