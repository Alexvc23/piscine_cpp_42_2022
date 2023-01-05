/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:30:00 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/05 13:15:46 by jvalenci         ###   ########.fr       */
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
		
		// Getters / Setters
		std::string		getType() const;
		void			setType(std::string type);

		//methods
		virtual void	makeSound() const;
		virtual void	feedIdeas(std::string newIdea);
		virtual void	printIdeas() const;
		
	protected:
		std::string _type;

};

#endif