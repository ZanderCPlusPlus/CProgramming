// Car class implementation file.
#include "Car.hpp"



void Car::setMake(const std::string& new_make){ // notice the Car:: that tells the compiler that the function belongs to the clas Car.
    if(!new_make.empty()){
        make = new_make;
    }
}

void Car::setModel(const std::string& new_model){ // notice the Car:: that tells the compiler that the function belongs to the clas Car.
    if(!new_model.empty()){
        model = new_model;
    }
}

void Car::setYear(int new_year){
    if(new_year < 1900){ // too old
        year = 1900;
    }
    else if(new_year > 2026){ // too young
        year = 2026;
    }
    else{ // in between, assign it with the year.
        year = new_year;
    }
}

void Car::setMPG(double new_mpg){
    mpg=(new_mpg >= 0) ? new_mpg : 0;
}

Car::Car(){ // use the set methods because there is some logic behind determining the properties.
    setMake("...");
    setModel("...");
    setYear(1900);
    setMPG(0);
}

void Car::print_info() const{
    std::cout << make << std::endl;
    std::cout << model << std::endl;
    std::cout << year << std::endl;
    std::cout << mpg << std::endl;
    std::cout << "Fuel capacity: " << fuel_capacity << std::endl;
    std::cout << "fuel level: " << fuel_level << std::endl;
}

std::string Car::getMake() const{
    return make;
}
std::string Car::getModel() const{
    return model;
}
int Car::getYear() const{
    return year;
}
double Car::getMPG() const{
    return mpg;
}
void Car::refuel(double gallons){
    if(fuel_level + gallons <= fuel_capacity){
        fuel_level+=gallons;
    }
    else{
        std::cout << "cannot overfill fuel tank." << std::endl;
    }
}
void Car::setFuelCapacity(double new_fc){
    fuel_capacity = new_fc;
}