/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:08:59 by alexanderva       #+#    #+#             */
/*   Updated: 2022/12/12 11:19:47 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main(void)
{
   Zombie *Z = zombieHorde(7, "Jonny");
   if (Z)
       delete[] Z;
   Zombie *X = zombieHorde(0, "Jack");
   if (X)
       delete[] X;
    return (0);
}
