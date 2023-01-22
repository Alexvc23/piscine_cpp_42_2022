/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 06:30:40 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/22 06:30:42 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

# include <iostream>
# include <string>
# include "Base.hpp"

class C : public Base
{
	public:
		// Constructors
		C();
		C(const C &copy);
		
		// Destructor
		~C();
		
		// Operators
		C & operator=(const C &assign);
		
	private:
		
};

#endif