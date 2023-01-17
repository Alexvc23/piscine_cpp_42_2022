#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		//! Constructors
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm(const std::string target);
		
		//! Destructor
		~RobotomyRequestForm();
		
		//! Operators
		RobotomyRequestForm & operator=(const RobotomyRequestForm &assign);
		
		//! Getters / Setters
		const std::string get_target() const;

		//! Methods
		void execute(Bureaucrat const & executor) const;
		
	private:
		const std::string _target;
		
};

// Stream operators
std::ostream & operator<<(std::ostream &stream, const RobotomyRequestForm &object);

#endif