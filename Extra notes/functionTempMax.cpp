//Make a function template that finds the max of two values

//preprocess
#include <iostream>

//find max tempalte
template<typename T>
T findMax(T param1, T param2){
    return (param1 > param2 ) ? param1 : param2;            //enhanced return statement
}

//container
template<typename T>
class MyContainer{
    private:
        T *data;
        int size;
    public:
        MyContainer(T*, int);
        ~MyContainer();
        void display();
        T findMax();
};

//constructor
template<typename T>
MyContainer<T> :: MyContainer(T *d, int s){
    this->size = s;
    data = new T[size];
    for(int i=0; i < size; i++){
        data[i] = d[i];
    }
}

//deconstructor
template<typename T>
MyContainer<T>::~MyContainer(){
    if (data!= NULL){
        delete [] data;
    }
}

//display method
template<typename T>
void MyContainer<T> :: display(){
    std::cout << "\nContainer:\n";
    for(int i =0; i < size; i++){
        std::cout << i+1 << "th element: " << data[i] << '\n';
    }
}

//find Max method
template<typename T>
T MyContainer<T> :: findMax(){
    T max = data[0];

    for(int i = 1; i < size; i++){
        if(data[i] > max){
            max = data[i];
        }
    }

    return max;
}

template<typename T>
T findMinArr(T* arr, int s){
    T min = arr[0];
    
    for(int i = 1; i < s; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    return min;
}




int main(){

    int a = 5;
    int b = 8;
    std::cout << "Integer: " << findMax(a,b) << '\n';

    float c = 6.66;
    float d = 4.78;
    std::cout << "Float: " << findMax(c,d) << '\n';

    int intData[] = {5,2,3};
    double doubleData[] = {15.11,46.22,33.33};

    MyContainer<int> MyContainer1(intData, 3);
    MyContainer1.display();
    std::cout << "Max value: " << MyContainer1.findMax() << '\n';

    MyContainer<double> MyContainer2(doubleData, 3);
    MyContainer2.display();
    std::cout << "Max value: " << MyContainer2.findMax() << '\n';


    return 0;
}