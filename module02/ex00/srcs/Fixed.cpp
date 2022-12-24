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
	std::cout << "\e[0;33mCopy Constructor called\e[0m" << std::endl;
}

// Destructor
Fixed::~Fixed()
{
	std::cout << "\e[0;31mDestructor called\e[0m" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &assign)
{
	std::cout << "\e[0;31mCopy assignment operator called\e[0m" << std::endl;
	if (this != &assign)
		this->_fixedPoint = assign.getRawBits();

	return (*this);
}

// Getters / Setters
int Fixed::getRawBits() const
{

	std::cout << "\e[0;31mgetRawBits member function called\e[0m" << std::endl;
	return _fixedPoint;
}
void Fixed::setRawBits(int fixedPoint)
{
	std::cout << "\e[0;31msetRawbits member function called\e[0m" << std::endl;
	_fixedPoint = fixedPoint;
}