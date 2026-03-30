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