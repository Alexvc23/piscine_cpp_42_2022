#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include "Colors.hpp"

class Brain
{
	public:
		// Constructors
		Brain();
		Brain(const Brain &copy);
		Brain(std::string ideas[100]);
		
		// Destructor
		~Brain();
		
		// Operators
		Brain & operator=(const Brain &assign);
		
		// Getters / Setters
		std::string * getIdeas() const;
		void setIdeas(std::string newIdea);
		
	private:
		std::string *_ideas;
};

#endif