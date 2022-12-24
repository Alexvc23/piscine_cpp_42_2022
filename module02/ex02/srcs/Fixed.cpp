/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 10:27:53 by alexanderva       #+#    #+#             */
/*   Updated: 2022/12/21 10:28:32 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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
	std::cout << "\e[0;33mParameterized int var constructor called\e[0m" << std::endl;
}

Fixed::Fixed(const float floatNum)
{
	_fixedPoint = roundf(floatNum *  (1 << _fractBits));
	std::cout << "\e[0;33mParameterized float var constructor called\e[0m" << std::endl;
}


// Destructor
Fixed::~Fixed()
{
	std::cout << "\e[0;31mDestructor called\e[0m" << std::endl;
}


// Operators
Fixed & Fixed::operator=(const Fixed & other)
{

	_fixedPoint = other.getRawBits();
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


// Comparison operators
bool Fixed::operator>(const Fixed &other) const
{
	return (_fixedPoint > other.getRawBits());
}

bool Fixed::operator<(const Fixed &other) const
{
	return (_fixedPoint < other.getRawBits());
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (_fixedPoint >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (_fixedPoint <= other.getRawBits());
}

bool Fixed::operator==(const Fixed &other) const
{
	return (_fixedPoint == other.getRawBits());
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (_fixedPoint != other.getRawBits());
}


// Artithmetic operators
Fixed Fixed::operator+(const Fixed &other)
{
	Fixed tmp(*this);
	tmp.setRawBits(_fixedPoint + other.getRawBits());
	return (tmp);
}

Fixed Fixed::operator-(const Fixed &other)
{
	Fixed tmp(*this);
	tmp.setRawBits(_fixedPoint - other.getRawBits());
	return (tmp);
}

Fixed Fixed::operator*(const Fixed &other)
{
	Fixed tmp(*this);
	tmp.setRawBits((_fixedPoint * other.getRawBits()) / (1 << _fractBits));
	return (tmp);
}

Fixed Fixed::operator/(const Fixed &other)
{
	Fixed tmp(*this);
	tmp.setRawBits((_fixedPoint / other.getRawBits()) * (1 << _fractBits));
	return (tmp);
}

/*pre-increment and post-increment, pre-decrement and
post-decrement) operators */
Fixed Fixed::operator++()
{
	this->_fixedPoint++;
	return (*this);
}
Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return (tmp);
}
Fixed Fixed::operator--()
{
	this->_fixedPoint--;
	return (*this);
}
Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

// Stream operators
std::ostream & operator<<(std::ostream &stream, const Fixed &object)
{
	stream << object.toFloat();
	return stream;
}


Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (b);
	return (a);
}
Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (b);
	return (a);
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (b);
	return (a);
}
Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (b);
	return (a);
}