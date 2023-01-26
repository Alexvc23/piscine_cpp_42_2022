/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:53:40 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/26 12:27:37 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include "Colors.hpp"

using std::cout;
using std::endl;

class Span
{
	public:
		//? Constructors
		Span(const Span &copy);
		Span(unsigned int N); 

		//? Destructor
		~Span();
		
		//? Operators
		Span & operator=(const Span &assign);
		
		//? Getters / Setters
		unsigned int getN() const;
		std::vector<int> getNumbers() const;

		//? Methods
		int shortestSpan();
		int longestSpan();
		void addNumber(int number);

		template <typename Iter>
		void addNumbers(Iter begin, Iter end)
		{
			if (std::distance(begin, end) > _N)
				throw std::length_error("The span is not big enough to store all the numbers.");
			_numbers.insert(_numbers.end(), begin, end);
		}

	private:
		unsigned int _N;
		std::vector<int> _numbers;

		//? Default constructor
		Span();
		
};

#endif