/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 16:02:02 by alexanderva       #+#    #+#             */
/*   Updated: 2022/12/24 07: by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"
#include"FragTrap.hpp"

using std::cout;
using std::endl;

int main(void)
{
    // object instantce
    cout << BOLD << "-----------------------------------------------\n" << END;
    cout << BOLD << RED << "We create 3 objects a(Kevin), b(Antonio) and c(Katty)\n" << END;
    ClapTrap a("Kevin"); // Kevin object
    ScavTrap b("Antonio"); // Antonio Object
    FragTrap c("Katty");
    cout << BOLD << "-----------------------------------------------\n" << END;
    // Kevin info
    cout << BOLD << "ClapTrap: " << a.getName() << " Hit Points: " 
    << a.getHitPoints() << " Energy points: " << a.getEnergyPoints()
    << " Attack damage: " << a.getAttackDamage() << endl;

    // Antonio info
    cout << BOLD << "ScavTrap: " << b.getName() << " Hit Points: " 
    << b.getHitPoints() << " Energy points: " << b.getEnergyPoints()
    << " Attack damage: " << b.getAttackDamage() << endl << END;
    
    // katty
    cout << BOLD << "FragTrap: " << c.getName() << " Hit Points: " 
    << c.getHitPoints() << " Energy points: " << c.getEnergyPoints()
    << " Attack damage: " << c.getAttackDamage() << endl << END;

    cout << BOLD << "-----------------------------------------------\n" << END;
    cout << BOLD << RED << "b(Antonio) and c(Katty) activate their special mode\n" << END;
    b.guardGate();
    c.highFivesGuys();

    cout << BOLD << "-----------------------------------------------\n" << END;
    cout << BOLD << RED << "Katty attacks Antonio 5 times\n" << END;
    for (int i = 0; i < 5; i++)
    {
        cout << BOLD << "ScavTrap: " << b.getName() << " Hit Points: " 
        << b.getHitPoints() << " Energy points: " << b.getEnergyPoints()
        << " Attack damage: " << b.getAttackDamage() << endl << END;
        c.attack("Antonio");
        b.takeDamage(c.getAttackDamage());
    }

    // katty
    cout << BOLD << "FragTrap: " << c.getName() << " Hit Points: " 
    << c.getHitPoints() << " Energy points: " << c.getEnergyPoints()
    << " Attack damage: " << c.getAttackDamage() << endl << END;
    //Antonio
    cout << BOLD << "ScavTrap: " << b.getName() << " Hit Points: " 
    << b.getHitPoints() << " Energy points: " << b.getEnergyPoints()
    << " Attack damage: " << b.getAttackDamage() << endl << END;
    cout << BOLD << "-----------------------------------------------\n" << END;

    return (0);
}