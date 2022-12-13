#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	public:
		// Constructors
		Zombie();
		Zombie(const Zombie &copy);
		Zombie(std::string name);
		
		// Destructor
		~Zombie();
		
		// Getters / Setters
		std::string getName() const;
		void setName(std::string name);
		void		announce(void);
		
	private:
		std::string _name;
};


// external function
Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif