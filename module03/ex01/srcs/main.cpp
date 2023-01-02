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

using std::cout;
using std::endl;

int main(void)
{
    cout << BOLD << "----------------------------------------------------\n"
    << END;
    cout << BOLD << RED "We create two objects Kevin and Antonio\n" << END;
    // object instantce
    ClapTrap a("Kevin"); // Kevin object
    ScavTrap b("Antonio"); // Antonio Object

    
    // Kevin info
    cout << BOLD << "ClapTrap: " << a.getName() << " Hit Points: " 
    << a.getHitPoints() << " Energy points: " << a.getEnergyPoints()
    << " Attack damage: " << a.getAttackDamage() << endl;

    // Antonio info
    cout << BOLD << "ScavTrap: " << b.getName() << " Hit Points: " 
    << b.getHitPoints() << " Energy points: " << b.getEnergyPoints()
    << " Attack damage: " << b.getAttackDamage() << endl << END;

    cout << BOLD << "----------------------------------------------------\n"
    << END;
    cout << BOLD << RED "We set Antonio Energy points to 66\n" << END;
    b.setEnergyPoints(66); // we change Antonio's energy points
    cout << BOLD << "ScavTrap: " << b.getName() << " Hit Points: " 
    << b.getHitPoints() << " Energy points: " << b.getEnergyPoints()
    << " Attack damage: " << b.getAttackDamage() << endl << END;

    // Object c
    cout << BOLD << "----------------------------------------------------\n"
    << END;
    cout << BOLD << RED "We create a new object using copy costructor c = b\n" << END;
    ScavTrap c = b; // we call copy constructor to create a copy of Antonio 
    cout << BOLD << "ScavTrap: " << c.getName() << " Hit Points: " 
    << c.getHitPoints() << " Energy points: " << c.getEnergyPoints()
    << " Attack damage: " << c.getAttackDamage() << endl << END;

    cout << BOLD << "----------------------------------------------------\n"
    << END;
    cout << BOLD << RED "We create two ScavTrap objects Willy and Jonny\n" << END;
    ScavTrap h("Willy");
    cout << BOLD << "ScavTrap: " << h.getName() << " Hit Points: " 
    << h.getHitPoints() << " Energy points: " << h.getEnergyPoints()
    << " Attack damage: " << h.getAttackDamage() << endl << END;
    ScavTrap i("Jonny");
    cout << BOLD << "ScavTrap: " << i.getName() << " Hit Points: " 
    << i.getHitPoints() << " Energy points: " << i.getEnergyPoints()
    << " Attack damage: " << i.getAttackDamage() << endl << END;

    cout << BOLD << "----------------------------------------------------\n"
    << END;
    cout << BOLD << RED "Then we use overload opeartor to reassign values of Jonny\n" << END;
    i = h; // overload operator = called 

    cout << BOLD << RED "Now Jonny took all the values of Willy so we have just a copy of Willy\n" << END;
    cout << BOLD << "ScavTrap: " << i.getName() << " Hit Points: " 
    << i.getHitPoints() << " Energy points: " << i.getEnergyPoints()
    << " Attack damage: " << i.getAttackDamage() << endl << END;

    //Kevin attacks "Willy"
    cout << BOLD << "----------------------------------------------------\n"
    << END;
    cout << BOLD << RED "Now we will do a demostration with Kevin attackig Willy\n" << END;
    a.setAttackDamage(10);
    for (int i = 0; i < 5; i++)
    {
        a.attack("Willy");
        h.takeDamage(10);
    }
    cout << BOLD << "ScavTrap: " << h.getName() << " Hit Points: " 
    << h.getHitPoints() << " Energy points: " << h.getEnergyPoints()
    << " Attack damage: " << h.getAttackDamage() << endl << END;
    cout << BOLD << "ClapTrap: " << a.getName() << " Hit Points: " 
    << a.getHitPoints() << " Energy points: " << a.getEnergyPoints()
    << " Attack damage: " << a.getAttackDamage() << endl;

    //Willy attacks "Kevin"
    cout << BOLD << "----------------------------------------------------\n"
    << END;
    cout << BOLD << RED "Now Willy attacks kevin\n" << END;
    for (int i = 0; i < 5; i++)
    {
        h.attack("Kevin");
        a.takeDamage(h.getAttackDamage());
    }
    cout << BOLD << "ScavTrap: " << h.getName() << " Hit Points: " 
    << h.getHitPoints() << " Energy points: " << h.getEnergyPoints()
    << " Attack damage: " << h.getAttackDamage() << endl << END;
    cout << BOLD << "ClapTrap: " << a.getName() << " Hit Points: " 
    << a.getHitPoints() << " Energy points: " << a.getEnergyPoints()
    << " Attack damage: " << a.getAttackDamage() << endl;
    h.guardGate();
    return (0);
}