#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
	public:
		// Constructors
		Fixed();
		Fixed(const Fixed &copy);
		
		// Destructor
		~Fixed();

		// Overloaded Operators
		Fixed &operator=(const Fixed &assign);
		
		// Getters / Setters
		int getRawBits() const;
		void setRawBits(int fixedPoint);
		
	private:
		int _fixedPoint;
		static const int _fractBits;
};

#endif