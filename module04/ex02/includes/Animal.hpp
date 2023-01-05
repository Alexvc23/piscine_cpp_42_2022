/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:30:00 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/05 14:13:42 by jvalenci         ###   ########.fr       */
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


		//Getters and Setters
		std::string		getType() const;
		void			setType(std::string type); 
		
		//methods
		virtual void			makeSound() const = 0;
		virtual void			feedIdeas(std::string newIdea) = 0;
		virtual void			printIdeas() const = 0;
		
	protected:
		std::string _type;

};

#endif