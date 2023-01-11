#pragma once
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Colors.hpp"
# include "Form.hpp"

class Form;
class Bureaucrat
{
	public:
		// Constructors
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		
		// Destructor
		~Bureaucrat();
		
		
		// Getters / Setters
		const std::string getName() const;
		int getGrade() const;

		//methods
		void	increment(void);
		void	decrement(void);
		void	signForm(Form &e);
		
	private:
		// attributes
		const std::string	_name;
		int					_grade;
		bool 				_init;

		// Constructors
		Bureaucrat();

		// Operators
		Bureaucrat & operator=(const Bureaucrat &assign);

		// Classes
		class gradeToLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class gradeToHighException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		//methods
		void setGrade(int grade);
};

// Stream operators
std::ostream & operator<<(std::ostream &stream, const Bureaucrat &object);

#endif