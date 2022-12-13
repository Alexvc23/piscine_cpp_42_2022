/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:38:18 by alexanderva       #+#    #+#             */
/*   Updated: 2022/12/13 14:51:13 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Harl.hpp"

// Constructors
Harl::Harl()
{
	std::cout << "\e[0;33mDefault Constructor called of Harl\e[0m" << std::endl;
}

// Destructor
Harl::~Harl()
{
	std::cout << "\e[0;31mDestructor called of Harl\e[0m" << std::endl;
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple"
	<< "-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money." 
	<< " You didn’t put enough bacon in my burger! If you did, I wouldn’t" 
	<< " be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. "
	<<  "I’ve been coming for years whereas you started working here since" 
	<< " last month." << std::endl; 
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
	 << std::endl; 
}

void Harl::complain(std::string level)
{
	std::string list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void (Harl::*f_pointer[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning,
	 &Harl::error};
	 for (int i = 0; i < 4; i++)
	 {
		if (!level.compare(list[i]))
			(this->*f_pointer[i])();
	 }
}