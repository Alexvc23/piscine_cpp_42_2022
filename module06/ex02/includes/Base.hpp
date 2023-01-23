/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 06:30:19 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/23 08:12:01 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Colors.hpp"
#include <chrono> // to use sleep 
#include <thread>// to use sleep 

class Base
{
	public:
		//! Destructor
		virtual ~Base();
	private:
		
};

#endif