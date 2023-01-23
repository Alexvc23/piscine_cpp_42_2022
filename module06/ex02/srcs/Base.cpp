/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 06:31:12 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/23 07:57:25 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

//! Destructor
Base::~Base()
{
	std::cout << "\e[0;31mDestructor called of Base\e[0m" << std::endl;
}
