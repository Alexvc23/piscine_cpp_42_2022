/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 09:51:52 by alexanderva       #+#    #+#             */
/*   Updated: 2022/12/26 15:47:05 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Constructors
FragTrap::FragTrap():ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	_highFivesGuys = false;
	std::cout << "\e[0;33mFragTrap Default Constructor called " 
	<< _name << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy):ClapTrap(copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of FragTrap\e[0m" << std::endl;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	_highFivesGuys = false;
	std::cout << YELLOW << "FragTrap Parameterized Constructor called"
	<< _name << END << std::endl;
}


// Destructor
FragTrap::~FragTrap()
{
	std::cout << "\e[0;33mFragTrap Destructor called " 
	<< _name << std::endl;
}

// Operators
FragTrap & FragTrap::operator=(const FragTrap &assign)
{
	std::cout << "\e[0;33m FragTrap Operator = overload called "
	<< this->_name <<  END << std::endl;
	_name = assign.getName();
	_hitPoints = assign.getHitPoints();
	_energyPoints = assign.getEnergyPoints();
	_attackDamage = assign.getAttackDamage();
	return *this;
}

//methods
void FragTrap::highFivesGuys(void)
{
	std::cout << "\e[0;33mFragTrap member method hightFivesGuys called for " 
	<< _name << std::endl;
	this->_highFivesGuys = true;
}