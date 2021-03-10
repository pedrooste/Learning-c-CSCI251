#include <iostream>

//this program will carry out different sorts on an array
void binarySort(int[10],int);
std::string printArray(int[10],int);

int main(){

    int unsortedArray[10] = {10,30,45,9,66,99,3,15,35,54};
    
    ///determining size of array            
    int sizeOfArray = sizeof(unsortedArray)/sizeof(unsortedArray[0]);
    //due to cpp, sizeof() returns the size of the array in the memory, therefore we will divide by each one

    std::cout << "Unsorted Array:\t\t" << printArray(unsortedArray,sizeOfArray) << std::endl;      
    //note that we have to send the size of the array as we cannot calculate it within the function, this is because that reference then becomes a pointer

    binarySort(unsortedArray,sizeOfArray);

    return 0;
}


void binarySort(int arraySort[10],int sizeOfArray){
    //performs binary sort
    bool swap = true;

    while(swap){
        
        swap = false;
        
        for(int i=0; i < sizeOfArray ; i++){
            
            //sorts small to big
            if (arraySort[i] > arraySort[i+1]){
                int temp = arraySort[i];
                arraySort[i] = arraySort[i + 1];
                arraySort[i + 1] = temp;
                swap = true;
            }
        }
    }


    std::cout << "Binary Sorted Array:\t" << printArray(arraySort,sizeOfArray) << std::endl;

}


std::string printArray(int arrayPrint[10],int sizeOfArray){
    //converts array to string to be printed

    std::string arrayString;

    for(int i = 0; i < sizeOfArray; i++){
       //std::cout << arrayPrint[i];
       arrayString += std::to_string(arrayPrint[i]);
        if(i < sizeOfArray - 1){
            arrayString += " , ";
        }
    }

    return arrayString;
}