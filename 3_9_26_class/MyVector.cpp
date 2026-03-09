#include "MyVector.hpp"
#include <iostream>
MyVector::MyVector(int capacity){ // we don't provide the default value here.
    size = 0;
    this->capacity = capacity;
    elements = new int[capacity];
}

MyVector::~MyVector(){
    delete [] elements;
}

MyVector::MyVector(const MyVector& other){ // this copy constructor ensures a deep copy happens when we create a twin object.
    size = other.size; // can access these private properties because we are inside the class method.
    capacity = other.capacity;
    elements = new int[capacity];
    for(int i = 0; i < size; i++){
        elements[i] = other.elements[i];
    }
}

void MyVector::print() const{
    std::cout << "[ ";
    for(int i = 0; i <size; i++){
        std::cout << elements[i] << " ";
    }
    std::cout << "]";
}
void MyVector::push_back(int val){
    if(size <= capacity){
        elements[size] = val;
        size++;
    }
    else{
        // std::cout << "size exceeds capacity." << std::endl;
        //here, size exceeds capacity. so we need to create a new, bigger array in the heap, copy over the elements from the old vector, then deallocate the old memory, then copy the new value.
        int* bucket = elements;
        // elements
    }
}