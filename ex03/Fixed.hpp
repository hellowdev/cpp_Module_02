#ifndef FIXED_HPP
#define FIXED_HPP
#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int  fixedPoint;
        static const int frac;
    public:
        Fixed();
        Fixed(const int inb); // parametirazed constructor as Int
        Fixed(const float fnb); // parametirazed constructor as float
        float toFloat( void ) const; // to bring back the float value
        int toInt( void ) const; // to bring back the int value
        Fixed(const Fixed& original); //  copy Constructor
        Fixed& operator=(const Fixed& original); //  copy assig
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        bool operator>(const Fixed& obj) const; // >
        bool operator<(const Fixed& obj) const; // <
        bool operator>=(const Fixed& obj) const; // >=
        bool operator<=(const Fixed& obj) const; // <=
        bool operator==(const Fixed& obj) const; // ==
        bool operator!=(const Fixed& obj) const; // !=
        Fixed operator+(const Fixed& obj) const; // +
        Fixed operator-(const Fixed& obj) const; // -
        Fixed operator*(const Fixed& obj) const; // *
        Fixed operator/(const Fixed& obj) const; // /
        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);
        static const Fixed& max(const Fixed& a, const Fixed& b);   
        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);   
        static Fixed& min(Fixed& a, Fixed& b);
        ~Fixed();
};

std::ostream& operator<<(std::ostream& COUT, const Fixed& obj);

#endif