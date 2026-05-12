#include <iostream>

int count5(int n);
int main(void){
    int x;
    std::cin >> x;
    std::cout << count5(x) << std::endl;
}

int count5(int n){
    if(n == 0){
        return 0;
    }
    if(n%10 == 5){
        return 1+count5(n/10);
    }
    else{
        return count5(n/10);
    }
}