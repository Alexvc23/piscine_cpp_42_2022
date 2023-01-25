/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:46:43 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/25 19:15:31 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

#include<iostream>
#include"Colors.hpp"

/* we musnt' modify the elements of the array passed as paramenter to the
template function iter as duing the correction they will be doing a test with
a template function void print(const T &elemnt) do it doesn't worth to do
more*/

//! template functions
template<typename T>
void print(const T &element)
{
    std::cout << BOLD << element << " " << END; 
}

template<typename T>
void iter(const T *array,  const int length, void (*fun)( const T & ))
{
    for (int i = 0; i < length; i++)
        fun(array[i]);
}
#endif