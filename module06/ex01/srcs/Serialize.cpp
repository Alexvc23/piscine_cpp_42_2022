/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:50:14 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/20 17:34:26 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

//! Constructors
Serialize::Serialize()
{
	std::cout << "\e[0;33mDefault Constructor called of Serialize\e[0m" << std::endl;
}

Serialize::Serialize(const Serialize &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Serialize\e[0m" << std::endl;
}


//! Destructor
Serialize::~Serialize()
{
	std::cout << "\e[0;31mDestructor called of Serialize\e[0m" << std::endl;
}

//! Operators
Serialize & Serialize::operator=(const Serialize &assign)
{
	(void) assign;
	return *this;
}

uintptr_t Serialize::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serialize::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}