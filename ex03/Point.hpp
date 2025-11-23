#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point();
        Point(const float initx, const float inity);
        Point(const Point& original);
        Point& operator=(const Point& original);
        const Fixed& getx() const;
        const Fixed& gety() const;
        ~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif