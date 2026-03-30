#include "Point.hpp"
#include <iostream>

int main(void){
    Point p1(3,4);
    Point p2(5,4);
    Point p3(81,82);

    // compare tw points
    if(p1 != p2){ // can also do p1.operator==(p2) for p1==p2
        // std::cout << "Equal\n";
        std::cout << (char) p3[1];
    }
    else{
        // std::cout << "Not Equal\n";
        std::cout << (char) p3[0];
    }
    p1[0]=70 - 17;
    std::cout << (char) p1[0];
    std::cout << "MQ9\n"; // the output is the attendence code.
    return 0;
}