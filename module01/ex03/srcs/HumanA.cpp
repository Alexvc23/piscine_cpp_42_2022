#include "../includes/allheaders.hpp" 

HumanA::HumanA(std::string name, Weapon &weapon):_name(name), _Weapon(weapon)
{
	std::cout << "\e[0;33mFields Constructor called of HumanA\e[0m" << std::endl;
}


// Destructor
HumanA::~HumanA()
{
	std::cout << "\e[0;31mDestructor called of HumanA\e[0m" << std::endl;
}

// Getters / Setters
std::string HumanA::getWeapon() const
{
	return _Weapon.getType();
}
std::string HumanA::getName() const
{
	return _name;
}

void HumanA::attack() const
{
	std::cout << _name << " attacks with their " << _Weapon.getType() << "\n";  
}

