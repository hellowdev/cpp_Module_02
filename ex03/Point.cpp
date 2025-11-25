#include "Point.hpp"

Point::Point() : x(0), y(0){} // default constr
Point::Point(const float initx, const float inity) : x(initx), y(inity){}
Point::Point(const Point& original) : x(original.x), y(original.y){} // copy constr
Point& Point::operator=(const Point& original) 
{
    (void)original;
    return (*this);
}
// get object
const Fixed& Point::getx() const
{
    return (x);
}
const Fixed& Point::gety() const
{
    return (y);
}
Point::~Point(){}