#include <string>
#include <iostream>

/*
TODO

1. implement get methods. Done.
2. create a constructor with arguments. Done.
3. Add mileage property (odometer value).
4. Add property fuel capacity (tank capacity).
5. Add the property fuel level (current level of fuel).
6. void refuel(double gallons);
7. void drive(double distance);
*/

//add inclusion guard.
#ifndef CAR_HPP
#define CAR_HPP

class Car{
// make, model, year, and mgp.
public:

    // create a no-arg constructor
    Car();
    // create a constructor with arguments
    Car(std::string Make, std::string Model, int Year, double MPG, double Fuel_Capacity, double Fuel_Level=0){
        setMake(Make);
        setModel(Model);
        setMPG(MPG);
        setYear(Year);
        setFuelCapacity(Fuel_Capacity);
        refuel(Fuel_Level);
    }

    // set methods
    void setMake(const std::string& new_make);\
    void setModel (const std::string& new_model);
    void setYear(int new_year);
    void setMPG(double new_mpg);
    void setFuelCapacity(double new_fc);

    //get methods
    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;
    double getMPG() const;

    // extra methods
    void refuel(double gallons);

    //class methods.
    void print_info() const;

private:
    std::string make;
    std::string model;
    int year;
    double mpg;
    double fuel_capacity;
    double fuel_level;
};

#endif