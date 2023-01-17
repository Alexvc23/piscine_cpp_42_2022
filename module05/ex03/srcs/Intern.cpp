/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:34:01 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/16 11:41:57 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

//! Constructors
Intern::Intern()
{
	std::cout << BOLD << YELLOW << "Default Constructor called of Intern " 
	<< END << std::endl;
}

Intern::Intern(const Intern &copy)
{
	(void) copy;
	std::cout << BOLD << YELLOW << "Copy Constructor called of Intern " 
	<< END << std::endl;
}

//! Destructor
Intern::~Intern()
{
	std::cout << BOLD << RED << "Destructor called of Intern " 
	<< END << std::endl;
}

//! Fonctions local

static Form *makeShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

static Form *makeRobotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

static Form *makePresident(std::string target)
{
	return (new PresidentialPardonForm(target));
}

//! Methods
Form *Intern::makeForm(std::string nameOfTheForm, std::string target)
{
	std::string list[] = {"ShrubberyCreationForm", "RobotomyRequestForm",
	 "PresidentialPardonForm"};
	Form *(*great_maker[])(std::string target) = {&makeShrubbery, &makeRobotomy,
	&makePresident};

	for (int i = 0; i < 3; i++)
	{
		if ( nameOfTheForm == list[i])
		{
			std::cout << BOLD << BLUE << "Intern creates " + list[i] + "\n"
			<< END;
			return (*great_maker[i])(target);
		}
	}
	std::cerr << BOLD << RED << "Form: " + nameOfTheForm + " doesn't exist\n";
	return nullptr;
}

//! Operators
Intern & Intern::operator=(const Intern &assign)
{
	std::cout << BOLD << YELLOW << "Overload operator = called of Intern " 
	<< END << std::endl;
	(void) assign;
	return *this;
}

