/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:34:45 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/20 17:34:49 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <iostream>
# include <string>
# include <cstdint>
# include "Colors.hpp"


typedef struct Data
{
	std::string name;
	std::string lastName;
	std::string nationality;
	size_t 		age;
}				Data;

class Serialize
{
	public:
		//! Constructors
		Serialize();
		Serialize(const Serialize &copy);
		
		//! Destructor
		~Serialize();
		
		//! Operators
		Serialize & operator=(const Serialize &assign);

		//! Methods
		uintptr_t serialize(Data* ptr);
		Data* deserialize(uintptr_t raw);
		
	private:
		
};

#endif