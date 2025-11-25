#include "Fixed.hpp"
#include <iostream>

const int Fixed::frac = 8;

// ------------------ CONSTRUCTORS -------------
Fixed::Fixed(const Fixed& original)//  copy Constructor
{ 
    fixedPoint = original.fixedPoint;
    std::cout << "Copy constructor called\n";
}
Fixed::Fixed() // Default constructor
{
    fixedPoint = 0;
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int inb)
{
    std::cout << "Int constructor called\n";
    fixedPoint = inb * pow(2, frac); // equivalent by shifting to left << 8
}

Fixed::Fixed(const float fnb)
{
    std::cout << "Float constructor called\n";
    fixedPoint = std::roundf(fnb * pow(2, frac));
}
// --------------------------------------

int Fixed::toInt( void ) const
{
    return (fixedPoint / pow(2, frac)); // return back int value equivalent shift to right >>
}

float Fixed::toFloat( void ) const
{
    return (fixedPoint / pow(2, frac)); // return back float value
}

// ------------------OPERATORS -------------
bool Fixed::operator>(const Fixed& obj) const // > operator
{
    return (this->fixedPoint > obj.fixedPoint);
}

bool Fixed::operator<(const Fixed& obj) const // < operator
{
    return (this->fixedPoint < obj.fixedPoint);
}

bool Fixed::operator>=(const Fixed& obj) const // >= operator
{
    return (this->fixedPoint >= obj.fixedPoint);
}

bool Fixed::operator<=(const Fixed& obj) const // <= operator
{
    return (this->fixedPoint <= obj.fixedPoint);
}

bool Fixed::operator==(const Fixed& obj) const // == operator
{
    return (this->fixedPoint == obj.fixedPoint);
}

bool Fixed::operator!=(const Fixed& obj) const // <= operator
{
    return (this->fixedPoint != obj.fixedPoint);
}

Fixed Fixed::operator+(const Fixed& obj) const // + operator
{
    Fixed add;
    add.fixedPoint = this->fixedPoint + obj.fixedPoint;
    return (add);
}

Fixed Fixed::operator-(const Fixed& obj) const // - operator
{
    Fixed x;
    x.fixedPoint = this->fixedPoint - obj.fixedPoint;
    return (x);
}
Fixed Fixed::operator*(const Fixed& obj) const // * operator
{
    Fixed x;
    x.fixedPoint = (this->fixedPoint * obj.fixedPoint) / pow(2, frac);
    return (x);
}

Fixed Fixed::operator/(const Fixed& obj) const // / operator
{
    Fixed x;
    x.fixedPoint = (this->fixedPoint * std::pow(2, frac)) / obj.fixedPoint;
    return (x);
}

Fixed& Fixed::operator++() // ++x operator
{
    ++fixedPoint;
    return (*this);
}
Fixed Fixed::operator++(int) // x++ operator
{
    Fixed tmp = *this;
    fixedPoint++;
    return (tmp);
}
Fixed& Fixed::operator--() // ++x operator
{
    --fixedPoint;
    return (*this);
}
Fixed Fixed::operator--(int) // x++ operator
{
    Fixed tmp = *this;
    fixedPoint--;
    return (tmp);
}

std::ostream& operator<<(std::ostream& COUT, const Fixed& obj) // << operator
{
    COUT << obj.toFloat();
    return (COUT);
}

Fixed& Fixed::operator=(const Fixed& original)//  copy assignment
{ 
    fixedPoint = original.fixedPoint;
    // std::cout << "Copy assignment operator called\n";
    return (*this);
}
// ------------------------------------------------------
// --------STATIC------------

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a.fixedPoint > b.fixedPoint)
        return (a);
    return (b);
}
Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a.fixedPoint > b.fixedPoint)
        return (a);
    return (b);
}
const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a.fixedPoint < b.fixedPoint)
        return (a);
    return (b);
}
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a.fixedPoint < b.fixedPoint)
        return (a);
    return (b);
}
//-----------------------------------------------/
void Fixed::setRawBits( int const raw )
{
    fixedPoint = raw;
}

int Fixed::getRawBits( void ) const
{
    // std::cout << "getRawBits member function called\n";
    return fixedPoint;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called\n";
}