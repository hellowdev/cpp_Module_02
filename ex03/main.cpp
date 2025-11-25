#include <iostream>
#include "Point.hpp"

int main( void ) {

    Point a(0, 0);
    Point b(4, 0);
    Point c(2, 4);
    Point point(3, 1);

    if (!bsp(a, b, c, point))
    {
        std::cout << "The Point is outside\n";
        return (1);
    }
    std::cout << "The Point is inside\n";
    return (0);
}