/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 09:39:10 by alexanderva       #+#    #+#             */
/*   Updated: 2022/12/29 11:0 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"
#include"Dog.hpp"
#include"WrongCat.hpp"

int main()
{
    //Animal
    const Animal *meta = new Animal();
    std::cout << BOLD << RED <<  meta->getType() << END 
    << " makes the next sound: ";
    meta->makeSound();

    std::cout << BOLD "-------------------------------------------------------"
    << END << std::endl;

    //Dog
    const Animal *j = new Dog();
    std::cout << BOLD << RED <<  j->getType() << END 
    << " makes the next sound: ";
    j->makeSound();

    std::cout << BOLD "-------------------------------------------------------"
    << END << std::endl;

    //Cat
    const Animal *i = new Cat();
    std::cout << BOLD << RED <<  i->getType() << END 
    << " makes the next sound: ";
    i->makeSound();

    std::cout << BOLD "-------------------------------------------------------"
    << END << std::endl;
    
    //WrongAnimal
    const WrongAnimal *WrongA = new WrongAnimal();
    std::cout << BOLD << RED <<  WrongA->getType() << END 
    << " makes the next sound: ";
    WrongA->makeSound();

    std::cout << BOLD "-------------------------------------------------------"
    << END << std::endl;

    //WrongCat
    const WrongCat *WrongC = new WrongCat();
    std::cout << BOLD << RED <<  WrongC->getType() << END 
    << " makes the next sound: ";
    WrongC->makeSound();

    //We delete all the objects
   
    std::cout << BOLD "-------------------------------------------------------"
    << END << std::endl;
    delete WrongC;

    std::cout << BOLD "-------------------------------------------------------"
    << END << std::endl;
    delete WrongA;
    
    std::cout << BOLD "-------------------------------------------------------"
    << END << std::endl;
    delete i;

    std::cout << BOLD "-------------------------------------------------------"
    << END << std::endl;
    delete j;

    std::cout << BOLD "-------------------------------------------------------"
    << END << std::endl;
    delete meta;
    
    return 0;
}