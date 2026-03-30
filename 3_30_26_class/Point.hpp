#ifndef POINT_HPP
#define POINT_HPP

class Point{
public:
    Point(int x = 0, int y = 0);
    // relational operators
    bool operator==(const Point& other);
    bool operator!=(const Point& other);
    int& operator[](int index);

private:
int x;
int y;
};

#endif