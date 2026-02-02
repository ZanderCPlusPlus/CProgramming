#include <iostream>
#include <string>


int main(void){
    for(int i = 0; i<ARRAY_SIZE; i++){ // randomly mix around an array.
        int index = rand() % ARRAY_SIZE;
        double temp = myList[i];
        myList[i]=myList[index]
        myList[index]=temp;
    }
    
    return 0;
}