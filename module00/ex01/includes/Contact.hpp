/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:46:49 by alexanderva       #+#    #+#             */
/*   Updated: 2022/12/05 09:54:31 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTANCT_HPP
# define CONTANCT_HPP
# define SHOW 1
# define SEARCH 2
# define STANDARD -1
# define LAST_INDEX 7

# include <iostream>
# include <string>
# include <iomanip>
# include <cctype>

class Contact
{

	public:
		// Constructors
		Contact();
		Contact(const Contact &copy);

		// Destructor
		~Contact();
		
		// Operators
		Contact & operator=(const Contact &assign);

		// Functions
		void		add(int n_index);
		void		search(int type);
		int			exist(void);
		int			getTime(void);

	private:
		std::string _name;
		std::string _last_name;
		std::string _nick_name;
		std::string _phone_number;
		std::string _darkest_secret;
		int _index;
		int _time;

		// functions
		void		erase(void);
		int			checkErr(std::string s);
		std::string print(std::string s);
};

#endif