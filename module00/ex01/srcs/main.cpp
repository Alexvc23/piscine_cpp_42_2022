/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 07:45:35 by alexanderva       #+#    #+#             */
/*   Updated: 2022/12/14 10:55:25 by jvalenci         ###   ########.fr       */ /*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"
#include "../includes/PhoneBook.hpp"

int main(void)
{
    PhoneBook p;
    int current_index = 0;
    std::string buffer;

    while (1)
    {
        std::cout << "\033[1m\033[34mWelcome to PhoneBook programe, in order"
        << " to manage your contacts please enter either of the next" 
        << " commands:\033[0m\n\033[31mADD\033[0m: Add a new contact."
        << "\n\033[31mSEARCH\033[0m: Find a conctact within your" 
        << " repertory.\n\033[31mEXIT\033[0m: Quit program.\n";
        std::cout << "> ";
        std::getline(std::cin, buffer);
        if (std::cin.eof())
            return (-1);
        if (!buffer.compare("ADD"))
            p.addContact(current_index);
        else if (!buffer.compare("SEARCH"))
            p.callSearch();
        else if (!buffer.compare("EXIT"))
            return (0);
        current_index = p.counter();
        buffer.erase();
        check_cin();
    }
    return (0);
}