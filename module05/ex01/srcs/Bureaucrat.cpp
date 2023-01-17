/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:13:21 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/12 11:33:11 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//! Constructors
using std::cout;

Bureaucrat::Bureaucrat()
{
	cout << BOLD << YELLOW 
	<< "Default Constructor called of Bureaucrat\n" << END;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	_grade = copy.getGrade();
	cout << BOLD << YELLOW 
	<< "Copy Constructor called of Bureaucrat\n" << END;
}

Bureaucrat::Bureaucrat(const std::string name, int grade):_name(name), _grade(grade)
{
	cout << BOLD << YELLOW 
	<< "Parameterized Constructor called of Bureaucrat\n" << END;
	try
	{
		Bureaucrat::setGrade(grade);
	}
	catch(const Bureaucrat::gradeToHighException& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(const Bureaucrat::gradeToLowException& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

//! Destructor
Bureaucrat::~Bureaucrat()
{
	cout << BOLD << RED 
	<< "Destructor called of Bureaucrat\n" << END;
}


//! Operators
Bureaucrat & Bureaucrat::operator=(const Bureaucrat &assign)
{
	cout << BOLD << "overload operator = called of Bureaucrat\n" << END;
	if (this == &assign)
		return *this;
	_grade = assign.getGrade();
	return *this;
}

//! Getters / Setters
const std::string Bureaucrat::getName() const
{
	return _name;
}
int Bureaucrat::getGrade() const
{
	return _grade;
}

//! Methods
void Bureaucrat::increment()
{
	int temp = _grade;	
	try
	{
		Bureaucrat::setGrade(--temp);
	}
	catch(const Bureaucrat::gradeToLowException& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(const Bureaucrat::gradeToHighException& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void Bureaucrat::decrement()
{
	int temp = _grade;	
	
	try
	{
		Bureaucrat::setGrade(++temp);
	}
	catch(const Bureaucrat::gradeToLowException& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(const Bureaucrat::gradeToHighException& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void Bureaucrat::signForm(Form &e)
{
	std::string _reason;

	if (e.getSigned())
	{
		std::cout << BOLD  << _name << " signed "
				  << e.getName() << END << "\n";
	}
	else
	{
		std::cout<< BOLD << _name << 
		" couldn't sign " << e.getName() << " because " 
		<<  (_reason = _grade > e.getRequiredToSign()? "Grade to low" :
		"Grade has to be grater than 0") << END << "\n";
	}
}

const char *Bureaucrat::gradeToLowException::what() const throw()
{
	return "Grade to low";
}

const char *Bureaucrat::gradeToHighException::what() const throw()
{
	return "Grade to high";
}

void Bureaucrat::setGrade(int grade)
{
	if (grade > 150)
		throw Bureaucrat::gradeToLowException();
	
	else if (grade < 1)
		throw Bureaucrat::gradeToHighException();
	else 
		_grade = grade;
}

//! Stream operators
std::ostream & operator<<(std::ostream &stream, const Bureaucrat &object)
{
	
	cout << BOLD << "Overload operator << called of Bureaucrat\n" << END;
	stream << BOLD <<  object.getName() << RED << ", bureaucrat grade " 
	<< END << BOLD << object.getGrade() << "\n" << END;
	return stream;
}