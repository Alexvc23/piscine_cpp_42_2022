#include "../includes/allheaders.hpp"

// Constructors
HumanB::HumanB() : _Weapon(nullptr)
{
	std::cout << "\e[0;33mDefault Constructor called of HumanB\e[0m" << std::endl;
}

HumanB::HumanB(std::string name) : _name(name), _Weapon(nullptr)
{
	std::cout << "\e[0;33mFields Constructor called of HumanB\e[0m" << std::endl;
}

// Destructor
HumanB::~HumanB()
{
	std::cout << "\e[0;31mDestructor called of HumanB\e[0m" << std::endl;
}

// Getters / Setters
std::string HumanB::getName() const
{
	return _name;
}
std::string HumanB::getWeapon() const
{
	return _Weapon->getType();
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_Weapon = &weapon;
}

void HumanB::attack() const
{
	std::cout << _name << " attacks with their " << _Weapon->getType() << "\n";
}