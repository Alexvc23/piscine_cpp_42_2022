/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:52:55 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/12 15:22:23 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <fstream>
#include "Colors.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	public:
		//! Constructors
		Form();
		Form(const std::string name, const int  requiredToSign,
		 const int requiredToExec);
		Form(const Form &copy);
		
		//! Destructor
		virtual ~Form();
		
		//! Getters / Setters
		const std::string getName() const;
		bool getSigned() const;
		int  getRequiredToSign() const;
		int getRequiredToExec() const;

		//! Methods
		void beSigned(Bureaucrat &a);
		virtual void execute(Bureaucrat const & executor) const = 0;

		//! class exceptions 
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
		class noSignedException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		
	protected:
		//! Attributes
		const std::string	_name;
		bool 				_signed;
		const int  			_requiredToSign;
		const int			_requiredToExec;

		
		//! Operators
		Form & operator=(const Form &assign);
};

//! Stream operators
std::ostream & operator<<(std::ostream &stream, const Form &object);

#endif