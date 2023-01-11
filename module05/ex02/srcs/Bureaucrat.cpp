/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:13:21 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/11 08:56:25 by jvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// !Constructors
Bureaucrat::Bureaucrat()
{
	std::cout << "\e[0;33mDefault Constructor called of Bureaucrat\e[0m" 
	<< std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy):_name(copy.getName()),
_grade(copy.getGrade())
{
	std::cout << BOLD << YELLOW << "Copy Constructor called of Bureaucrat" 
	<< END << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade):_name(name), _grade(0), _init(true)
{
	std::cout << BOLD << YELLOW << "Parameterized Constructor called of Bureaucrat " 
	<< _name << END << std::endl;
	try
	{
		Bureaucrat::setGrade(grade);
	}
	catch(const Bureaucrat::gradeToHighException& e)
	{
		std::cerr << BOLD << CYAN << e.what() << END << '\n';
	}
	catch(const Bureaucrat::gradeToLowException& e)
	{
		std::cerr << BOLD << CYAN << e.what() << END << '\n';
	}
	
}

// !Destructor
Bureaucrat::~Bureaucrat()
{
	std::cout << BOLD << RED << "Destructor called of Bureaucrat "
	 << _name << END <<  std::endl;
}

// !Operators
Bureaucrat & Bureaucrat::operator=(const Bureaucrat &assign)
{
	if (this == &assign)
		return *this;
	_grade = assign.getGrade();
	return *this;
}

// !Getters / Setters
const std::string Bureaucrat::getName() const
{
	return _name;
}
int Bureaucrat::getGrade() const
{
	return _grade;
}

// !Methods
void Bureaucrat::increment()
{
	int temp = _grade;	
	try
	{
		if (_init == false)
			throw 1;
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
	catch(int x)
	{
		std::cout  << BOLD << "Grade variable hasn't been initialized you\
 cannot increment\n" << END;
	}
}

void Bureaucrat::decrement()
{
	int temp = _grade;	
	
	try
	{
		if (_init == false)
			throw 1;
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
	catch(int x)
	{
		std::cout  << BOLD << "Grade variable hasn't been initialized you\
 cannot decrement\n" << END;
	}
	
}

void Bureaucrat::setGrade(int grade)
{
	if (grade > 150)
	{
		_init = false;
		throw Bureaucrat::gradeToLowException();
	}
	
	else if (grade < 1)
	{
		_init = false;
		throw Bureaucrat::gradeToHighException();
	}
	else 
	{
		_init = true;	
		_grade = grade;
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
	return "Grade has to be greater than 0";
}


// ! Stream operators
std::ostream & operator<<(std::ostream &stream, const Bureaucrat &object)
{
	stream << BOLD <<  object.getName() << RED << ", bureaucrat grade " 
	<< END << BOLD << object.getGrade() << END;
	return stream;
}