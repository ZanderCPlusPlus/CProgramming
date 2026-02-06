#include <iostream>

int count;
int* countPtr=&count;

int x=5;
int* px=&x;
int main(void){
    std::cout << *px << "\n";
    return 0;
}