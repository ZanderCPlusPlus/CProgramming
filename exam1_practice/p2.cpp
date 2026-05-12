#include <iostream>
#include <random>

int f1(std::mt19937& eng){
    std::uniform_int_distribution<int> dist(1,6);
    return dist(eng);
}

int main(void){
    int seed;
    std::cin >> seed;
    std::mt19937 eng(seed);
    int x=f1(eng);
    int y=f1(eng);
    std::cout << "the sum of the two dice rolls is " << x+y << std::endl;
    std::random_device rd;
    std::mt19937 eng2(rd());
    x=f1(eng2);
    y=f1(eng2);
    std::cout << "the new more random sum of the two dice rolls is " << x+y << std::endl;
    return 0;
}