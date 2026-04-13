#include "Point.hpp"
#include <cstring>
#include <iostream>

Point::Point(int x, int y, const char* new_tag) : x(x), y(y){
    if(new_tag){
        int size = strlen(new_tag); // cstring method
        tag = new char[size+1]; // because we need the null character.
        strcpy(tag, new_tag); // cstring method.
    }
    else{
        tag=nullptr;
    }
}
Point::~Point(){
    if(tag){
        delete [] tag;
    }
    // no reason to delete it if tag is the nullptr.
}
Point::Point(const Point& other){ // need the copy constructor since we're now using dynamic memory allocation with the parameterized constructor.
    x=other.x;
    y=other.y;
    if(other.tag){
        int size=strlen(other.tag);
        tag = new char[size+1];
        strcpy(tag,other.tag);
    }
    else{
        tag=nullptr;
    }
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
    std::string s;
    if(tag){
        s+=std::string(tag);
    }
    return s + ": (" + std::to_string(x) + ", " + std::to_string(y) + ")";
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

Point& Point::operator=(const Point& other){
    x=other.x;
    y=other.y;
    if(tag){
        delete [] tag;
    }
    if(other.tag){
        int size=strlen(other.tag);
        tag = new char[size+1];
        strcpy(tag,other.tag);
    }
    else{
        tag=nullptr;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& out, const Point& p){
    out << p.toString();
    return out;
}

std::istream& operator>>(std::istream& in, Point& p){
    //put the implementation here.
    // TODO.
    std::cout << "Enter x, y, tag ";
    in >> p.x;
    in >> p.y;
    // TODO: get the tag.
    return in;
}