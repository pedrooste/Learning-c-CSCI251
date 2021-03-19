//This program demonstrates the basics of file input and output

#include <fstream>
#include <iostream>
#include <sstream>

int main(){
    
    
    std::ifstream inData("names.txt");          //declare and open an input file
    std::ofstream outData("marks.txt");         //declare and open output file
    
    //if you wanted to append data you could instead use (or any other paramenter depending)
    //std::ofstream outdata("marks.txt", std::ios::app);

    std::string firstName;                      //array of names to be read from the file
    std::string names[10];                      //array of names to be stored from file

    if(inData.is_open()){
        //if the file has failed to open
        
        //reading names from the file
        int i = 0;
        
        while(inData >> firstName){             //this will evaluate as true when the read is successfull

            names[i] = firstName;
            i++;
        }

        //reading out the names
        for(std::string name : names){
        std::cout << name << std::endl;
        }

    }
    else{
        //error output
        std::cerr << "The file could not open" << std::endl;
    }


    //outputting to the file
    for(std::string name : names){
        outData << "Name: " << name << std::endl;
    }


    //closing files
    inData.close();
    outData.close();

    return 0;
}

