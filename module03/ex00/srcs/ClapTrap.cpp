/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:08:37 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/02 14:24:47 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

// Constructors
ClapTrap::ClapTrap(): _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << YELLOW << "Default Constructor called of ClapTrap " << END 
	<< _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	_name = copy.getName();
	_hitPoints = copy.getHitPoints();
	_energyPoints = copy.getEnergyPoints();
	_attackDamage = copy.getAttackDamage();
	std::cout << YELLOW << "Copy Constructor called of ClapTrap " << _name
	<< END; 
}

ClapTrap::ClapTrap(std::string name):_hitPoints(10), _energyPoints(10),
 _attackDamage(0)
{
	_name = name;
	std::cout << YELLOW << "Parameterized Constructor called of ClapTrap "
	<< _name <<"\n" << END; 
}


// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << YELLOW << "Destructor called of ClapTrap "
	<< _name <<  "\n" << END; 
}


// Operators
ClapTrap & ClapTrap::operator=(const ClapTrap &assign)
{
	_name = assign.getName();
	_hitPoints = assign.getHitPoints();
	_energyPoints = assign.getEnergyPoints();
	_attackDamage = assign.getAttackDamage();
	std::cout << YELLOW << "Overload operator called of ClapTrap "
	<< _name << "\n" << END; 
	return *this;
}


// Getters / Setters
std::string ClapTrap::getName() const
{
	return _name;
}
void ClapTrap::setName(std::string name)
{ _name = name;
}

int ClapTrap::getHitPoints() const
{
	return _hitPoints;
}
void ClapTrap::setHitPoints(int hitPoints)
{
	_hitPoints = hitPoints;
}

int ClapTrap::getEnergyPoints() const
{
	return _energyPoints;
}
void ClapTrap::setEnergyPoints(int energyPoints)
{
	_energyPoints = energyPoints;
}

int ClapTrap::getAttackDamage() const
{
	return _attackDamage;
}
void ClapTrap::setAttackDamage(int attackDamage)
{
	_attackDamage = attackDamage;
}

// methods
void ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		std::cout << BLUE << "ClapTrap " << this->_name << " attacks " << target
		<< ", causing " << this->_attackDamage << " points of damage\n" << END;
		this->_energyPoints--;
	}
	else if (!this->_energyPoints)
	{
		std::cout << BLUE << "ClapTrap" << _name 
		<< " cannot attack because he hasn't enought points of energy\n" << END;
	}
	else
	{
		std::cout << BLUE << "ClapTrap" << _name 
		<< " cannot attack because he hasn't enought hit points \n" << END;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > amount)
		this->_hitPoints -= amount;
	else if (_hitPoints > 0)
		this->_hitPoints = 0;
	else
	{
		std::cout << BLUE << "ClapTrap " << _name << " is already dead, stop attacking \n"
		<< END;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0 && _hitPoints > 0 && _hitPoints + amount <= 10)
	{
		_hitPoints += amount;
		_energyPoints--;
		std::cout << PINK << "ClapTrap " << _name 
		<< " is getting repared " << amount << " units\n" << END;

	}
	else if (!_energyPoints)
	{
		std::cout << RED << "ClapTrap" << _name 
		<< " cannot be repared because he hasn't enought energy points\n" << END;
	}
	else if (!_hitPoints)
	{
		std::cout << RED << "ClapTrap" << _name 
		<< " cannot be repared because he hasn't enought hitPoints\n" << END;
	}
	else
	{
		std::cout << RED << "ClapTrap" << _name 
		<< " you are trying to repare more than 10 hitPoints, forbidden action\n" << END;
   	}
}