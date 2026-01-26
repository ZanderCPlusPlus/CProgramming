#include <iostream> 

void add_five(int& num); // the reference variable formal parameter allows the function to modify the actual input.
void t1();

int main(void){
    int a=10;
    //create a reference variable.
    int& a_ref=a;

    a+=10;
    std::cout << a << " " << a_ref << std::endl; // prints 20 20

    a_ref *= 10;
    std::cout << a << " " << a_ref << std::endl;

    add_five(a);
    std::cout << a << " " << a_ref << std::endl;
    
    return 0;
}

void add_five(int& num){
    num += 5;
}

void t1(){
    static int x = 1; // scope is only this function. But it retains the value in the memory for the entire duration of the program.
    // next calls of this function will reuse the last known value for x.
}