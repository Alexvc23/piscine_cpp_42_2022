/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:29:45 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/05 14:12:37 by jvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <iostream>
# include <string>

class Dog: public Animal
{
	public:
		// Constructors
		Dog();
		Dog(const Dog &copy);
		
		// Destructor
		virtual ~Dog();
		
		// Operators
		Dog & operator=(const Dog &assign);

		//methods
		virtual void		makeSound() const;
		void				feedIdeas(std::string newIdea);
		void				printIdeas() const;

	private:
		Brain *_brain;
};

#endif