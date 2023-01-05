/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:29:39 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/05 14:12:13 by jvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <iostream>
# include <string>

class Cat: public Animal
{
	public:
		// Constructors
		Cat();
		Cat(const Cat &copy);
		
		// Destructor
		virtual ~Cat();
		
		// Operators
		Cat & operator=(const Cat &assign);

		//methods
		virtual void			makeSound() const;
		void					feedIdeas(std::string newIdea);
		Brain					*getBrain() const;
		void					printIdeas() const;
	
	private:
		Brain *_brain;
};

#endif