/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 10:56:29 by alexanderva       #+#    #+#             */
/*   Updated: 2022/12/12 11:10:00 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    if (!N || N < 0)
        return (NULL);
    Zombie *Z = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        Z[i].setName(name); 
        Z[i].announce();
    }
    return (Z);
}