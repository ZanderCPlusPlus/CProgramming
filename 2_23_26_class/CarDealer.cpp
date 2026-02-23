#include "CarDealer.hpp"

void CarDealer::addCar(const Car& car){
    inventory.push_back(car);
}
void CarDealer::showInventory() const{
    std::cout << "Showing inventory..." << std::endl;
    for(int i=0; i < inventory.size(); i++){
        std::cout << "Car " << i << ": " << std::endl;
        inventory[i].print_info();
    }
}