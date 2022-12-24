/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 06:12:13 by alexanderva       #+#    #+#             */
/*   Updated: 2022/12/24 10:22:09 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructors
ScavTrap::ScavTrap():ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_guardGate = false;
	std::cout << "\e[0;33mScavTrap Default Constructor called of name " << 
	_name << END << std::endl;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_guardGate = false;
	std::cout << "\e[0;33mScavTrap parameterized Constructor called of name " << 
	_name << END << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy):ClapTrap(copy)
{
	_name = copy.getName();
	_hitPoints = copy.getHitPoints();
	_energyPoints = copy.getEnergyPoints();
	_attackDamage = copy.getAttackDamage();
	std::cout << "\e[0;33mScavTrap copy constructor called of name " << 
	_name << END << std::endl;
}

// Destructor
ScavTrap::~ScavTrap()
{
	std::cout << "\e[0;33mScavTrap destructor called of name " << 
	_name << END << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &another)
{
	std::cout << "\e[0;33mScavTrap operator overload of name " << 
	_name << END << std::endl;
	_name = another.getName();
	_hitPoints = another.getHitPoints();
	_energyPoints = another.getEnergyPoints();
	_attackDamage = another.getAttackDamage();
	return *this;
}

void ScavTrap::guardGate(void)
{
	std::cout << BLUE << "ScavTrap: " << this->_name << " in mode gate keeper\n"; 
	_guardGate = true;
}