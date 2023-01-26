/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:00:29 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/26 14:40:25 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <vector>
# include <list>
# include "Colors.hpp"

using std::cout;
using std::endl;

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	//? Constructors
	MutantStack();
	MutantStack(const MutantStack<T> &copy);

	//? Destructor
	~MutantStack();

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }

	//? Operators
	MutantStack<T>& operator=(const MutantStack<T>& rhs);
};

//? Constructors
template <typename T>
MutantStack<T>::MutantStack()
{
	cout << "\e[0;33mDefault Constructor called of MutantStack\e[0m" << endl;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &copy)
{
	if (*this == copy)
		return *this;
	*this = copy;
	cout << "\e[0;33mCopy Constructor called of MutantStack\e[0m" << endl;
}

//? Destructor
template <typename T>
MutantStack<T>::~MutantStack()
{
	cout << "\e[0;31mDestructor called of MutantStack\e[0m" << endl;
}

//? Operators
template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T> &rhs)
{
	this->c = rhs.c;
	return *this;
}

#endif