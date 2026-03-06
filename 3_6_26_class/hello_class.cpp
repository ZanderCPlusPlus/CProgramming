#include <iostream>

class Hello{
public:
    // no argument constructor
    Hello(){
        std::cout << "No arg constructor for " << this << std::endl; // "this" points to the adress where the object is created.
    }

    void bye() const{
        std::cout << "Bye!!!\n";
    }
private:

};

int main(void){
    // create a Hello object dynamically in the main.
    Hello* hi = new Hello;

    // call the bye method.
    hi->bye();
    (*hi).bye();

    // deallocate the memory.
    delete hi;

    return 0;
}