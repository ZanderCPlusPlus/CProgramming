#include <iostream>

class Dad{
public:
Dad(){
    std::cout << "Dad's constructor\n";
}
virtual ~Dad(){
    std::cout << "Dad's destructor\n";
}
private:

};

class Son : public Dad{
public:
Son(){
    std::cout << "Son's constructor\n";
    data = new int[100];
    std::cout << "Memory was allocated\n";
}

~Son(){
    std::cout << "Son's constructor\n";
    delete [] data;
    std::cout << "Memory was deallocated\n";
}

int* data;

private:

};

int main(void){
    // Son son;
    Dad* dad = new Son; // can do this because every son is a dad for these classes.

    delete dad;
    return 0;
}