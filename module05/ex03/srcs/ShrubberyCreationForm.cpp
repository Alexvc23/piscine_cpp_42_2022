/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 10:27:02 by jvalenci          #+#    #+#             */
/*   Updated: 2023/01/12 14:5 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
using std::cout;

//! Constructors
ShrubberyCreationForm::ShrubberyCreationForm() : 
Form("ShrubberyCreationForm", 145, 137), _target("default")
{
	cout << BOLD << YELLOW 
	<< "Default Constructor called of ShrubberyCreationForm\n" << END;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
	*this = copy;
	cout << BOLD << YELLOW 
	<< "Copy Constructor called of ShrubberyCreationForm\n" << END;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	cout << BOLD << YELLOW 
	<< "Parameterized Constructor called of ShrubberyCreationForm\n" << END;
}

// !Destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	cout << BOLD << RED 
	<< "Destructor called of ShrubberyCreationForm\n" << END;
}

//! Operators
ShrubberyCreationForm & ShrubberyCreationForm::operator=
(const ShrubberyCreationForm &assign)
{
	cout << BOLD << YELLOW 
	<< "Ovear load operator = called of ShrubberyCreationForm\n" << END;

	if (this == &assign)
		return (*this);
	*this = assign;

	return *this;
}

//! Getters / Setters
std::string ShrubberyCreationForm::getTarget() const
{
	return _target;
}

//! Methods
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!_signed)	
		throw ShrubberyCreationForm::noSignedException(); 
	else if (executor.getGrade() > _requiredToExec)
		throw ShrubberyCreationForm::gradeToLowException(); 
	else if (executor.getGrade() < 1)
		throw ShrubberyCreationForm::gradeToHighException(); 
	else
	{
		std::ofstream outfile(this->getTarget().append("_shrubbery").c_str());

        outfile
          << "         # #### ####\n"
          << "      ### \\/#|### |/####\n"
          << "     ##\\/#/ \\||/##/_/##/_#\n"
          << "   ###  \\/###|/ \\/ # ###\n"
          << " ##_\\_#\\_\\## | #/###_/_####\n"
          << "## #### # \\ #| /  #### ##/##\n"
          << " __#_--###`  |{,###---###-~\n"
          << "           \\ }{\n"
          << "            }}{\n"
          << "            }}{\n"
          << "            {{}\n"
          << "      , -=-~{ .-^- _\n";

		outfile.close();
	}
}


//! Stream operators
std::ostream & operator<<(std::ostream &stream, const ShrubberyCreationForm &object)
{
	cout << BOLD << YELLOW 
	<< "Ovear load operator << called of ShrubberyCreationForm\n" << END;
	//?---------------------------------------------------------------------
	stream << BOLD << RED << "Name: " << END << BOLD << object.getName()
	<< RED << " Signed: " << END << BOLD << object.getSigned() << RED 
	<< " Required grade: " << END << BOLD << object.getRequiredToSign()
	<< RED << " Required to execute: " << END << BOLD 
	<< object.getRequiredToExec() << END << std::endl;
	return (stream);
}
