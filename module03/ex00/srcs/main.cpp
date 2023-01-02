/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 16:02:02 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/02 13:43:57 by jvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

using std::cout;
using std::endl;

int main(void)
{
    // object instantce
    ClapTrap a("Kebin");
    ClapTrap b("Jonny");

    // attackDamage assignation
    a.setAttackDamage(1);
    b.setAttackDamage(1);

   cout << BOLD << "-----------------------------------------------\n" ;
    // we test object (a) attacking 8 times object (b)
    for (int i = 0; i < 8; i++)
    {
        a.attack("Jonny");
        b.takeDamage(1);
    }

    cout << BOLD << "ClapTrap " << b.getName() << " remaining hitPoints: "
    << b.getHitPoints() << " remaining energyPoints: " << b.getEnergyPoints()
    << END << endl;
    cout << BOLD << "ClapTrap " << a.getName() << " remaining hitPoints: "
    << a.getHitPoints() << " remaining energyPoints: " << a.getEnergyPoints()
    << END << endl;

    // object(b) gets repared
    b.beRepaired(8);
    cout << GREEN << "ClapTrap " << a.getName() << " remaining hitPoints: "
    << a.getHitPoints() << " remaining energyPoints: " << a.getEnergyPoints()
    << END << endl;


    // now object (b) attacks object(a)
    for (int i = 0; i < 10; i++)
       b.attack("Kebin"); 
    a.takeDamage(9);

    cout << CYAN << "ClapTrap " << b.getName() << " remaining hitPoints: "
    << b.getHitPoints() << " remaining energyPoints: " << b.getEnergyPoints()
    << END << endl;
    cout << GREEN << "ClapTrap " << a.getName() << " remaining hitPoints: "
    << a.getHitPoints() << " remaining energyPoints: " << a.getEnergyPoints()
    << END << endl;

    return (0);
}