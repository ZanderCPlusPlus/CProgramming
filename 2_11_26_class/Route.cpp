//create a Route class.
#include <iostream>
#include <string>

// create a Route structure (source, destination).
typedef struct{
    std::string source;
    std::string destination;
    int length;

    // create a method of the structure
    void print(){
        std::cout << source << " -> " << destination;
        std::cout << ": " << length << "miles" << std::endl;
    }
}Route;
void printRoute(const Route& route){
    std::cout << "Source:\t\t" << route.source << std::endl;
    std::cout << "Destination:\t" << route.destination << std::endl;
}
int main(void){
    //create an object of Route structure.
    Route spring_trip;
    spring_trip.source = "Lakeland";
    spring_trip.destination = "Honolulu";
    spring_trip.length = 4700;
    printRoute(spring_trip);

    // call structure method
    spring_trip.print();

    //.....

    spring_trip.destination = "New York"; // this causes problems, so we'll try to hide access to the properties

    
    return 0;
}