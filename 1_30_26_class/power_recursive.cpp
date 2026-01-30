#include <iostream>

double power(int base, int exp);

int main(void){
    std::cout << power (2,-5) << std::endl;
    return 0;
}

double power (int base, int exp){
    if(exp<0){
        if(exp == 0){
            return 1;
        }
        return 1/double(base) * power(base, exp+1);
    }
    else{
        if(exp == 0){
            return 1;
        }
        return base * power(base, exp-1);
    }
}