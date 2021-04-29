/*
Stream manipulators are used all the time to manipulate the contents of a stream
This is commonly seen with endl, note that the operator "<<" has been overloaded to point to a function


Here is an example of a user defined stream manipulator, this can be done similary with parameters
*/

//preprocess
#include <iostream>
#include <iomanip>

std::ostream& Currency( std::ostream& os) {
    os << '$';
    os << std::setprecision(2);
    os << std::fixed << std::setfill('*');
    os.width(12);
    return os;
}

int main(){
    double balance1 = 1024.4563;
    double balance2 = 1002342.43;
    std::cout << Currency << balance1 << std::endl;
    std::cout << Currency << balance2 << std::endl;

    return 0;
}

