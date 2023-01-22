/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 06:31:07 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/22 06:31:09 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

// Constructors
B::B()
{
	std::cout << "\e[0;33mDefault Constructor called of B\e[0m" << std::endl;
}

B::B(const B &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of B\e[0m" << std::endl;
}


// Destructor
B::~B()
{
	std::cout << "\e[0;31mDestructor called of B\e[0m" << std::endl;
}


// Operators
B & B::operator=(const B &assign)
{
	(void) assign;
	return *this;
}

