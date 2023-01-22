/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 06:30:19 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/22 09:29:53 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Colors.hpp"

class Base
{
	public:
		//! Constructors
		Base();
		Base(const Base &copy);
		
		//! Destructor
		virtual ~Base();
		
		//! Operators
		Base & operator=(const Base &assign);
		
	private:
		
};

//! Public functions
Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif