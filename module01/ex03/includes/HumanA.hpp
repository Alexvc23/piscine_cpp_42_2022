#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
	public:
		// Constructors
		HumanA(std::string name, Weapon &weapon);
		HumanA(const HumanA &copy);
		
		// Destructor
		~HumanA();
		
		// Getters / Setters
		std::string getWeapon() const;
		std::string getName() const;
		void	attack() const;
		
	private:
		std::string _name;
		Weapon &_Weapon;
};

#endif