#include "Point.hpp"
#include <iostream>

int main(void){
    // Point p1(3,4);
    // Point p2(5,4);
    // Point p3(81,82);

    // // compare tw points
    // if(p1 != p2){ // can also do p1.operator==(p2) for p1==p2
    //     // std::cout << "Equal\n";
    //     std::cout << (char) p3[1];
    // }
    // else{
    //     // std::cout << "Not Equal\n";
    //     std::cout << (char) p3[0];
    // }
    // // p1[0]=70 - 17;
    // // std::cout << (char) p1[0];
    // // std::cout << "MQ9\n"; // the output is the attendence code.

    // std::cout << p3.toString() << std::endl;

    // Point p4=p1+p2;
    // std::cout << "p4: " << p4.toString() << std::endl;

    // int x=1;
    // (x+=2) += 5;
    // std::cout << x << std::endl;

    // (p4+=p1) += p2;
    // std::cout << "p4: " << p4.toString() << std::endl; // why did it not work? We hadn't returned a reference. So now it should work.
    // p3=++p4;
    // std::cout << p3.toString() << std::endl;

    Point p1(3,4, "my point");
    Point p2(p1);
    Point p3;
    p3 = p1; // assignment operator. We need to overload this so it creates a deep copy.
    std::cout << p1.toString() << std::endl;
    std::cout << p2.toString() << std::endl;
    std::cout << p3.toString() << std::endl;

    Point p4(1,1,"p4");
    std::cout << p4 << std::endl;
    std::cin >> p1;
    std::cout << p1 << std::endl;

    return 0;
}