#include <iostream>
#include <string>

class Hello{
public:
    // no argument constructor
    Hello() : size(0), messages(nullptr) { // the nullptr protects us from accessing memory that we shouldn't.
        std::cout << "No arg constructor for " << this << std::endl; // "this" points to the adress where the object is created.
    }

    void bye() const{
        std::cout << "Bye!!!\n";
    }

    //constructor with arguments.
    Hello(int n) : size(n){
        std::cout << "Argument constructor for " << this << std::endl; // "this" points to the adress where the object is created.
        messages = new std::string[size]; // dynamically allocate an array of strings.

        for(int i = 0; i < size; i++){
            messages[i] = (i % 2) ? "Welcome" : "Not Welcome";
        }
    }

    //Destructor
    ~Hello(){
        std::cout << "Destructor for " << this << std::endl;
        if (messages != nullptr){
            delete [] messages;
        }
    }

private:
    std::string* messages;
    int size;
};

int main(void){
    // create a Hello object dynamically in the main.
    Hello* hi = new Hello;

    // call the bye method.
    hi->bye();
    (*hi).bye();

    //create an object using the argument constructor.
    Hello* hi2 = new Hello(12);

    // deallocate the memory.
    delete hi; // destructor automatically called here.
    delete hi2; // destructor automatically called here also.
    // for(int i = 0; i < 100; i++){
    //     Hello(9999999); // how do we delete the messages string stored in the heap? Use a Destructor.
    // }

    Hello hi3(10);
    Hello hi4 = hi3; // causes something strange here. A destructor is called without the constructor being called according to the terminal output.

    return 0;
}