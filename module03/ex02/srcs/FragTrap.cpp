/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 09:51:52 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/03 14:45:37 by alexanderva      ###   ########.fr       */
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
	std::cout << YELLOW << "FragTrap Default Constructor called " 
	<< _name << END <<std::endl;
}

FragTrap::FragTrap(const FragTrap &copy):ClapTrap(copy)
{
	(void) copy;
	std::cout << YELLOW << "FragTrap Copy Constructor called " 
	<< _name << END <<std::endl;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	_highFivesGuys = false;
	std::cout << YELLOW << "FragTrap Parameterized Constructor called " 
	<< _name << END <<std::endl;
}


// Destructor
FragTrap::~FragTrap()
{
	std::cout << YELLOW << "FragTrap Destructor called " 
	<< _name << END <<std::endl;
}

// Operators
FragTrap & FragTrap::operator=(const FragTrap &assign)
{
	std::cout << YELLOW << "FragTrap Overload Opertor called " 
	<< _name << END <<std::endl;
	_name = assign.getName();
	_hitPoints = assign.getHitPoints();
	_energyPoints = assign.getEnergyPoints();
	_attackDamage = assign.getAttackDamage();
	return *this;
}

void FragTrap::attack(const std::string &target)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		std::cout << BLUE << "FragTrap " << this->_name << " attacks " << target
		<< ", causing " << this->_attackDamage << " points of damage\n" << END;
		this->_energyPoints--;
	}
	else if (!this->_energyPoints)
	{
		std::cout << BLUE << "FragTrap" << _name 
		<< " cannot attack because he hasn't enought points of energy\n" << END;
	}
	else
	{
		std::cout << BLUE << "FragTrap" << _name 
		<< " cannot attack because he hasn't enought hit points \n" << END;
	}
}

//methods
void FragTrap::highFivesGuys(void)
{
	std::cout << BOLD << "FragTrap: " << this->_name << " in highFivesGuys mode\n"
	<< END; 
	this->_highFivesGuys = true;
}