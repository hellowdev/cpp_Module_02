#include "Fixed.hpp"
#include <iostream>

const int Fixed::frac = 8;

Fixed::Fixed()
{
    fixedPoint = 0;
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& original)
{
    fixedPoint = original.fixedPoint;
    std::cout << "Copy constructor called\n";
}

Fixed& Fixed::operator=(const Fixed& original)
{
    fixedPoint = original.fixedPoint;
    std::cout << "Copy assignment operator called\n";
    return (*this);
}

void Fixed::setRawBits( int const raw )
{
    fixedPoint = raw;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called\n";
    return fixedPoint;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}