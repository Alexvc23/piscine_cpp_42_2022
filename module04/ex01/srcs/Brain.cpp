/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 15:03:40 by alexanderva       #+#    #+#             */
/*   Updated: 2022/12/31 08:02:49 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Constructors
Brain::Brain()
{
	_ideas = new std::string [100];
	std::cout << "\e[0;33mDefault Constructor called of Brain\e[0m" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Brain\e[0m" << std::endl;
}

// Destructor
Brain::~Brain()
{
	delete[] _ideas;
	std::cout << "\e[0;31mDestructor called of Brain\e[0m" << std::endl;
}

// Operators
Brain & Brain::operator=(const Brain &assign)
{
	if (this == &assign)
		return *this;
		for (int i = 0; i < 100; i++)
			_ideas[i].assign(assign._ideas[i]);
	std::cout << BOLD << "Overload operator called of Brain" << END << std::endl;
	return *this;
}

// Getters / Setters
std::string * Brain::getIdeas() const
{
	return _ideas;
}
void Brain::setIdeas(std::string newIdea)
{
	int i = 0;
	while (!_ideas[i].empty())
		i++;
	if (i > 99)
		return ;
	_ideas[i] = newIdea;
}