/*
Simple piece of software that tests a switch case based on a range, this is genrally considered a 
"That is the case range extension of the GNU C compiler and not standard C or C++"
This will be tested within the UOW bitvise server

conclusion, this works
*/

//preprocess
#include <iostream>

int main(){

    int a[6] = {0,13,35,76,22,100};

    for(int i = 0; i < 6; i++){
        switch(a[i]){
            case 0 ... 20: std::cout << "0 ... 20\n"; break;
            case 21 ... 40: std::cout << "21 ... 40\n"; break;
            case 41 ... 60: std::cout << "41 ... 60\n"; break;
            case 61 ... 80: std::cout << "61 ... 80\n"; break;
            case 81 ... 100: std::cout << "81 ... 100\n"; break;
        }
    }

    return 0;
}