#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include"ClapTrap.hpp"
# include <iostream>
# include <string>

class ScavTrap: public ClapTrap
{
	public:
		// Constructors
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copy);

		// Destructor
		~ScavTrap();

		// Operators
		ScavTrap & operator=(const ScavTrap &another);
		void attack(const std::string& target);

		//methods
		void guardGate(void);

	private:
		bool _guardGate; 
};

#endif