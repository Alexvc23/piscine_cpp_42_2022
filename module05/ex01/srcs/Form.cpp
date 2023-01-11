/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:24:24 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/09 18:0 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Constructors
Form::Form():_name("Default"), _signed(false), _requiredToSign(0)
, _requiredToExec(0)
{
	std::cout << BOLD << YELLOW << "Default Constructor called of Form: " 
	<< _name << END << std::endl;
}

Form::Form(const std::string name, const int  requiredToSign, 
const int requiredToExec):_name(name), _signed(false), 
_requiredToSign(requiredToSign), _requiredToExec(requiredToExec)
{
	std::cout << BOLD << YELLOW << "Parameterized Constructor called of Form: " 
	<< _name << END << std::endl;
}

Form::Form(const Form &copy):_name(copy.getName()), _signed(false),
 _requiredToSign(copy.getRequiredToSign()), _requiredToExec(copy.getRequiredToExec())
{
	std::cout << BOLD << YELLOW << "Copy Constructor called of Form: " 
	<< _name << END << std::endl;
}

// Destructor
Form::~Form()
{
	std::cout << BOLD << RED << "Destructor called of Form: " 
	<< _name << END << std::endl;
}

// Operators
Form & Form::operator=(const Form &assign)
{
	if (this == &assign)
		return *this;
	std::cout << BOLD << YELLOW << "Overload opeartor called of Form: " 
	<< _name <<  END << std::endl;
	return *this;
}


// Getters / Setters
const std::string Form::getName() const
{
	return _name;
}
bool Form::getSigned() const
{
	return _signed;
}
int  Form::getRequiredToSign() const
{
	return _requiredToSign;
}
int Form::getRequiredToExec() const
{
	return _requiredToExec;
}

// Methods
void Form::beSigned(Bureaucrat &a)
{
	int tempGrade = a.getGrade();
	try
	{
		if (tempGrade > 0 && tempGrade <= _requiredToSign)
			_signed = true;
		else if (tempGrade > 0 && tempGrade > _requiredToSign)
			throw Form::gradeToLowException(); 
		else
			throw Form::gradeToHighException();
	}
	catch(Form::gradeToLowException &e)
	{
		std::cerr << BOLD << CYAN << e.what() <<  END << '\n';
	}
	catch(Form::gradeToHighException &e)
	{
		std::cerr << BOLD << CYAN << e.what() << END << '\n';
	}
}

const char *Form::gradeToLowException::what() const throw()
{
	return "Grade too low";	
}

const char *Form::gradeToHighException::what() const throw()
{
	return "Grade has to be greater than 0";	
}

// Stream operators
std::ostream & operator<<(std::ostream &stream, const Form &object)
{
	stream << BOLD << RED << "Name: " << END << BOLD << object.getName()
	<< RED << " Signed: " << END << BOLD << object.getSigned() << 
	RED << " Required grade: " << END << BOLD << object.getRequiredToSign()
	<< RED << " Required to execute: " << END << BOLD << object.getRequiredToExec()
	<< std::endl;
	return stream;
}
