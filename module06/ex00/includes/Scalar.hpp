/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:15:42 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/19 07:51: by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Scalar_HPP
# define Scalar_HPP

#include <iomanip>
#include <limits>
#include <iostream>
#include <string>
#include "Colors.hpp"

//!enumeration
enum types{CHAR, INT, FLOAT, DOUBLE, ERROR, NAN_INP};

class Scalar
{
	public:
		//! Constructors
		Scalar();
		Scalar(const Scalar &copy);
		Scalar(const std::string input);

		//! Destructor
		~Scalar();

		//! Operators
		Scalar & operator=(const Scalar &assign);
		
		//! Getters / Setters
		std::string getInput() const;
		int getType() const;
		char getChar() const;
		int getInt() const;
		float getFloat() const;
		double getDouble() const;

		class wrongException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

	private:
		std::string _input;
		int 		_type;
		char		_char;
		int 		_int;
		float		_float;
		double		_double;

		//!Methods
		int checkInput(void);
		void parseInput(void);
		void fromChar(void);
		void fromInt(void);
		void fromFloat(void);
		void fromDouble(void);
		void printOuput(void);
};

#endif