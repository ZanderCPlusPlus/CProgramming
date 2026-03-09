#include "MyVector.hpp"

int main(void){
    // create MyVector object dynamically.
    MyVector* mv = new MyVector(15);
    for(int i = 1; i < 10; i++){
        mv->push_back(i*i);
    }
    mv->print();

    delete mv; // good for remembering and houskeeping and from a syntax perspective.
    return 0;
}