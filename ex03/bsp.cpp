#include "Point.hpp"
#include "Fixed.hpp"

Fixed& myAbs(Fixed& obj)
{
    obj.setRawBits(abs(obj.getRawBits()));
    return (obj);
}

Fixed calcArea(Point const a, Point const b, Point const c)
{
    Fixed Farea((a.getx() * (b.gety() - c.gety()) + b.getx()
    * (c.gety() - a.gety()) + c.getx() * (a.gety() - b.gety())));
    // eauivalent to 
    // (xa * (yb - yc) + xb * (yc -ya) + xc * (ya - yb) / 2) with absolut value
    return (myAbs(Farea) / 2);

}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed Area(calcArea(a, b, c));
    if (Area == 0)
        return false;
    Fixed AbArea = calcArea(a, b, point);
    Fixed AcArea = calcArea(a, point, c);
    Fixed BcArea = calcArea(point, b, c);
    if (AbArea == 0 || AcArea == 0 || BcArea == 0 \
    || AbArea == Area || AcArea == Area || BcArea == Area)
        return (false);
    if (AbArea + AcArea + BcArea == Area)
        return (true);
    return false;
}