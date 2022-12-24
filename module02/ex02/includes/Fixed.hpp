/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 10:28:06 by alexanderva       #+#    #+#             */
/*   Updated: 2022/12/21 10:28:40 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	public:
		// Constructors
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(const int intNum);
		Fixed(const float floatNum);
		
		// Destructor
		~Fixed();
		
		// Operators
		Fixed & operator=(const Fixed &other);

		// Comparison operators
		bool operator>(const Fixed &other) const;
		bool operator<(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		bool operator<=(const Fixed &other) const ;
		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;

		//Arithmetic operators
		Fixed operator+(const Fixed &other);
		Fixed operator-(const Fixed &other);
		Fixed operator*(const Fixed &other);
		Fixed operator/(const Fixed &other);

		/*pre-increment and post-increment, pre-decrement and 
		post-decrement) operators */
		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);

        // Getters / Setters
		int getRawBits() const;
		void setRawBits(int fixedPoint);

        //methods
        int toInt(void) const;
        float toFloat(void) const;

		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed const &min(Fixed const &a, Fixed const &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static Fixed const &max(Fixed const &a, Fixed const &b);
		
	private:
		int _fixedPoint;
		static const int _fractBits = 8;
		
};

// Stream operators
std::ostream &operator<<(std::ostream &stream, const Fixed &object);

#endif