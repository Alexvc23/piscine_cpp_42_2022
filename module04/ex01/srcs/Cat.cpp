/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:29:22 by alexanderva       #+#    #+#             */
/*   Updated: 2022/12/31 09:42:37 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

using std::cout;
using std::endl;

// Constructors
Cat::Cat():Animal()
{
	_type="Cat";	
	_brain = new Brain(); 
	cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << endl;
}

Cat::Cat(const Cat &copy):Animal(copy)
{
	*this = copy;
	cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << endl;
}

// Destructor
Cat::~Cat()
{
	delete _brain;
	cout << "\e[0;31mDestructor called of Cat\e[0m" << endl;
}

// Operators
Cat &Cat::operator=(const Cat &assign)
{
	if (this == &assign)
		return *this;
	_type = assign.getType();
	_brain = new Brain();
	*_brain = *assign._brain;
	cout << BOLD <<  "Overload operator called of Cat" << endl;
	return *this;
}

void Cat::makeSound() const
{
	cout << BOLD << "MIIAUUU" << END << "\n";
}

Brain *Cat::getBrain() const
{
	return this->_brain;
}

void Cat::feedIdeas(std::string newIdea)
{
	_brain->setIdeas(newIdea);
	cout << BOLD << GREEN << "Calling member function feedIdeas of "
	<< END << BOLD << "Cat object\n" << END; 
}

void Cat::printIdeas() const
{
	std::string *ideas = _brain->getIdeas();
	int i = 0;

	while (!ideas[i].empty())
		cout << BOLD << CYAN << ideas[i++] << END << endl;
}