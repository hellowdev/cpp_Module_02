#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"



int main( void ) {

    Point a(10, 20);
    Point b(10, 20);
    Point c(10, 20);

    Point h = c;
    c = h;
    Point x(c);
    // Point b(original);
    return 0;
}