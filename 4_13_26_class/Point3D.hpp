#ifndef POINT3D_HPP
#define POINT3D_HPP
#include "Point.hpp"

class Point3D : public Point {
public:
Point3D(int x = 0, int y = 0, int z=0, const char* new_tag=nullptr);
friend std::ostream& operator<<(std::ostream& out, const Point3D& p);
private:
int z;
};

#endif
