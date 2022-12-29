/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal copy.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:30:00 by alexanderva       #+#    #+#             */
/*   Updated: 2022/12/29 10:45:10 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

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

class WrongAnimal
{
	public:
		// Constructors
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal(std::string type);
		
		// Destructor
		virtual ~WrongAnimal();
		
		// Operators
		WrongAnimal & operator=(const WrongAnimal &assign);
		
		// Getters / Setters
		std::string getType() const;
		void setType(std::string type);

		//methods
		virtual void makeSound() const;
		
	protected:
		std::string _type;
};

#endif