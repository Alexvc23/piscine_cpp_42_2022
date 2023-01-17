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
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

using std::cout;

int main(void)
{

    // ?----------------------------------------------------------
    {
        cout << BOLD << "--------- "
             << "Example with ShrubberyCreationForm" << BOLD
             << " -----------\n\n" END;
        Bureaucrat a = Bureaucrat("Alex", 145);
        Form *f = new ShrubberyCreationForm("ShrubberyTest");
        try
        {
            cout << BOLD << GREEN << "------Signature------\n" << END;
            f->beSigned(a); //! we try to sign form if requirements met
            cout << a;      //! Prints a attributes
            cout << *f;     //! Prints f attributes
            a.signForm(*f); //! We explain is f was signed or not
            cout << BOLD << GREEN << "------Execution------\n" << END;
            a.executeForm(*f);
        }
        catch (Form::gradeToLowException &e)
        {
            std::cerr << BOLD << CYAN << e.what() << END << '\n';
        }
        catch (Form::gradeToHighException &e)
        {
            std::cerr << BOLD << CYAN << e.what() << END << '\n';
        }
        delete f;
    }
    // ?----------------------------------------------------------
    {
        cout << BOLD << "--------- "
             << "Example with RobotomyReauestForm" << BOLD
             << " -----------\n\n" END;
        Bureaucrat a = Bureaucrat("Freddy", 72);
        Form *f = new RobotomyRequestForm("RobotomyTest");
        try
        {
            cout << BOLD << GREEN << "------Signature------\n" << END;
            f->beSigned(a); //! we try to sign form if requirements met
            cout << a;      //! Prints a attributes
            cout << *f;     //! Prints f attributes
            a.signForm(*f); //! We explain if f was signed or not
            cout << BOLD << GREEN << "------Execution------\n" << END;
            for (int i = 0; i < 4; i++)
                a.executeForm(*f);
        }
        catch (Form::gradeToLowException &e)
        {
            std::cerr << BOLD << CYAN << e.what() << END << '\n';
        }
        catch (Form::gradeToHighException &e)
        {
            std::cerr << BOLD << CYAN << e.what() << END << '\n';
        }
        delete f;
    }
    // ?----------------------------------------------------------
    {
        cout << BOLD << "--------- "
             << "Example with PresidentialPardoForm" << BOLD
             << " -----------\n\n" END;
        Bureaucrat a = Bureaucrat("Jack", 25);
        Form *f = new PresidentialPardonForm("PresidentialTest");
        try
        {
            cout << BOLD << GREEN << "------Signature------\n" << END;
            f->beSigned(a); //! we try to sign form if requirements met
            cout << a;      //! Prints a attributes
            cout << *f;     //! Prints f attributes
            a.signForm(*f); //! We explain if f was signed or not
            cout << BOLD << GREEN << "------Execution------\n" << END;
                a.executeForm(*f);
        }
        catch (Form::gradeToLowException &e)
        {
            std::cerr << BOLD << CYAN << e.what() << END << '\n';
        }
        catch (Form::gradeToHighException &e)
        {
            std::cerr << BOLD << CYAN << e.what() << END << '\n';
        }
        delete f;
    }
    return 0;
}