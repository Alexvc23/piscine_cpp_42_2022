/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:29:39 by alexanderva       #+#    #+#             */
/*   Updated: 2022/12/31 10:01:34 by alexanderva      ###   ########.fr       */
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
		virtual std::string		getType() const;
		virtual void			setType(std::string type);
		void					feedIdeas(std::string newIdea);
		Brain					*getBrain() const;
		void					printIdeas() const;
	
	private:
		Brain *_brain;
};

#endif