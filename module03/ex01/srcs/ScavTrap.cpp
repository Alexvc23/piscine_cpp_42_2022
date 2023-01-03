/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 06:12:13 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/03 14:37:24 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructors
ScavTrap::ScavTrap():ClapTrap()
{
	this->_name = "Default";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	this->_guardGate = false;
	std::cout << "\e[0;33mScavTrap Default Constructor called  " << 
	_name << END << std::endl;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	this->_guardGate = false;
	std::cout << "\e[0;33mScavTrap Parameterized Constructor called  " << 
	_name << END << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy):ClapTrap(copy)
{
	_name = copy.getName();
	_hitPoints = copy.getHitPoints();
	_energyPoints = copy.getEnergyPoints();
	_attackDamage = copy.getAttackDamage();
	std::cout << "\e[0;33mScavTrap Copy constructor called " << 
	_name << END << std::endl;
}

// Destructor
ScavTrap::~ScavTrap()
{
	std::cout << "\e[0;33mScavTrap Destructor called " << 
	_name << END << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &another)
{
	std::cout << "\e[0;33mScavTrap operator overload " << 
	_name << END << std::endl;
	_name = another.getName();
	_hitPoints = another.getHitPoints();
	_energyPoints = another.getEnergyPoints();
	_attackDamage = another.getAttackDamage();
	return *this;
}

void ScavTrap::attack(const std::string &target)
{

	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		std::cout << BLUE << "ScavTrap " << this->_name << " attacks " << target
				  << ", causing " << this->_attackDamage << " points of damage\n"
				  << END;
		this->_energyPoints--;
	}
	else if (!this->_energyPoints)
	{
		std::cout << BLUE << "ScavTrap" << _name
				  << " cannot attack because he hasn't enought points of energy\n"
				  << END;
	}
	else
	{
		std::cout << BLUE << "ScavTrap" << _name
				  << " cannot attack because he hasn't enought hit points \n"
				  << END;
	}
}

void ScavTrap::guardGate(void)
{
	std::cout << BOLD << "ScavTrap: " << this->_name << " in mode gate keeper\n" 
	<< END; 
	_guardGate = true;
}