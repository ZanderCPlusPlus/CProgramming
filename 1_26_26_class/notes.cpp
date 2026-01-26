#include <iostream>



int max(int num1, int num2); // function prototype

int max(int num1, int num2){ // function header
    // statements
}
int count=0;
int& r=count; // reference variable. Didn't have this is C.

int main(void){
    max(1,2); // function signiture.
    return 0;
}