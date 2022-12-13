/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 10:23:49 by alexanderva       #+#    #+#             */
/*   Updated: 2022/12/12 11:19:58 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main(void)
{
    {
        Zombie Z("Camilo");
        Z.announce();
    }
    {
        randomChump("Alex");
    }
    return (0);
}