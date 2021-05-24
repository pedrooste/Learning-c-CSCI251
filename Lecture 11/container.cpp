/*
Containers

    Containers are used to store a collection of objects, in specfically more complicated
    objects that normal arrays cant handle. This is beneficial in a number of ways
        <advantages>

    We currently use these a lot without noticing! This includes vectors, stacks, maps etc.

Types of containers (adaptors)

    Queues
        Elements are removed in the same order that they are entered (FIFO)

    Stacks
        Elements are removed in the reverse order that they are entered (LIFO)

    Linked Lists
        Method of storing data based on logical order



Creating Containers
    We can also create our own custom containers, these can generally be based on a class. This should implement the following features
    - Insert and remove elements
    - Reorder list                  <- note that this is a common interview Q
    - Retrive and display the objects

    on top of this we should also implement general features that are handy to use.



*/

//preprocess
#include <iostream>
#include <array>


//container
template<typename T>
class MyContainer{
    private:
        T *data;
        int size;
    public:
        MyContainer(T *, int);
        ~MyContainer();
        void display();
};

template<typename T>
MyContainer<T> :: MyContainer(T *d, int s){
    size = s;
    data = new T[size];
    for(int i=0; i < size; i++){
        data[i] = d[i];
    }
}

template<typename T>
MyContainer<T> :: ~MyContainer(){
    if( data!= NULL ){
        delete [] data;
    }
}

template<typename T>
void MyContainer<T> :: display(){
    std::cout << "Container\n";
    for(int i =0; i < size; i++){
        std::cout << i+1 << "th element: " << data[i] << '\n';
    }
}




int main(){

    int intData[] = {1,2,3};
    double doubleData[] = {11.11,22.22,33.33};

    MyContainer<int> MyContainer1(intData, 4);
    MyContainer1.display();

    MyContainer<double> MyContainer2(doubleData, 3);
    MyContainer2.display();

    //note that this container can also store classes


    return 0;
}


