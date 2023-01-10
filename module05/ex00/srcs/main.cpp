/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 18:36:11 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/09 13:29:52 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

using std::cout;

int main(void)
{
    int i = 0;

    // ─────────────────────────────────────────────────────────────────────
    cout << BOLD << "---------------------------------------------------\n" << END;
    cout << BOLD << RED << "Let's create  an object " << END << BOLD
    << "t = Bureaucrat(\"Alex, 177\")" << "\n" << END;

    Bureaucrat t = Bureaucrat("Alex", 177);

    // ─────────────────────────────────────────────────────────────────────
    cout << BOLD << "---------------------------------------------------\n" << END;
    cout << BOLD << RED << "Let's create  an object " << END << BOLD
    << "a = Bureaucrat(\"Tom, -1\")" << "\n" << END;

    Bureaucrat a = Bureaucrat("Tom", -1);

    // ─────────────────────────────────────────────────────────────────────
    cout << BOLD << "---------------------------------------------------\n" << END;
    cout << BOLD << RED << "Now we will decrement tom twice \n" << END;
    for (i = 0; i < 2 ; i++)
    {
        a.decrement();
        cout << a << "\n";
    }
    cout << BOLD << "---------------------------------------------------\n" << END;
    cout << BOLD << RED << "Now we will increment tom twice \n" << END;
    for (i = 0; i < 2 ; i++)
    {
        a.increment();
        cout << a << "\n";
    }
    // ─────────────────────────────────────────────────────────────────────
    cout << BOLD << "---------------------------------------------------\n" << END;
    cout << BOLD << CYAN << "** We create a new object with a correct value **\n" << END;
    Bureaucrat b = Bureaucrat("Jimmy", 4);
    cout << BOLD << CYAN << "** We increment Jimmy three times **\n" << END;
    cout << b << "\n";

    for (i = 0; i < 3 ; i++)
    {
        b.increment();
        cout << b << '\n';
    }
    cout << BOLD << CYAN << "** We decrement Jimmy three times **\n" << END;
    for (i = 0; i < 3 ; i++)
    {
        b.decrement();
        cout << b << '\n';
    }

    return 0;
}