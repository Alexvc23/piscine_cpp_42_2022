/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:29:29 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/05 14:17:10 by jvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

using std::cout;
using std::endl;

// Constructors
Dog::Dog():Animal()
{
	_type = "Dog";
	_brain = new Brain();
	cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
}

Dog::Dog(const Dog &copy):Animal(copy)
{
	*this = copy;
	cout << "\e[0;33mCopy Constructor called of Dog\e[0m" << std::endl;
}


// Destructor
Dog::~Dog()
{
	delete _brain;
	cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
}

// Operators
Dog & Dog::operator=(const Dog &assign)
{
	if (this == &assign)
		return *this;
	_brain = new Brain();
	*_brain = *assign._brain; // brian will create his own overload operator call
	cout << BOLD <<  "Overload operator called of Dog" << END << std::endl;
	return *this;
	
}


void Dog::makeSound() const 
{
	cout << BOLD << "RAAAUUUF RAAAUUFF\n" << END;
	
}

void Dog::feedIdeas(std::string newIdea)
{
	cout << BOLD << GREEN << "Calling member function feedIdeas of "
	<< END << BOLD << "Dog object\n" << END; 
	_brain->setIdeas(newIdea);
}

void Dog::printIdeas() const
{
	std::string *ideas = _brain->getIdeas();
	int i = 0;

	while (!ideas[i].empty())
		cout << BOLD << ideas[i++] << END << std::endl;
}