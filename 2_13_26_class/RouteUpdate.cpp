//create a Route class.
#include <iostream>
#include <string>
#include <cstdlib> // rand function.

// create a Route structure (source, destination).
class Route {
private: // access specifier to hide the parameters.
    std::string source;
    std::string destination;
    int length;

    // private method
    void updateLength(){
        length = (source.empty() || destination.empty()) ? 0 : rand() % 900 + 50;
    }

public: // another access specifier.

    //constructors must be public, have the same name as class
    //constructors have no return type (not even void)
    /*Route(){ // no arguyment constructor.
        length = 0;
    }*/

    Route (): source("-"), destination("-"), length(0){

    }
    
    //constructor with arguments
    Route(const std::string& s, const std::string& d){
        // better to use set methods.
        setSource(s);
        setDestination(d);
    }

    // create a method of the structure
    void print(){
        std::cout << source << " -> " << destination;
        std::cout << ": " << length << "miles" << std::endl;
    }

    //get methods (accessor functions, getters)
    std::string getSource(){
        return source;
    }
    std::string getDestination(){
        return destination;
    }
    int getLength(){
        return length;
    }
    
    // set functions (setters, mutator functions)
    void setSource(const std::string& new_source){
        source = new_source;
        updateLength();
    }
    void setDestination(const std::string& new_destination){
        destination = new_destination;
        updateLength();
    }
    /*void setLength(const int& new_length){
        length=new_length;
    }*/
};
/*void printRoute(const Route& route){
    std::cout << "Source:\t\t" << route.getSource() << std::endl;
    std::cout << "Destination:\t" << route.getDestination() << std::endl;
}*/
int main(void){
    //create an object of Route structure.
    Route spring_trip;
    spring_trip.print();
    spring_trip.setSource("Lakeland");
    spring_trip.setDestination("Honolulu");
    //printRoute(spring_trip);

    // call structure method
    spring_trip.print();

    //.....

    spring_trip.setDestination("New York"); // this is an old comment. we fixed it now. this causes problems, so we'll try to hide access to the properties
    spring_trip.print();

    // create second Route object.
    Route summer_vacation("Lakeland", "Tokyo");
    summer_vacation.print();

    
    return 0;
}