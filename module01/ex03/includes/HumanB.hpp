#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
public:
	// Constructors
	HumanB();
	HumanB(const HumanB &copy);
	HumanB(std::string name);

	// Destructor
	~HumanB();

	// Getters / Setters
	std::string getName() const;
	std::string getWeapon() const;
	void setWeapon(Weapon &weapon);
	void attack() const;

private:
	std::string _name;
	Weapon *_Weapon;
};

#endif