/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:52:55 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/11 14:07:15 by jvalenci         ###   ########.fr       */
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
		Form();
		Form(const Form &copy);
		Form(const std::string name, const int  requiredToSign,
		 const int requiredToExec);

		// Operators
		Form & operator=(const Form &assign);
		
		// Destructor
		~Form();
		
		// Getters / Setters
		const std::string getName() const;
		bool getSigned() const;
		int  getRequiredToSign() const;
		int getRequiredToExec() const;

		// Methods
		void beSigned(Bureaucrat &a) = 0;
		
	private:
		//attributes
		const std::string	_name;
		bool 				_signed;
		const int  			_requiredToSign;
		const int			_requiredToExec;

		

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
		class noSignedException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

// Stream operators
std::ostream & operator<<(std::ostream &stream, const Form &object);

#endif