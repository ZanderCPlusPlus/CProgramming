#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <string>

int main(void){
    srand(time(0)); // set seed
    int number1 = rand() % 10; // range from 0 to 9
    int number2 = rand() % 10;

    double number = 12.34566;
    // setprecision(n), fixed, showpoint, setw(width), left, right
    std::cout << number1 << std::right << std::endl;
    std::cout << std::setprecision(3) << number << " ";
    std::cout << std::setprecision(4) << number << " ";
    std::cout << std::setprecision(5) << number << " ";
    std::cout << std::setprecision(6) << number << std::endl;
    
    std::cout << std::left << std::setw(8) << "C++" << std::setw(7) << "Hello!" << std::endl;

    int counter = 0; // initialize counter for counter-controlled loops
    while(counter < 10){ // called a sentinel value
       // above is the break condition
       counter++; // increment operation. 
    }
    do{
        std::cout << "hello" << std::endl;
    }while(1==0);

    std::string str="OOP";
    for(char c : str){
        std::cout << c << " ";
    }
    std::cout << std::endl;
    int a[]={0,1,2,3,4,5};
    for(int n : a){
        std::cout  << n << " ";
    }
    std::cout << "\n";
    return 0;
}