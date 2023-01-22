/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 06:30:32 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/22 06:30:34 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

# include <iostream>
# include <string>
# include "Base.hpp"

class B : public Base
{
	public:
		// Constructors
		B();
		B(const B &copy);
		
		// Destructor
		~B();
		
		// Operators
		B & operator=(const B &assign);
		
	private:
		
};

#endif