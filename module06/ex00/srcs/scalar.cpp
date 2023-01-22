/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:09:21 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/22 18:14:42 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

using std::cout;
using std::endl;

//! Constructors
Scalar::Scalar()
{
	cout << "\e[0;33mDefault Constructor called of Scalar\e[0m" << endl;
}

Scalar::Scalar(const Scalar &copy)
{
	*this = copy;
	cout << "\e[0;33mCopy Constructor called of Scalar\e[0m" << endl;
}

Scalar::Scalar(const std::string input):_input(input)
{
	cout << "\e[0;33mFields Constructor called of Scalar\e[0m" << endl;
	_double = std::atof(_input.c_str());
	this->parseInput();
	this->printOuput();
}


//! Destructor
Scalar::~Scalar()
{
	cout << "\e[0;31mDestructor called of Scalar\e[0m" << endl;
}


//! Operators
Scalar & Scalar::operator=(const Scalar &assign)
{
	_char = assign.getChar();
	_int = assign.getInt();
	_float = assign.getFloat();
	_double = assign.getDouble();
	return *this;
}


//! Getters / Setters
std::string Scalar::getInput() const
{
	return _input;
}
int Scalar::getType() const
{
	return _type;
}
char Scalar::getChar() const
{
	return _char;
}
int Scalar::getInt() const
{
	return _int;
}
float Scalar::getFloat() const
{
	return _float;
}
double Scalar::getDouble() const
{
	return _double;
}

//! Private Methods
int	Scalar::checkInput()
{
	if (!this->getInput().compare("nan") || !this->getInput().compare("+inf") ||
		!this->getInput().compare("-inf") || !this->getInput().compare("+inff")||
		!this->getInput().compare("-inff"))
	{
		return (NAN_INP);
	}
	else if (this->getInput().length() == 1 &&
		(this->getInput()[0] == '+' || this->getInput()[0] == '-' || // prevents alone special characters 
		this->getInput()[0] == 'f' || this->getInput()[0] == '.'))
	{
		return (CHAR);
	}
	else if (this->getInput().find_first_of("+-") != this->getInput().find_last_of("+-")) // catches any multiple or mixed use of + and -
		return (ERROR);
	else if (this->getInput().find_first_not_of("+-0123456789") == std::string::npos)// if only chars within the range we return int 
		return (INT);
	else if (this->getInput().find_first_not_of("+-0123456789.") == std::string::npos)// if only chars within the range we return double
	{
		if (this->getInput().find_first_of(".") != this->getInput().find_last_of(".") || // catches `0..0`
			isdigit(this->getInput()[this->getInput().find_first_of(".") + 1]) == false || // catches `0.`
			!this->getInput().find_first_of(".")) // catches `.0`
			return (ERROR);
		else
			return (DOUBLE);
	}
	else if (this->getInput().find_first_not_of("+-0123456789.f") == std::string::npos)
	{
		if (this->getInput().find_first_of("f") != this->getInput().find_last_of("f") || // catches `0.0ff`
			this->getInput().find_first_of(".") != this->getInput().find_last_of(".") || // catches `0..0f`
			this->getInput().find_first_of("f") - this->getInput().find_first_of(".") == 1 || //catches `0.f`
			!this->getInput().find_first_of(".") || // catches `.0f`
			this->getInput()[this->getInput().find_first_of("f") + 1] != '\0') // catches `0.0f0 if the last char after f is not '\0'`
			return (ERROR);
		else
			return (FLOAT);
	}
	else if ((this->getInput().length() == 1 && std::isprint(this->getInput()[0])) ||
		(this->getInput().length() == 1 && std::isalpha(this->getInput()[0])))
	{
		return (CHAR);
	}
	else
		return (ERROR);
}

void Scalar::fromChar(void)
{
	this->_char = static_cast<unsigned char>(this->getInput()[0]);
	this->_int = static_cast<int>(this->getChar());
	this->_float = static_cast<float>(this->getChar());
	this->_double = static_cast<double>(this->getChar());
}
void Scalar::fromInt(void)
{
	this->_int = static_cast<int>(this->getDouble());
	this->_char = static_cast<unsigned char>(this->getInt());
	this->_float = static_cast<float>(this->getDouble());
}
void Scalar::fromFloat(void)
{
	this->_float = static_cast<float>(this->getDouble());
	this->_char = static_cast<char>(this->getFloat());
	this->_int = static_cast<int>(this->getFloat());
}
void Scalar::fromDouble(void)
{
	this->_char = static_cast<char>(this->getDouble());
	this->_int = static_cast<int>(this->getDouble());
	this->_float = static_cast<float>(this->getDouble());
}

//!exception
const char *Scalar::wrongException::what() const throw()
{
	return "Impossible to make conversion";	
}

void	Scalar::parseInput(void)
{
	void (Scalar::*allFunctions[])(void) = {&Scalar::fromChar, &Scalar::fromInt,
	 &Scalar::fromFloat, &Scalar::fromDouble};
	 int listTypes[] = {CHAR, INT, FLOAT, DOUBLE, ERROR};
	 this->_type = this->checkInput();

	 if (this->getType() == NAN_INP)
		return;
	 for (int i = CHAR; i <= DOUBLE; i++)
	 {
		if (this->getType() == listTypes[i])
		{
			(this->*allFunctions[i])();
			break;
		}
	 }
	 if (this->getType() == ERROR)
	 		throw  Scalar::wrongException();
}

//!print output
void Scalar::printOuput(void)
{
	int type = this->getType();
	double d = this->getDouble();

	//?char	
	if (type != NAN_INP && d <= UCHAR_MAX && d >= 0)
	{
		if (std::isprint(this->getChar()))
			cout << BOLD << "char: " << CYAN << this->getChar() << END << endl;
		else
			cout << BOLD  << "char: " << RED <<  "Not displayable\n" << END;
	}
	else
		cout << BOLD << "char: " << RED << " Conversion impossible\n" << END;
	//?int
	if (type != NAN_INP && d >= std::numeric_limits<int>::min() && 
	d <= std::numeric_limits<int>::max())
	{
		cout << BOLD << "int: " << CYAN << this->getInt() << END << endl;
	}
	else
		cout << BOLD << "int: " << RED << " Conversion impossible\n" << END;
	//?float
	if (type != NAN_INP)
	{
		cout << BOLD << "float: " << CYAN << std::setprecision(6) << 
		this->getFloat() << END;
		if (!(this->getFloat() - this->getInt()))
			cout << BOLD << CYAN << ".0f" << END << endl;
		else
			cout << BOLD << CYAN << "f" << END << endl;
	}
	else
	{
		if (this->getInput() == "nan" || this->getInput() == "nanf")
			cout << BOLD << "float : " << CYAN << "nanf" << END << endl;
		else if (this->getInput()[0] == '+')
			cout << BOLD << "float : " << CYAN << "+inff" << END << endl;
		else
			cout << BOLD << "float : " << CYAN << "-inff" << END << endl;
	}
	//?double
	if (type != NAN_INP)
	{
		cout << BOLD << "double: " << CYAN << std::setprecision(15) << d << END;
		if (d >= std::numeric_limits<int>::min() && d <= std::numeric_limits<int>::max()
		&& (d - this->getInt()) == 0 )
		{
			cout << BOLD << CYAN << ".0" << END << endl;
		}
		else
			cout << endl;
	}
	else
	{
		if (this->getInput() == "nan" || this->getInput() == "nanf")
			cout << BOLD << "double : " << CYAN << "nan" << END << endl;
		else if (this->getInput()[0] == '+')
			cout << BOLD << "double : " << CYAN << "+inf" << END << endl;
		else
			cout << BOLD << "double : " << CYAN << "-inf" << END << endl;
	}
}