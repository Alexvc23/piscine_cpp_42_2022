/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 06:30:25 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/22 08:28:08 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

# include "Base.hpp"
# include <iostream>
# include <string>

class A : public Base
{
	public:
		// Constructors
		A();
		A(const A &copy);
		
		// Destructor
		~A();
		
		// Operators
		A & operator=(const A &assign);
		
	private:
		
};

#endif