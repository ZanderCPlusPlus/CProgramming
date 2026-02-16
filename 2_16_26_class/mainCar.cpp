#include "Car.hpp" // use quotes not angle brackets.

int main(void){
    // create an object of Car class.
    Car ferrari;

    ferrari.setMake("Ferrari");
    ferrari.setModel("F50");
    ferrari.setYear(2024);
    ferrari.setMPG(13.8);

    ferrari.print_info();

    return 0;
}