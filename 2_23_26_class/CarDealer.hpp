#include <iostream>
#include <vector>
#include "Car.hpp"
//make a vector containing cars.

#ifndef CARDEALER_HPP
#define CARDEALER_HPP

class CarDealer{
    public:
    void addCar(const Car& car); // Add car to the inventory.
    void showInventory() const; // print all cars in the inventory.

    private:
    std::vector<Car> inventory;
};
#endif