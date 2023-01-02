/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 16:02:02 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/02 13:58:27 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

using std::cout;
using std::endl;

int main(void)
{
    // object instantce
    ClapTrap a("Kevin");
    ClapTrap b("Jonny");

    cout << BOLD << "-----------------------------------------------\n" << END;
    // attackDamage assignation
    cout << BOLD << RED << "We set object Kevin and Jonny Attack Damage to 1\n" << END;
    a.setAttackDamage(1);
    b.setAttackDamage(1);

    cout << BOLD << "-----------------------------------------------\n" << END;
    cout << BOLD << RED << "Kevin attacks 8 times Jonny\n" << END;
    // we test object (a) attacking 8 times object (b)
    for (int i = 0; i < 8; i++)
    {
        a.attack("Jonny");
        b.takeDamage(1);
    }

    //info after change
    cout << BOLD << "ClapTrap " << a.getName() << " remaining hitPoints: "
    << a.getHitPoints() << " remaining energyPoints: " << a.getEnergyPoints()
    << END << endl;

    cout << BOLD << "ClapTrap " << b.getName() << " remaining hitPoints: "
    << b.getHitPoints() << " remaining energyPoints: " << b.getEnergyPoints()
    << END << endl;


    // object(b) gets repared
    cout << BOLD << "-----------------------------------------------\n" << END;
    cout << BOLD << RED << "We repair Jonny 8 hit points units \n"
    << END;
    b.beRepaired(8);
    cout << BOLD << "ClapTrap " << b.getName() << " remaining hitPoints: "
    << b.getHitPoints() << " remaining energyPoints: " << b.getEnergyPoints()
    << END << endl;

    // now object (b) attacks object(a)
    cout << BOLD << "-----------------------------------------------\n" << END;
    cout << BOLD << RED << "Now Jonny try to attack Kevin 10 times \n"
    << END;
    for (int i = 0; i < 10; i++)
       b.attack("Kevin"); 
    a.takeDamage(9);

    //obj(a)
    cout << GREEN << "ClapTrap " << a.getName() << " remaining hitPoints: "
    << a.getHitPoints() << " remaining energyPoints: " << a.getEnergyPoints()
    << END << endl;
    //obj(b)
    cout << CYAN << "ClapTrap " << b.getName() << " remaining hitPoints: "
    << b.getHitPoints() << " remaining energyPoints: " << b.getEnergyPoints()
    << END << endl;
    cout << BOLD << "-----------------------------------------------\n" << END;
    return (0);
}