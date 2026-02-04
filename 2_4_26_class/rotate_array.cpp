#include <iostream>

//function prototype
void rotate_right(const int src[], int dest[], int size, int k);
void rotate_right1loop(const int src[], int dest[], int size, int k);

int main(void){
    const int SIZE=7;
    int list[SIZE]={1,2,3,4,5,6,7};
    int newlist[SIZE];
    rotate_right(list, newlist, SIZE, 1);
    //print the list
    for (int i : list){ // range-based for loop
        std::cout << i << " ";
    }
    std::cout <<"\n";
    for (int i : newlist){ // range-based for loop
        std::cout << i << " ";
    }
    std::cout <<"\n";
    return 0;
}

void rotate_right(const int src[], int dest[], int size, int k){
    int new_first = size-(k%size);

    //copy from new_first until the end of source
    int i = 0;
    int j = new_first;
    while(j < size){
        dest[i]=src[j];
        i++;
        j++;
    }
    
    //copy from the beginning of src till new_first
    j=0;
    while(j < new_first){
        dest[i]=src[j];
        i++;
        j++;
    }
}

void rotate_right1loop(const int src[], int dest[], int size, int k){
    /*int new_first = size-(k%size);

    //copy from new_first until the end of source
    int i = 0;
    int j = new_first;
    while(j < size){
        dest[i]=src[j];
        i++;
        j++;
    }
    
    //copy from the beginning of src till new_first
    j=0;
    while(j < new_first){
        dest[i]=src[j];
        i++;
        j++;
    }*/
}