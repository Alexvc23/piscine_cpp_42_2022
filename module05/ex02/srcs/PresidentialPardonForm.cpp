/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:45:07 by jvalenci          #+#    #+#             */
/*   Updated: 2023/01/11 11:48:57by jvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"
using std::cout;

//! Constructors
PresidentialPardonForm::PresidentialPardonForm() :
Form("PresidentialPardonForm", 25, 5), _target("default")
{
	cout << BOLD << YELLOW 
	<< "Default Constructor called of PresidentialPardonForm\n" << END;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
{
	cout << BOLD << YELLOW 
	<< "Copy Constructor called of PresidentialPardonForm\n" << END;
	*this = copy;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string  target) :
Form("PresidentialPardonForm", 25, 5), _target(target)
{
	cout << BOLD << YELLOW 
	<< "Parameterized Constructor called of PresidentialPardonForm\n" << END;
}

//! Destructor
PresidentialPardonForm::~PresidentialPardonForm()
{
	cout << BOLD << RED 
	<< "Destructor Constructor called of PresidentialPardonForm\n" << END;
}

//! Operators
PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &assign)
{
	cout << BOLD << YELLOW 
	<< "Ovear load operator = called of PresidentialPardonForm\n" << END;
	if (this == &assign)
		return *this;
	*this = assign;
	return *this;
}

//! Getters / Setters
const std::string  PresidentialPardonForm::get_target() const
{
	return _target;
}

//! Stream operators
std::ostream &operator<<(std::ostream &stream, const PresidentialPardonForm &object)
{
	cout << BOLD << YELLOW
		 << "Ovear load operator << called of PresidentialPardonForm\n"
		 << END;
	//?---------------------------------------------------------------------
		stream << BOLD << RED << "Name: " << END << BOLD << object.getName()
		<< RED << " Signed: " << END << BOLD << object.getSigned() << RED 
		<< " Required grade: " << END << BOLD << object.getRequiredToSign()
		<< RED << " Required to execute: " << END << BOLD 
		<< object.getRequiredToExec() << END << std::endl;

	return stream;
}
