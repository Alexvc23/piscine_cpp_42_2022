/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:19:03 by alexanderva       #+#    #+#             */
/*   Updated: 2022/12/12 11:27:11 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main(void)
{
    std::string test = "HI THIS IS BRAIN";
    std::string *stringPTR; 
    stringPTR = &test;
    std::string &stringREF = test;

    std::cout << "The memory address of the string variable: " << &test << "\n";
    std::cout << "The memory address held by stringPTR: " << stringPTR << "\n";
    std::cout << "The memory address held by stringREF: " << &stringREF << "\n";
    std::cout << "\n";
    std::cout << "The value of the string variable: " << test << "\n";
    std::cout << "The value pointed to by stringPTR: " << *stringPTR << "\n";
    std::cout << "The value pointed to by stringREF: " << stringREF << "\n";
}