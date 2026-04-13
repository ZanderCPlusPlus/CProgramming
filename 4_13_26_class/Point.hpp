#ifndef POINT_HPP
#define POINT_HPP

#include <string>

class Point{
public:
    Point(int x = 0, int y = 0, const char* new_tag=nullptr);

    // destructor.
    ~Point();

    //copy constructor.
    Point(const Point& other);

    // relational operators
    bool operator==(const Point& other);
    bool operator!=(const Point& other);
    int& operator[](int index);
    std::string toString() const;
    //arithmetic operators
    Point operator+(const Point& other) const;
    Point operator*(const Point& other) const; //TODO (can you use + ?)
    Point operator-(const Point& other) const; //TODO.
    Point& operator=(const Point& other);

    //arithmetic assignment operators
    Point& operator+=(const Point& other);
    Point& operator*=(const Point& other);// TODO
    Point& operator-=(const Point& other); // TODO

    //Preincrement operator
    Point operator++(); // no reference on purpose since it doesn't make much sense to have something like ++b=5.

    //Postincrement
    Point operator++(int); // technically oicverloading even though we never use the inside argument;

    //This is not a member of the class. But this allows us to access the private data of the class.
    friend std::istream& operator>>(std::istream& in, Point& p); // the friend function can see everything in the class, even the private stuff.

protected:
int x;
int y;
char* tag;
};

std::ostream& operator<<(std::ostream& out, const Point& p); // non-member function that allows easy printing for Points;

#endif