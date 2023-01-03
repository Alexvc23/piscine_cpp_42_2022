/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 09:51:18 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/03 14:18:55 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class FragTrap: public ClapTrap
{
	public:
		// Constructors
		FragTrap(const FragTrap &copy);
		FragTrap(std::string name);
		
		// Destructor
		virtual ~FragTrap();
		
		// Operators
		FragTrap & operator=(const FragTrap &assign);

		//methods
		void highFivesGuys(void);
		void attack(const std::string& target);

	private:
		FragTrap();
		bool _highFivesGuys;
};

#endif