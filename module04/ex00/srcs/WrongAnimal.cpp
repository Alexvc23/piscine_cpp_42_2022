/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:30:21 by alexanderva       #+#    #+#             */
/*   Updated: 2022/12/29 10:29:41 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Constructors
WrongAnimal::WrongAnimal():_type("WrongAnimal")
{
	std::cout << "\e[0;33m WrongAnimal Default Constructor called\e[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	_type = copy.getType();
	std::cout << "\e[0;33mWrongAnimal Copy Constructor called\e[0m" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	_type = type;;
	std::cout << "\e[0;33mWrongAnimal Fields Constructor called\e[0m" << std::endl;
}

// Destructor
WrongAnimal::~WrongAnimal()
{
	std::cout << "\e[0;31mWrongAnimal Destructor called\e[0m" << std::endl;
}

// Operators
WrongAnimal & WrongAnimal::operator=(const WrongAnimal &assign)
{
	std::cout << "\e[0;31m WrongAnimal overator overload = called\e[0m" << std::endl;
	_type = assign.getType();
	return *this;
}

// Getters / Setters
std::string WrongAnimal::getType() const
{
	return _type;
}
void WrongAnimal::setType(std::string type)
{
	_type = type;
}

void WrongAnimal::makeSound() const
{
	std::cout << BOLD << "WrongAnimal doesn't make any sounds\n" << END;
}