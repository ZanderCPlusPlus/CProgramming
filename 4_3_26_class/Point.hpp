#ifndef POINT_HPP
#define POINT_HPP

#include <string>

class Point{
public:
    Point(int x = 0, int y = 0);
    // relational operators
    bool operator==(const Point& other);
    bool operator!=(const Point& other);
    int& operator[](int index);
    std::string toString() const;
    //arithmetic operators
    Point operator+(const Point& other) const;
    Point operator*(const Point& other) const; //TODO (can you use + ?)
    Point operator-(const Point& other) const; //TODO.

    //arithmetic assignment operators
    Point& operator+=(const Point& other);
    Point& operator*=(const Point& other);// TODO
    Point& operator-=(const Point& other); // TODO

    //Preincrement operator
    Point operator++(); // no reference on purpose since it doesn't make much sense to have something like ++b=5.

    //Postincrement
    Point operator++(int); // technically oicverloading even though we never use the inside argument;

private:
int x;
int y;
};

#endif