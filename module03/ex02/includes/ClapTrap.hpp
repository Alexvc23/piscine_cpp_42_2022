/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:02:00 by alexanderva       #+#    #+#             */
/*   Updated: 2022/12/24 09:50:14 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

// ─── Color ─────────────────────────────────────────────────────────────────
# define RESET	"\033[0;0m"
# define ERASE	"\033[2K\r"
# define GREY	"\033[30m"
# define RED	"\033[31m"
# define GREEN	"\033[32m"
# define YELLOW	"\033[33m"
# define BLUE	"\033[34m"
# define PINK	"\033[35m"
# define CYAN	"\033[36m"
# define WHITE	"\033[37m"
# define BOLD	"\033[1m"
# define UNDER	"\033[4m"
# define SUR	"\033[7m"
# define END	"\033[0m"
# define CENTER	"\033[60G"

// ─── Classes ─────────────────────────────────────────────────────────────────
class ClapTrap
{
	public:
		// Constructors
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &copy);

		virtual ~ClapTrap();

		// Operators
		ClapTrap & operator=(const ClapTrap &assign);
		
		// Getters / Setters
		std::string getName() const;
		void setName(std::string name);
		int getHitPoints() const;
		void setHitPoints(int hitPoints);
		int getEnergyPoints() const;
		void setEnergyPoints(int energyPoints);
		int getAttackDamage() const;
		void setAttackDamage(int attackDamage);

		//methods
		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	protected:
		std::string _name;
		unsigned int _hitPoints;
		unsigned int _energyPoints;
		unsigned int _attackDamage;
};

#endif