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

int main(void)
{
    // object instantce
    ClapTrap a("Kevin"); // Kevin object
    ScavTrap b("Antonio"); // Antonio Object
    FragTrap c("Katty");

    // Kevin info
    std::cout << BLUE << "ClapTrap: " << a.getName() << " Hit Points: " 
    << a.getHitPoints() << " Energy points: " << a.getEnergyPoints()
    << " Attack damage: " << a.getAttackDamage() << std::endl;

    // Antonio info
    std::cout << BLUE << "ScavTrap: " << b.getName() << " Hit Points: " 
    << b.getHitPoints() << " Energy points: " << b.getEnergyPoints()
    << " Attack damage: " << b.getAttackDamage() << std::endl << END;

    return (0);
}