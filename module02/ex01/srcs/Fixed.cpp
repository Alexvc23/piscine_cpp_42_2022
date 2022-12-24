#include "Fixed.hpp"

const int Fixed::_fractBits = 8;

// Constructors
Fixed::Fixed()
{
	_fixedPoint = 0;
	std::cout << "\e[0;33mDefault Constructor called\e[0m" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	_fixedPoint = copy.getRawBits();
	std::cout << "\e[0;33mCopy constructor called\e[0m" << std::endl;
}

Fixed::Fixed(const int intNum)
{
	_fixedPoint = intNum << _fractBits;
	std::cout << "\e[0;33mInt constructor called\e[0m" << std::endl;
}

Fixed::Fixed(const float floatNum)
{
	_fixedPoint = roundf(floatNum *  (1 << _fractBits));
	std::cout << "\e[0;33mFloat constructor called\e[0m" << std::endl;
}


// Destructor
Fixed::~Fixed()
{
	std::cout << "\e[0;31mDestructor called\e[0m" << std::endl;
}


// Operators
Fixed & Fixed::operator=(const Fixed &assign)
{
	_fixedPoint = assign.getRawBits();
	std::cout << "\e[0;33mCopy assignment operator called\e[0m" << std::endl;
	return *this;
}


// Getters / Setters
int Fixed::getRawBits() const
{
	std::cout << "\e[0;33mMember function getRawBits called\e[0m" << std::endl;
	return _fixedPoint;
}
void Fixed::setRawBits(int fixedPoint)
{
	_fixedPoint = fixedPoint;
}

//Methods
int Fixed::toInt(void) const
{
    return (_fixedPoint >> _fractBits);
}
float Fixed::toFloat(void) const
{
    return ((float)_fixedPoint / (float)(1 << _fractBits));
}

// Stream operators
std::ostream & operator<<(std::ostream &stream, const Fixed &object)
{
	stream << object.toFloat();
	return stream;
}