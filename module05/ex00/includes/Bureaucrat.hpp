/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:04:13 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/16 12:04:16 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Colors.hpp"

class Bureaucrat
{
	public:
		//! Constructors
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat(const std::string name, int grade);
		
		//! Destructor
		~Bureaucrat();
		
		//! Operators
		Bureaucrat & operator=(const Bureaucrat &assign);
		
		//! Getters / Setters
		const std::string getName() const;
		int getGrade() const;

		//! methods
		void	increment(void);
		void	decrement(void);
		
	private:
		//! attributes
		const std::string	_name;
		int					_grade;

		//! Constructors
		Bureaucrat();

		//! Classes
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

		//! methods
		void setGrade(int grade);
};

// Stream operators
std::ostream & operator<<(std::ostream &stream, const Bureaucrat &object);

#endif