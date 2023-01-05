#include "Bureaucrat.hpp"

// Constructors
Bureaucrat::Bureaucrat()
{
	std::cout << "\e[0;33mDefault Constructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	_grade = copy.getGrade();
	std::cout << "\e[0;33mCopy Constructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade):_name(name)
{
	std::cout << "\e[0;33mParameterized Constructor called of Bureaucrat\e[0m" << std::endl;
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

// Destructor
Bureaucrat::~Bureaucrat()
{
	std::cout << "\e[0;31mDestructor called of Bureaucrat\e[0m" << std::endl;
}


// Operators
Bureaucrat & Bureaucrat::operator=(const Bureaucrat &assign)
{
	if (this == &assign)
		return *this;
	_grade = assign.getGrade();
	return *this;
}

// Getters / Setters
const std::string Bureaucrat::getName() const
{
	return _name;
}
size_t Bureaucrat::getGrade() const
{
	return _grade;
}

//Methods
void Bureaucrat::increment()
{
	int temp = _grade;	
	try
	{
		Bureaucrat::setGrade(temp--);
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
		Bureaucrat::setGrade(temp++);
	}
	catch(const Bureaucrat::gradeToLowException& e)
	{
		std::cerr << e.what() << '\n';
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

// Stream operators
std::ostream & operator<<(std::ostream &stream, const Bureaucrat &object)
{
	stream << object.getName() << ", bureaucrat grade " << object.getGrade() 
	<< std::endl;

	return stream;
}