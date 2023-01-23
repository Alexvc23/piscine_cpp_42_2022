/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:42:30 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/23 13:05:0 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

# include <iostream>
# include <string>
# include "Colors.hpp"

//! Global template functions 
template <typename A>
void swap( A &a,  A &b) 
{
    A temp = a;
    a = b;
    b = temp;
}

template <typename B>
B min(const B a, const B b) {
    return a < b ? a : b;
}

template <typename C>
C max(const C  a, const C b) {
    return a > b ? a : b;
}

#endif