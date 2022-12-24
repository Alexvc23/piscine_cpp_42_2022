/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 07:45:35 by alexanderva       #+#    #+#             */
/*   Updated: 2022/12/07 07:39:01 by alexanderva      ###   ########.fr       */
/*                                                                            */
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
        << "commands:\033[0m\n\033[31mADD\033[0m: Add a new contanct."
        << "\n\033[31mSEARCH\033[0m: Find a conctact within your contact" 
        << " repertory.\n\033[31mEXIT\033[0m: Quit program.\n";
        std::cout << "> ";
        std::cin >> buffer;
        std::cin.ignore();
        if (!buffer.compare("ADD"))
        {
            p.addContact(current_index);
            std::cout << "passing by here\n";
        }
        else if (!buffer.compare("SEARCH"))
            p.callSearch();
        else if (!buffer.compare("EXIT"))
            return (0);
        current_index = p.counter();
    }
    return (0);
}