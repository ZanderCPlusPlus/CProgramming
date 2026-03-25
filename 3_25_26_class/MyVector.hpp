
#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP
template<typename T>
class MyVector{
public:
    MyVector(int capacity = 10); // can be used as both a no-argument constructor and an argument constructor.
    //destructor
    ~MyVector();
    //copy constructor.
    MyVector(const MyVector<T>& other);

    void print() const;
    void push_back(const T& val);
    bool empty() const;

    int getCapacity() const;

    int pop_back();

    T& at(int index) const;

    void push_front(const T& value);

private:
    T* elements; // this is our dynamic array.
    int size; // represent the current number of elements in the array.
    int capacity; // this is the maximum number of elements in the array.
    bool full() const;
    void allocateMemory(int memory_size);
};

#include "MyVector.tpp" // must include this so that the compiler sees both the .hpp and the .cpp implementation file.

#endif