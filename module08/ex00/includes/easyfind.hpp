/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:23:43 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/24 15:37:58 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include"Colors.hpp"
#include<iostream>
#include <stdexcept>
#include <vector>

using std::cout;
using std::endl;

template<typename T>
typename T::iterator easyfind( T container, int val) 
{ 
    typename T::iterator it = std::find(container.begin(), container.end(), val);
    if (it != container.end())
        return it;
    else
        throw std::out_of_range("Value not found in containerainer");
}