// TODO

//create a vector of integers. Insert 10 values. Print the vector.

#include "MyVector.hpp"

int main(void){
    MyVector<int> v;
    for(int i =0; i < 10; i++){
        v.push_back(i);
    }
    v.print();
    return 0;
}