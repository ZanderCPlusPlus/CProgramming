#include <iostream>

void printArr(int* arr, int size);
//void doubleArr(int* arr, int size);
int* doubleArrNew(const int* arr, int size);

int main(void){
    const int SIZE = 5;
    int arr[SIZE] = {1,2,3,4,5};

    // int* doubled_array=doubleArr(arr,SIZE);
    // printArr(arr,SIZE);

    int* new_array = doubleArrNew(arr, SIZE);
    printArr(new_array,SIZE);

    // for(int i = 0; i < 99999999; i++){
    //     double* d=new double[9999999]; // allocate the memory.
    //     delete [] d; // free the memory.
    // }
    return 0;
}


int* doubleArrNew(const int* arr, int size){
    // int new_arr[size]; // local array (doesn't work).

    // create an array dynamically (meaning it is created during the runtime of the program).
    int* new_arr = new int[size];

    for(int i = 0; i < size; i++){
        new_arr[i]=2*arr[i];
    }
    return new_arr; // techincally returning somewhere that doesn't exist anymore. This creates a segmentation fault.
}

void printArr(int* arr, int size){
    for(int i = 0; i < size; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

// int doubleArr(int* arr, int size){
//     for(int i = 0; i < size; i++){
//         arr[i]*=2;
//     }
// }