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
		Fixed & operator=(const Fixed &assign);

        // Getters / Setters
		int getRawBits() const;
		void setRawBits(int fixedPoint);

        //methods
        int toInt(void) const;
        float toFloat(void) const;
		
	private:
		int _fixedPoint;
		static const int _fractBits;
		
};

// Stream operators
std::ostream &operator<<(std::ostream &stream, const Fixed &object);

#endif