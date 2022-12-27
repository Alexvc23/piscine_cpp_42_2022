/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:30:21 by alexanderva       #+#    #+#             */
/*   Updated: 2022/12/26 18:30:23 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructors
Animal::Animal():_type("Animal")
{
	std::cout << "\e[0;33m Animal Default Constructor called\e[0m" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	_type = copy.getType();
	std::cout << "\e[0;33mAnimal Copy Constructor called\e[0m" << std::endl;
}

Animal::Animal(std::string type)
{
	_type = type;;
	std::cout << "\e[0;33mAnimal Fields Constructor called\e[0m" << std::endl;
}

// Destructor
Animal::~Animal()
{
	std::cout << "\e[0;31mAnimal Destructor called\e[0m" << std::endl;
}

// Operators
Animal & Animal::operator=(const Animal &assign)
{
	std::cout << "\e[0;31m Animal overator overload = called\e[0m" << std::endl;
	_type = assign.getType();
	return *this;
}

// Getters / Setters
std::string Animal::getType() const
{
	return _type;
}
void Animal::setType(std::string type)
{
	_type = type;
}

void Animal::makeSound()
{
	std::cout << "rrrrrrrrr\n";
}