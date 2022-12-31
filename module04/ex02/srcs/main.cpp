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
 
using std::cout;
using std::endl;

int main()
{

    //Cat creation
    Animal *animals[10];
    for (int i = 0; i < 5; i++)
    {
        animals[i] = new Cat();
        for (int j = 0; j < 10; j++)
            animals[i]->feedIdeas("Cat Idea");
        cout << "\n";
    }

    //Dog Creation
    for (int i = 5; i < 10; i++)
    {
        animals[i] = new Dog();
        for (int j = 0; j < 10; j++)
            animals[i]->feedIdeas("Dog Idea");
        cout << "\n";
    }

    // We show animal type
    cout << BOLD << GREEN << "Array of animal objects" << END << "\n";
    cout << BOLD "-------------------------------------------------------"
    << END << endl;
    cout << "| ";
    for (int i = 0; i < 10; i++)
        cout << BOLD <<  animals[i]->getType() << END << " | ";
    cout << "\n";
    
    // We show the ideas of element 3
    cout << BOLD "-------------------------------------------------------"
    << END << endl << "\n";
    cout << BOLD << "Let's see " << RED << "animals[3]" << END << BOLD 
    << " ideas: \n\n" << END; 
    animals[3]->printIdeas();
  
    // We show the ideas of element 8
    cout << BOLD "-------------------------------------------------------"
    << END << endl << "\n";
    cout << BOLD << "Let's see " << RED << "animals[8]" << END << BOLD 
    << " ideas: \n\n" << END; 
    animals[8]->printIdeas();

    //We delete all the objects
    cout << BOLD "-------------------------------------------------------"
    << END << endl;
    for (int i = 0; i < 10; i++)
    {
        delete animals[i];
        cout << "\n";
    }


y
    cout << BOLD "--------------------CAT-----------------------------------\n";
    cout << BOLD << RED << "Example showing deep copy working\n\n" << END;
    //cat
    cout << BOLD << "We create a " << PINK << "Cat object *i\n" << END; 
    Cat *i = new Cat();
    cout << "\n";
    //----------------------------------------------------------------------
    cout << BOLD << RED << "We feed this cat object with 5 " << END << BOLD 
    << "Cat ideas\n" << END;
    for (int j = 0; j < 5; j++)
        i->feedIdeas("cat Idea");
    cout << "\n";
    //----------------------------------------------------------------------
    cout << BOLD << RED << "We Create a new " << END << BOLD << "Cat object *t" 
    << END << BOLD << RED << " using overload operator and copy constructor\n" << END;
    Cat *t = new Cat(*i);
    cout << "\n";
    //----------------------------------------------------------------------
    cout << BOLD << RED << "We delete *i object" << END << endl;
    delete i;
    cout << "\n";
    //----------------------------------------------------------------------
    cout << BOLD << RED << "Let's see *t object type and ideas" << END << endl;
    cout << BOLD << "*t object type : " << CYAN << t->getType() << END 
    << endl << endl;
    t->printIdeas();
    cout << "\n";
    //----------------------------------------------------------------------
    cout << BOLD << RED << "We delete *t object" << END << endl;
    delete t;



    cout << "\n\n";
    cout << BOLD "--------------------DOG-----------------------------------\n";
    //Dog
    cout << BOLD "Dog example\n";
    cout << BOLD << "We create a " << PINK << "Dog object *a\n" << END; 
    Dog *a = new Dog();
    cout << "\n";
    //----------------------------------------------------------------------
    cout << BOLD << RED << "We feed this cat object with 5 " << END << BOLD 
    << "Dog ideas\n" << END;
    for (int j = 0; j < 5; j++)
        a->feedIdeas("Dog Idea");
    cout << "\n";
    //----------------------------------------------------------------------
    cout << BOLD << RED << "We Create a new " << END << BOLD << "Dog object *b" 
    << END << BOLD << RED << " using overload operator passing as copy *a\n" << END;
    Dog *b = new Dog(*a);
    cout << "\n";
    //----------------------------------------------------------------------
    cout << BOLD << RED << "We delete *a object" << END << endl;
    delete a;
    cout << "\n";
    //----------------------------------------------------------------------
    cout << BOLD << RED << "Let's see *b object type and ideas" << END << endl;
    cout << BOLD << "*a object type : " << CYAN << b->getType() << END 
    << endl << endl;
    b->printIdeas();
    cout << "\n";
    //----------------------------------------------------------------------
    cout << BOLD << RED << "We delete *b object" << END << endl;
    delete b;

    return 0;
}