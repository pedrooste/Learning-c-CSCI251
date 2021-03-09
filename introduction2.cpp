// This is my second introduction file to c++
#include <iostream>         //this will handle user input and output


//function declarations
void comparingStrings();


// main functions
int main(){

    comparingStrings();

    return 0;
}




//comparing strings
void comparingStrings(){

    std::cout << "Please enter: 'whats up man' " << std::endl;
    
    std::string userInput;

    getline(std::cin, userInput);
    
    //comparing strings
    if(userInput == "whats up man"){

        std::cout << "The input is equal" << std::endl;
    
    }
    else{
        std::cout << "The input is not  equal" << std::endl;
    }


    //another way to do this
    //if(userInput.compare("whats up man") ==0) std::cout << "equal" << std::endl;

    std::cout << "The following will try to find a character (x) within your string" << std::endl;
    getline(std::cin, userInput);

    //checking for the letter x
    if(userInput.find_first_of("x") == -1){
        std::cout << "X was not found" << std::endl;
    }
    else{
        std::cout << "X was found!!" << std::endl;
    }
    


}







