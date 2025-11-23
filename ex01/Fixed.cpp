#include "Fixed.hpp"
#include <iostream>

const int Fixed::frac = 8;

Fixed::Fixed()
{
    fixedPoint = 0;
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int inb)
{
    std::cout << "Int constructor called\n";
    fixedPoint = inb * pow(2, frac);
}

Fixed::Fixed(const float fnb)
{
    std::cout << "Float constructor called\n";
    fixedPoint = std::roundf(fnb * pow(2, frac));
}

int Fixed::toInt( void ) const
{
    return (fixedPoint / pow(2, frac)); // return back int value
}

float Fixed::toFloat( void ) const
{
    return (fixedPoint / pow(2, frac)); // return back float value
}

std::ostream& operator<<(std::ostream& COUT, const Fixed& obj)
{
    COUT << obj.toFloat();
    return (COUT);
}

Fixed::Fixed(const Fixed& original)
{ //  copy Constructor
    fixedPoint = original.fixedPoint;
    std::cout << "Copy constructor called\n";
}

Fixed& Fixed::operator=(const Fixed& original)
{ //  copy assignment
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