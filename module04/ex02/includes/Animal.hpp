/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:30:00 by alexanderva       #+#    #+#             */
/*   Updated: 2022/12/31 10:07:21 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"
# include "Colors.hpp"

class Animal
{
	public:
		// Constructors
		Animal();
		Animal(const Animal &copy);
		Animal(std::string type);
		
		// Destructor
		virtual ~Animal();
		
		// Operators
		Animal & operator=(const Animal &assign);
		
		//methods
		virtual std::string		getType() const = 0;
		virtual void			makeSound() const = 0;
		virtual void			setType(std::string type) = 0;
		virtual void			feedIdeas(std::string newIdea) = 0;
		virtual void			printIdeas() const = 0;
		
	protected:
		std::string _type;
		Brain *_brain;

};

#endif