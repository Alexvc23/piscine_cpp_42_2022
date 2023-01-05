/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:30:21 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/05 14:17:58 by jvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructors
Animal::Animal():_type("Animal")
{
	std::cout << "\e[0;33mAnimal Default Constructor called\e[0m" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	*this = copy;
	std::cout << "\e[0;33mAnimal Copy Constructor called\e[0m" << std::endl;
}

// Destructor
Animal::~Animal()
{
	std::cout << "\e[0;31mAnimal Destructor called\e[0m" << std::endl;
}

// Operators
Animal & Animal::operator=(const Animal &assign)
{
	if (this == &assign)
		return *this;
	this->_type = assign.getType();
	std::cout << BOLD << "Animal overload operator called" << END <<  std::endl;
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