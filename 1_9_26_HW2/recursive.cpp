#include <iostream>
int evenCount(unsigned int value); // function prototype.
int main(void){
    unsigned int input; // declare the input variable.
    std::cin >> input; // allow the user to input the value.
    // print the number of even digits by calling the function.
    std::cout << evenCount(input) << "\n"; 
    return 0;
}
int evenCount(unsigned int value){ // frunction
    if (value==0){ // this is the base case
        return 0;
    }
    if((value%10)%2==0){ // checks if the rightmost digit is even
        // return 1+ the number of digits in value with the rightmost digit removed.
        return 1+evenCount(value/10); 
    }
    else{
        // if the rightmost digit is odd,
        // return the number of even digits in value with the rightmost digit removed.
        return evenCount(value/10);
    }
}