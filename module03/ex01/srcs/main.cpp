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

int main(void)
{
    // object instantce
    ClapTrap a("Kevin"); // Kevin object
    ScavTrap b("Antonio"); // Antonio Object

    // Kevin info
    std::cout << BLUE << "ClapTrap: " << a.getName() << " Hit Points: " 
    << a.getHitPoints() << " Energy points: " << a.getEnergyPoints()
    << " Attack damage: " << a.getAttackDamage() << std::endl;

    // Antonio info
    std::cout << BLUE << "ScavTrap: " << b.getName() << " Hit Points: " 
    << b.getHitPoints() << " Energy points: " << b.getEnergyPoints()
    << " Attack damage: " << b.getAttackDamage() << std::endl << END;

    b.setEnergyPoints(66); // we change Antonio's energy points
    ScavTrap c = b; // we call copy constructor to create a copy of Antonio 

    // Object c
    std::cout << BLUE << "ScavTrap: " << c.getName() << " Hit Points: " 
    << c.getHitPoints() << " Energy points: " << c.getEnergyPoints()
    << " Attack damage: " << c.getAttackDamage() << std::endl << END;

    ScavTrap h("Willy");

    std::cout << BLUE << "ScavTrap: " << h.getName() << " Hit Points: " 
    << h.getHitPoints() << " Energy points: " << h.getEnergyPoints()
    << " Attack damage: " << h.getAttackDamage() << std::endl << END;

    ScavTrap i("Jonny");
    std::cout << BLUE << "ScavTrap: " << i.getName() << " Hit Points: " 
    << i.getHitPoints() << " Energy points: " << i.getEnergyPoints()
    << " Attack damage: " << i.getAttackDamage() << std::endl << END;
    i = h; // overload operator = called 

    std::cout << BLUE << "ScavTrap: " << i.getName() << " Hit Points: " 
    << i.getHitPoints() << " Energy points: " << i.getEnergyPoints()
    << " Attack damage: " << i.getAttackDamage() << std::endl << END;

    //Kevin attacks "Willy"
    a.setAttackDamage(10);
    for (int i = 0; i < 5; i++)
    {
        a.attack("Willy");
        h.takeDamage(10);
    }
    std::cout << BLUE << "ScavTrap: " << h.getName() << " Hit Points: " 
    << h.getHitPoints() << " Energy points: " << h.getEnergyPoints()
    << " Attack damage: " << h.getAttackDamage() << std::endl << END;
    std::cout << BLUE << "ClapTrap: " << a.getName() << " Hit Points: " 
    << a.getHitPoints() << " Energy points: " << a.getEnergyPoints()
    << " Attack damage: " << a.getAttackDamage() << std::endl;

    //Willy attacks "Kevin"
    for (int i = 0; i < 5; i++)
    {
        h.attack("Kevin");
        a.takeDamage(h.getAttackDamage());
    }
    h.guardGate();
    return (0);
}