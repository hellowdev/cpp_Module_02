#ifndef FIXED_HPP
#define FIXED_HPP
#include <string>
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
        ~Fixed();
};

std::ostream& operator<<(std::ostream& COUT, const Fixed& obj);

#endif