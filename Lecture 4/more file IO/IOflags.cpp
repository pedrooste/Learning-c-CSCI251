/*
explains the different flags, demonstrating an invalid character

to demonstrate an invalid character put an odd number of integers in the text file.
to demonstrate end of file put an even number of integers
*/

#include <fstream>
#include <iostream>
using namespace std;

int main(){
    
    std::ifstream inFile;        //declarining input file

    char fileName[] = "flagExample.txt";      //file name

    std::string lastname, mark;      //declaring read varaibles

    inFile.open( fileName );
    
    string nameFirst;
    string nameLast;
    
    
    do{
        inFile>> nameFirst>> nameLast;
        cout<<nameFirst<<"+++"<< nameLast<<"+++";
        
        if(inFile.fail()){
            cerr << "Invalid Character";

            /*
            instead of returning you could also clear the input line, continuing on
            inFile.clear();
            inFile.ignore(100, '\n');       //this clears the stream buffer
            */


            return -1; // invalid character
        }
        
        if(inFile.bad()){
            cerr << "Hardware failure";
            return -2; // hardware failure
        }
        
        if(inFile.eof()){
            cerr << "End of file";
            return 0;
        }
    }
    while( inFile.good() );

    inFile.close();
    return 0;
    
    
    



}