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
    std::cout << "]\n";
}
void MyVector::push_back(int val){
    if(full()) {
        allocateMemory(capacity*2);
    }
    elements[size] = val;
    size++;
    // if(size <= capacity){
        
    // }
    // else {
    //     elements[size] = val;
    //     size++;
    // }
}

bool MyVector::empty() const{
    // return (size == 1) ? true : false;
    return size == 0;
}

bool MyVector::full() const{
    // return (size == capacity+1) ? true : false;
    return size == capacity;
}

int MyVector::getCapacity() const{
    return capacity;
}

void MyVector::allocateMemory(int memory_size){
    // std::cout << "size exceeds capacity." << std::endl;
    //here, size exceeds capacity. so we need to create a new, bigger array in the heap, copy over the elements from the old vector, then deallocate the old memory, then copy the new value.
    int* bucket = elements;
    // elements
    capacity=memory_size;
    elements = new int[capacity];
    for(int i = 0; i < size; i++){
        elements[i] = bucket[i];
    }
    delete [] bucket;
}

int MyVector::pop_back(){
    if(!empty()){
        if(size < capacity/2){ // have some logic here to shrink the size of the vector when you are using very little of it.
            allocateMemory(capacity / 2);
        }
        return elements[--size];
    }
    else{
        throw "Pop_back: empty vector\n"; // sends an exception to the caller of the method pop_back().
    }
}

int& MyVector::at(int index) const{
    if(index < 0 || index >= size){ // equivalent to index <= -1 || index > size-1
        throw "At: outside of boundaries\n"; // throw an exception for the edge case.
    }
    return elements[index];
}