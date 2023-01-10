/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:52:55 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/09 18:36:08 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
#include "Colors.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	public:
		// Constructors
		Form(const std::string name, const int  requiredToSign,
		 const int requiredToExec);
		Form(const Form &copy);
		
		// Destructor
		~Form();
		
		// Getters / Setters
		const std::string getName() const;
		bool getSigned() const;
		int  getRequiredToSign() const;
		int getRequiredToExec() const;

		// Methods
		void beSigned(Bureaucrat &a);
		
	private:
		//attributes
		const std::string	_name;
		bool 				_signed;
		const int  			_requiredToSign;
		const int			_requiredToExec;

		//constructors
		Form();
		
		// Operators
		Form & operator=(const Form &assign);

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
};

// Stream operators
std::ostream & operator<<(std::ostream &stream, const Form &object);

#endif