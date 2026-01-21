#include <iostream>
#include <string>
int main(){
    //constant double value;
    const double PI = 3.1416;
    int x=3;
    int y=2;
    std::string str = (x>2) ? "x is greater than 2" : "x is less than or equal to 2";
    std::cout << str << std::endl;
    y=(x>50) ? 50 : x;
    std::cout << y << std::endl;
    return 0;
}