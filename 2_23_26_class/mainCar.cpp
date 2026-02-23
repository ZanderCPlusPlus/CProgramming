#include "Car.hpp" // use quotes not angle brackets.
#include "CarDealer.hpp"

int main(void){
    // create an object of Car class.
    Car ferrari;

    ferrari.setMake("Ferrari");
    ferrari.setModel("F50");
    ferrari.setYear(2024);
    ferrari.setMPG(13.8);

    //ferrari.print_info();

    Car ferrari_spider("Ferrari", "Spider", 2021, 13.5, 16, 10);
    Car ferrari_super("Ferrari", "Super GT", 2019, 10.5, 16, 11);
    //ferrari_spider.print_info();
    //ferrari_super.print_info();

    //create a car dealer.
    CarDealer lakeland_ferrari;

    lakeland_ferrari.addCar(ferrari);
    lakeland_ferrari.addCar(ferrari_spider);
    lakeland_ferrari.addCar(ferrari_super);
    lakeland_ferrari.showInventory();

    return 0;
}