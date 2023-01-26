/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:53:03 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/26 12:39:35 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

//? Constructors
Span::Span()
{
	cout << "\e[0;33mDefault Constructor called of Span\e[0m" << endl;
}

Span::Span(const Span &copy)
{
	*this = copy;
	cout << "\e[0;33mCopy Constructor called of Span\e[0m" << endl;
}

Span::Span(unsigned int N) : _N(N)
{
	cout << "\e[0;33mParameterized Constructor called of Span\e[0m" << endl;
}

//? Destructor
Span::~Span()
{
	cout << "\e[0;31mDestructor called of Span\e[0m" << endl;
}


//? Operators
Span & Span::operator=(const Span &assign)
{
	_N = assign.getN();
	_numbers = assign.getNumbers();
	return *this;
}

//? Getters / Setters
unsigned int Span::getN() const
{
	return _N;
}

std::vector<int> Span::getNumbers() const
{
	return _numbers;
}

//? Methods
int Span::shortestSpan()
{
	if (_numbers.size() < 2)
		throw std::length_error("There are not enough numbers to find a span.");
	std::sort(_numbers.begin(), _numbers.end());
	int minSpan = INT_MAX;
	for (unsigned int i = 1; i < _numbers.size(); i++)
	{
		int span = _numbers[i] - _numbers[i - 1];
		minSpan = std::min(minSpan, span);
	}
	return minSpan;
}

int Span::longestSpan()
{
	if (_numbers.size() < 2)
		throw std::length_error("There are not enough numbers to find a span.");
	std::sort(_numbers.begin(), _numbers.end());
	return _numbers[_numbers.size() - 1] - _numbers[0];
}

void Span::addNumber(int number)
{
	if (_numbers.size() == _N)
		throw std::length_error("The span is already full.");
	_numbers.push_back(number);
}