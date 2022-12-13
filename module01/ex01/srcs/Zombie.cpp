/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 07:32:55 by alexanderva       #+#    #+#             */
/*   Updated: 2022/12/12 10:50:25 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Constructors
Zombie::Zombie()
{
	std::cout << "\e[0;33mDefault Constructor called of Zombie\e[0m" << std::endl;
}

Zombie::Zombie(std::string name):_name(name)
{
	std::cout << "\e[0;33mDefault Constructor called of Zombie " << _name 
	<< "\e[0m" << std::endl;

}

Zombie::Zombie(const Zombie &copy)
{
	_name = copy.getName();
	std::cout << "\e[0;33mCopy Constructor called of Zombie " << _name 
	<< "\e[0m" << std::endl;
}


// Destructor
Zombie::~Zombie()
{
	std::cout << "\e[0;31mDestructor called of Zombie " << _name 
	<< "\e[0m" << std::endl;

}

// Getters / Setters
std::string Zombie::getName() const
{
	return _name;
}

void Zombie::setName(std::string name)
{
	_name = name;
}

void	Zombie::announce(void)
{
	std::cout << this->_name <<": " << ": BraiiiiiiinnnzzzZ...\n";
}