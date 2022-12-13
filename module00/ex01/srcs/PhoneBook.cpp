/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:46:56 by alexanderva       #+#    #+#             */
/*   Updated: 2022/12/07 10:05:22 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

// Constructors
PhoneBook::PhoneBook()
{
	std::cout << "\e[0;33mDefault Constructor called of PhoneBook\e[0m" 
	<< std::endl;
}

PhoneBook::PhoneBook(const PhoneBook &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of PhoneBook\e[0m" 
	<< std::endl;
}


// Destructor
PhoneBook::~PhoneBook()
{
	std::cout << "\e[0;31mDestructor called of PhoneBook\e[0m" 
	<< std::endl;
}


// Operators
PhoneBook & PhoneBook::operator=(const PhoneBook &assign)
{
	(void) assign;
	return *this;
}

int PhoneBook::counter(void)
{
	int i = 0;
	while (this->_t[i].exits() && i < 8) 
		i++;
	return (i);
}

void PhoneBook::addContact(int current_index)
{
	int oldest = 0;

	if (current_index == 8 && this->_t[current_index - 1].exits())
	{
		oldest = this->oldestIndex();
		this->_t[oldest].add(oldest);
	}
	else
		this->_t[current_index].add(current_index);
}

void PhoneBook::callSearch(void)
{
	int end = this->counter();
	int search_index = -1;
	int i = -1;

	if (end)
	{
		while (this->_t[++i].exits() && i <= 7)
			this->_t[i].search(SHOW);
		while ((search_index < 0 || search_index > (end - 1)))
		{
			std::cout << "Enter a number index to fetch full contact" 
			<< " information: > ";
			std::cin >> search_index;
			std::cin.ignore();
			if (search_index < 0 || search_index > (end - 1))
				std::cout << "This number is not allowed, enter a"
				<< " correct one\n";
			else
				this->_t[search_index].search(SEARCH);
		}
	}
	return ;
}

/** 
	@brief gets the oldest index in class Contanct
 **/
int PhoneBook::oldestIndex(void)
{
	int min = this->_t[0].getTime();	
	int i = 0;
	int index = 0;
	int buffer = 0;

	while (++i < 8)
	{
		buffer = this->_t[i].getTime();
		if (buffer < min)
		{
			min = buffer;
			index = i;
		}
	}
	return (index);
}