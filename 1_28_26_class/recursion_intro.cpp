#include <iostream>

void countdown(int n);
int main(void){
    countdown(10);
    return 0;
}

void countdown(int n){
    if(n<1){
        return; // base case.
    }
    std::cout << n << " ";
    countdown(n-1); // call the same function (recursive call).
    // need a break condition, otherwise the stack will overflow and result in a segmentation fault.
}