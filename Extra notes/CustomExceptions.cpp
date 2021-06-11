//Creating a custom exception class

//Exception classes are just general classes where the object is thrown and custom functionalities can be defined

//preprocess
#include <iostream>

//exception class
class emptyString{
    private:
        const char* message;
    public:
        emptyString() { message = "You have entered an empty string, please try again."; };
        void printMessage() { std::cout << message << '\n'; };
};


std::string getUserInput(){
        
        std::string userInput;
        getline(std::cin, userInput);
        
        if( userInput.empty() ){
            throw emptyString();
        }
        else{
            return userInput;
        }
};

int main(){

    bool loop = true;
    
    std::string userInput;


    while(loop){
        
        std::cout << "Please enter your favourite meal: ";
        try{
            userInput = getUserInput();
            loop = false;
        }
        catch (emptyString err){
            err.printMessage();
        }

    }

    std::cout << "Ohhhh yea, its " << userInput << '\n';


}