#include "Point.hpp"
#include "Fixed.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed AsomeXy(a.getx().operator+(a.gety()));
	int some = AsomeXy.getRawBits();
    // const Fixed tmpay = a.gety();
    // int  tmpax.getRawBits() / std::pow(2, 8);
    // std::sqrt(std::powd(a.getx()), )
    
    // area = a+b+c
}