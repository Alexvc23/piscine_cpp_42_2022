/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 18:36:11 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/11 08:47:22by jvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

using std::cout;

int main(void)
{

        // ?----------------------------------------------------------
    {
        cout << BOLD << "--------- " << "Example passing wrong arguments" << BOLD 
        << " -----------\n\n" END;
        Bureaucrat a = Bureaucrat("Alex", 0);
        Form f = Form("FormTest", 75, 98); //! we set a normal form
        f.beSigned(a);                     //! we try to sign form taking
        cout << f << "\n";                 //! Prints f attributes
        a.signForm(f);                     //! We explain is f was signed or not
    }
        // ?----------------------------------------------------------
    {
        cout << "\n";
        cout << BOLD << "--------- " << RED 
        << "Example passing good arguments" << END << BOLD 
        << " -----------\n\n" END;
        Bureaucrat a = Bureaucrat("Jimmy", 55);
        Form f = Form("GoogleForm", 75, 98); //! we set a normal form
        f.beSigned(a);                     //! we try to sign form taking
        cout << f << "\n";                 //! Prints f attributes
        a.signForm(f);                     //! We explain is f was signed or not
    }
        // ?----------------------------------------------------------
    {
        cout << "\n";
        cout << BOLD << "--------- " << RED 
        << "Example passing too low argument to be signed" << END << BOLD 
        << " -----------\n\n" END;
        Bureaucrat a = Bureaucrat("Jimmy", 76);
        Form f = Form("GoogleForm", 75, 98); //! we set a normal form
        f.beSigned(a);                     //! we try to sign form taking
        cout << f << "\n";                 //! Prints f attributes
        a.signForm(f);                     //! We explain is f was signed or not
    }
    return 0;
}