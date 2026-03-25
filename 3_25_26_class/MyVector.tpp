#include "MyVector.hpp"
#include <iostream>
template<typename T>
MyVector<T>::MyVector(int capacity){ // we don't provide the default value here.
    size = 0;
    this->capacity = capacity;
    elements = new T[capacity];
}
template<typename T>
MyVector<T>::~MyVector(){
    delete [] elements;
}
template<typename T>
MyVector<T>::MyVector(const MyVector<T>& other){ // this copy constructor ensures a deep copy happens when we create a twin object.
    size = other.size; // can access these private properties because we are inside the class method.
    capacity = other.capacity;
    elements = new int[capacity];
    for(int i = 0; i < size; i++){
        elements[i] = other.elements[i];
    }
}
template<typename T>
void MyVector<T>::print() const{
    std::cout << "[ ";
    for(int i = 0; i <size; i++){
        std::cout << elements[i] << " ";
    }
    std::cout << "]\n";
}
template<typename T>
void MyVector<T>::push_back(const T& val){
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
template<typename T>
bool MyVector<T>::empty() const{
    // return (size == 1) ? true : false;
    return size == 0;
}
template<typename T>
bool MyVector<T>::full() const{
    // return (size == capacity+1) ? true : false;
    return size == capacity;
}
template<typename T>
int MyVector<T>::getCapacity() const{
    return capacity;
}
template<typename T>
void MyVector<T>::allocateMemory(int memory_size){
    // std::cout << "size exceeds capacity." << std::endl;
    //here, size exceeds capacity. so we need to create a new, bigger array in the heap, copy over the elements from the old vector, then deallocate the old memory, then copy the new value.
    T* bucket = elements;
    // elements
    capacity=memory_size;
    elements = new T[capacity];
    for(int i = 0; i < size; i++){
        elements[i] = bucket[i];
    }
    delete [] bucket;
}
template<typename T>
int MyVector<T>::pop_back(){
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
template<typename T>
T& MyVector<T>::at(int index) const{
    if(index < 0 || index >= size){ // equivalent to index <= -1 || index > size-1
        throw "At: outside of boundaries\n"; // throw an exception for the edge case.
    }
    return elements[index];
}
template<typename T>
void MyVector<T>::push_front(const T& value){

}