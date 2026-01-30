#include <iostream>
void pdr(unsigned int n); // print digits in reverse
int fun2(int n);
int main(void){
    //pdr(123);
    std::cout << fun2(6) << std::endl;
    return 0;
}

void pdr(unsigned int n){
    if(n<=0){
        std::cout << "\n";
        return;
    }
    std::cout << n%10;
    pdr(n/10);
}

int fun2(int n){
    if(n<=1){
        return n;
    }
    else{
        return fun2(n-1)+fun2(n-1);
    }
}