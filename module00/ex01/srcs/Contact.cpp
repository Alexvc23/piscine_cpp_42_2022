/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:46:42 by alexanderva       #+#    #+#             */
/*   Updated: 2022/12/05 09:27:29 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact() 
{
	std::cout << "\e[0;33mDefault Constructor called of Contact\e[0m" << std::endl;
}

Contact::Contact(const Contact &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Contact\e[0m" << std::endl;
}


// Destructor
Contact::~Contact()
{
	std::cout << "\e[0;31mDestructor called of Contact\e[0m" << std::endl;
}


// Operators
Contact & Contact::operator=(const Contact &assign)
{
	(void) assign;
	return *this;
}

/** 
	Defining function ft_add outsite clase
	@brief we modify Private Contact class members using public function,
	we will store the requested information
 **/
void Contact::add(int n_index)
{
	this->erase();
	if (this->_name.empty())
	{
		std::cout << "Add Contact:\n";
		while (this->_name.empty())
		{
			std::cout << "Enter name: ";
			std::getline(std::cin, this->_name);
			if (this->checkErr(this->_name)) return;
		}
		while (this->_last_name.empty())
		{
			std::cout << "Enter last name: ";
			std::getline(std::cin, this->_last_name);
			if (this->checkErr(this->_last_name)) return;
		}
		while (this->_nick_name.empty())
		{
			std::cout << "Enter nickname: ";
			std::getline(std::cin, this->_nick_name);
			if (this->checkErr(this->_last_name)) return;
		}
		while (this->_darkest_secret.empty())
		{
			std::cout << "Enter darkest secret: ";
			std::getline(std::cin, this->_darkest_secret);
			if (this->checkErr(this->_darkest_secret)) return;
		}
		while (this->_phone_number.empty())
		{
			std::cout << "Enter phone number: ";
			std::getline(std::cin, this->_phone_number);
			if (this->checkErr(this->_phone_number)) return;
		}
		this->_index = n_index;
		this->_time = std::time(0); // seconds since 01-jan-1970
	}
	return ;
}

int Contact::checkErr(std::string s)
{
	int check = 0;
	if (std::cin.eof()) // checks if we passed crl+d
		return (1);
	for (int i = 0; i < (int)s.length(); i++)
	{
		if (isalnum(s[i]))
			check = 1;
	}
	if (!check)
	{
		this->erase();
		std::cout << "You must enter an alphanumeric character\n";
	}
	return (0);
}

void Contact::search(int type)
{
	if (type == SHOW && !this->_name.empty())
	{
		std::cout << std::right << std::setw(10) << this->_index << "|"
		<< std::setw(10) <<  print(this->_name) << "|" 
		<< std::setw(10) << print(this->_last_name) << "|"
		<< std::setw(10) << print(this->_nick_name) << '\n';
	}
	else if(type == SEARCH && !this->_name.empty())
	{
		std::cout << "Index: " << this->_index << "\n" << "Name: " <<
		this->_name << "\n" << "Last name: " << this->_last_name << "\n"
		<< "Nick name: " << this->_nick_name << "\n" << "Phone number: "
		<< this->_phone_number << "\n" << "Darkest Secret: " << this->_darkest_secret
		<< "\n";
	}
	return ;
}

/** 
  	@arg std:: string s
	@brief  trunk string to 10 characters width making 10th character a point,
	if inicial string longer that 10 
	@return  9 width string trunked + "."  or inicial string if smaller or
	equal to 10. 
 **/
std::string Contact::print(std::string s)
{
	if (s.length() > 10)
		return (s.substr(0,9) + ".");
	return s;
}

/** 
	@brief Checks where there is something in the attribute name of the current 
	class
	@return boolean (1, 0)
 **/
int Contact::exist(void)
{
	if (this->_name.empty())
		return (0); 
	return (1);
}


/** 
    @param n_index integer representing class index
	@brief if ther is information in contact we delete it 
	@return void 
 **/
void Contact::erase(void)
{
	if (!this->_name.empty())
	{
		this->_name.erase();
		this->_last_name.erase();
		this->_nick_name.erase();
		this->_darkest_secret.erase();
		this->_phone_number.erase();
	}
}

int Contact::getTime(void)
{
	return (this->_time);
}