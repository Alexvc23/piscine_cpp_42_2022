/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 16:02:02 by alexanderva       #+#    #+#             */
/*   Updated: 2022/12/21 16:46:39 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

int main(void)
{
    // object instantce
    ClapTrap a("Kebin");
    ClapTrap b("Jonny");

    // attackDamage assignation
    a.setAttackDamage(1);
    b.setAttackDamage(1);
    
    // we test object (a) attacking 8 times object (b)
    for (int i = 0; i < 8; i++)
    {
        a.attack("Jonny");
        b.takeDamage(1);
    }

    std::cout << CYAN << "ClapTrap " << b.getName() << " remaining hitPoints: "
    << b.getHitPoints() << " remaining energyPoints: " << b.getEnergyPoints()
    << END << std::endl;
    std::cout << GREEN << "ClapTrap " << a.getName() << " remaining hitPoints: "
    << a.getHitPoints() << " remaining energyPoints: " << a.getEnergyPoints()
    << END << std::endl;

    // object(b) gets repared
    b.beRepaired(8);
    std::cout << GREEN << "ClapTrap " << a.getName() << " remaining hitPoints: "
    << a.getHitPoints() << " remaining energyPoints: " << a.getEnergyPoints()
    << END << std::endl;


    // now object (b) attacks object(a)
    for (int i = 0; i < 10; i++)
    {
       b.attack("Kebin"); 
       a.takeDamage(1);
    }

    std::cout << CYAN << "ClapTrap " << b.getName() << " remaining hitPoints: "
    << b.getHitPoints() << " remaining energyPoints: " << b.getEnergyPoints()
    << END << std::endl;
    std::cout << GREEN << "ClapTrap " << a.getName() << " remaining hitPoints: "
    << a.getHitPoints() << " remaining energyPoints: " << a.getEnergyPoints()
    << END << std::endl;

    return (0);
}