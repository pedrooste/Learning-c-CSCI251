//Basic example demonstrating operator overloading

#include <iostream>

class Distance{
    private:
        int length;
    public:
        Distance(int length) : length(length) {};
        void setLength(int length) {this->length = length;};
        int getLength() { return length; };

        //operator overloading
        int operator+(Distance d){
            return this->length + d.length;
        }

        int operator-(Distance d){
            return this->length - d.length;
        }
};


int main(){

    Distance dis1(5);
    Distance dis2(15);

    std::cout << "Distance Together: " << dis1 + dis2 << '\n';
    std::cout << "Distance Subtracted: " << dis2 - dis1 << '\n';


    return 0;
}