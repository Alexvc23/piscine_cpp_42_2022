/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:46:43 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/23 16:21:28 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

#include<iostream>
#include"Colors.hpp"


//! functions
void toUpper(char &element)
{
    element = static_cast<unsigned char>(std::toupper(element));
}

void addOne(int &element)
{
    element++;
}

//! template functions
template<typename T>
void print(T element)
{
    std::cout << BOLD << element << " " << END; 
}

template<typename T>
void iter(T*array, const int length, void (*fun)( T &))
{
    for (int i = 0; i < length; i++)
        fun(array[i]);
}

#endif