#ifndef FIXED_HPP
#define FIXED_HPP
#include <string>

class Fixed
{
    private:
        int  fixedPoint;
        static const int frac;
    public:
        Fixed();
        Fixed(const Fixed& original);
        Fixed& operator=(const Fixed& original);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        ~Fixed();
};
#endif