/*
Time within CPP

explaining different methods of calculating and storing time


different types of time recordings:
    real: start to end
    user: CPU time in user mode
    sys: CPU time in sys mode
    total CPU time: user + sys

Three ways of tracking time:
    Clocks: with an epoch and tick rate
    Time points: duration of time since epoch
    Durations: span of time associated with some number of ticks

what is epoch?
Epoch is the date and time that the computer uses to record time, this is known as Jan 1st, 1970

*/

//preprocess
#include <ctime>        //this is what we will be discussing!
#include <iostream>
#include <chrono>
#include <thread>

//definitions
void printTime();
void countingTime();
long fibonacci(unsigned n);
void sleeping();


int main(){

    printTime();
    std::cout << "---------" << std::endl;
    countingTime();
    std::cout << "---------" << std::endl;
    sleeping();


    return 0;
}


void printTime(){
    //prints out the general time data
    std::time_t result = std::time(nullptr);
    std::cout<< std::asctime(std::localtime(&result))       //printing the date and time
    << result << " seconds since the Epoch\n";              //printing the seconds
    std::cout<< CLOCKS_PER_SEC << std::endl;                //printing clocks per sec spent within the program

}

void countingTime(){
    //here we will count the time it takes to execute a function
    
    auto start = std::chrono::system_clock::now();      //grabs starting point
    std::cout << "f(35) = " << fibonacci(35) << "\n";
    auto end = std::chrono::system_clock::now();        //grabs ending point

    std::chrono::duration<double> elapsed_time = end-start;     //calculating time, this is the same as the auto type
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);  //getting finished computation time

    std::cout<< "finished computation at " << std::ctime(&end_time)
        << "elapsed time: " << elapsed_time.count() << "s\n";

}

long fibonacci(unsigned n){
    //fibonacci function used as example
    if (n < 2) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

void sleeping(){
    //we can also sleep within cpp, this can be demonstrated here
    std::cout << "counting down from 10: " << std::endl;
    
    for(int i = 10; i > 0; i--){
        std::cout << i << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}










