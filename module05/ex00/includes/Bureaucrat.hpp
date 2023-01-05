#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Colors.hpp"

class Bureaucrat
{
	public:
		// Constructors
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat(const std::string name, int grade);
		
		// Destructor
		~Bureaucrat();
		
		// Operators
		Bureaucrat & operator=(const Bureaucrat &assign);
		
		// Getters / Setters
		const std::string getName() const;
		size_t getGrade() const;

		//methods
		void	increment(void);
		void	decrement(void);
		
	private:
		// Constructors
		Bureaucrat();

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

		// attributes
		const std::string _name;
		size_t _grade;

		//methods
		void setGrade(int grade);
};

// Stream operators
std::ostream & operator<<(std::ostream &stream, const Bureaucrat &object);

#endif