/*
how do we read characters and lines from a file input
*/

#include <iostream>
#include <fstream>
using namespace std;


int main(){

    //opening file
    ifstream inFile;
    char fileName[] = "exams.txt";      //file name
    inFile.open( fileName );

    //getting a single character
    char nextChar;
    nextChar = inFile.get();        //gets the next character, spaces include
    cout << "character: " << nextChar << endl;

    //clearing the buffer
    inFile.ignore(100, '\n');

    //getting a whole line
    char lineBuffer[100];
    inFile.getline( lineBuffer, 100);       //this will get all white spaces and \n characters
    cout << "Line: " << lineBuffer << endl;

    //a better way to get the whole line, this will automatically terminate at the default endpoint
    string inputString;
    getline(inFile, inputString);
    cout << "Line 2: " << inputString << endl;

    //we can also use 'put' simalry to print output to a file
    ofstream outFile;
    char fileName2[] = "examOutput.txt";      //file name
    outFile.open( fileName2 );

    outFile.put('a');
    outFile.put('\n');

    //however you can just use
    outFile << inputString << endl;


    //closing files
    inFile.close();
    outFile.close();

    /*Extra notes

    Buffering:
    When you direct data out to a file, it is held inside a buffer until it becomes full, 
    this helps reduce the number of times the program has to access the external device.

    cout is buffered however cerr isnt, this is printed directly to the command line

    Binary Files:
    When printing to a text file, the varabile within the code goes through a number of conversions, see the example below
    int number goes to
    binary format goes to
    file stream goes to
    ASCII code get written to
    a file

    Working with binary files takes out some of these conversions, as the binary file stream does not have to be converted.
    */


    return 0;
}