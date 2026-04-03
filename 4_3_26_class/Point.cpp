#include "Point.hpp"

Point::Point(int x, int y) : x(x), y(y){

}
bool Point::operator==(const Point& other){
    return (x == other.x && y == other.y);
}
bool Point::operator!=(const Point& other){
    // return (x != other.x || y!=other.y);
    return !(*this == other); // don't need to worry about *this being in its own parentheses.
}
int& Point::operator[](int index){
    return (index == 0) ? x : y;
}

std::string Point::toString() const{
    return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
}

Point Point::operator+(const Point& other) const{
    return Point(x+other.x, y+other.y);
}

Point& Point::operator+=(const Point& other){
    // //option 1
    // x+=other.x;
    // y+=other.y;

    // return *this;

    // //option 2
    // // Copy of the current object.
    // Point temp(x,y);
    // Point temp2(*this); // this uses the default copy constructor which works when there are no dynamic memory allocations.

    // return temp;
    // return temp2;

    //option 3
    *this = *this+other;
    return *this;
}

Point Point::operator++(){
    x++;
    y++;
    return *this;
}

Point Point::operator++(int){
    return Point(x++, y++);
}