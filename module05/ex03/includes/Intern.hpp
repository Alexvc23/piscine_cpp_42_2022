#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "Colors.hpp"

class Intern
{
	public:
		//! Constructors
		Intern();
		Intern(const Intern &copy);
		
		//! Destructor
		~Intern();
		
		//! Operators
		Intern & operator=(const Intern &assign);
		Form *makeForm(std::string nameOfTheForm, std::string target);
		
	private:
		
};

#endif