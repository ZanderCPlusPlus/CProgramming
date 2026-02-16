#include <string>
#include <iostream>

/*
TODO

1. implement get methods.
2. create a constructor with arguments.
3. Add mileage property (odometer value).
4. Add property fuel capacity (tank capacity).
5. Add the property fuel level (current level of fuel).
6. void refuel(double gallons);
7. void drive(double distance);
*/

class Car{
// make, model, year, and mgp.
public:

    // create a no-arg constructor
    Car();

    // set methods
    void setMake(const std::string& new_make);\
    void setModel (const std::string& new_model);
    void setYear(int new_year);
    void setMPG(double new_mpg);

    //get methods
    std::string getMake();
    std::string getModel();
    int getYear();
    double getMPG();

    //class methods.
    void print_info();

private:
    std::string make;
    std::string model;
    int year;
    double mpg;
};

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

void Car::print_info(){
    std::cout << make << std::endl;
    std::cout << model << std::endl;
    std::cout << year << std::endl;
    std::cout << mpg << std::endl;
}