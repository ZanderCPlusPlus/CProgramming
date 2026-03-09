
#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP
class MyVector{
public:
    MyVector(int capacity = 10); // can be used as both a no-argument constructor and an argument constructor.
    //destructor
    ~MyVector();
    //copy constructor.
    MyVector(const MyVector& other);

    void print() const;
    void push_back(int val);

private:
    int* elements; // this is our dynamic array.
    int size; // represent the current number of elements in the array.
    int capacity; // this is the maximum number of elements in the array.
};
#endif