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
// #include "Form.hpp"
// #include "ShrubberyCreationForm.hpp"
// #include "RobotomyRequestForm.hpp"
// #include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

using std::cout;

int main(void)
{

    // ?----------------------------------------------------------
    {
        cout << BOLD << PINK << "--------- "
             << "Example with ShrubberyCreationForm" << BOLD
             << " -----------\n\n" END;
        Bureaucrat a = Bureaucrat("Alex", 145);
        Intern someRandomIntern;
        Form *f = someRandomIntern.makeForm("ShrubberyCreationForm", "Agent");
        try
        {
            if (!f)
                throw std::exception();
        }
        catch(const std::exception& e)
        {
            std::cerr << BOLD << CYAN << "OBJECT INICITIALIZATION FAILED\n" << END;
        }
        
        try
        {
            if (!f)
                throw (std::exception());
            std::cout << BOLD << GREEN << "------Signature------\n" << END;
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
        catch(...)
        {
            std::cerr << BOLD << CYAN << "OBJECT INICITIALIZATION FAILED\n" << END;
        }
        if (f)
            delete f;
    }

    // ?----------------------------------------------------------
    {
        cout << BOLD << PINK << "--------- "
             << "Example with RobotomyRequestForm" << BOLD
             << " -----------\n\n" END;
        Bureaucrat a = Bureaucrat("Alex", 43);
        Intern someRandomIntern;
        Form *f = someRandomIntern.makeForm("RobotomyRequestForm", "Agent");
        try
        {
            if (!f)
                throw std::exception();
        }
        catch(const std::exception& e)
        {
            std::cerr << BOLD << CYAN << "OBJECT INICITIALIZATION FAILED\n" << END;
        }
        
        try
        {
            if (!f)
                throw (std::exception());
            std::cout << BOLD << GREEN << "------Signature------\n" << END;
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
        catch(...)
        {
            std::cerr << BOLD << CYAN << "OBJECT INICITIALIZATION FAILED\n" << END;
        }
        if (f)
            delete f;
    }

    // ?----------------------------------------------------------
    {
        cout << BOLD << PINK << "--------- "
             << "Example with PresidentialPardonForm" << BOLD
             << " -----------\n\n" END;
        Bureaucrat a = Bureaucrat("Alex", 5);
        Intern someRandomIntern;
        Form *f = someRandomIntern.makeForm("PresidentialPardonForm", "Agent");
        try
        {
            if (!f)
                throw std::exception();
        }
        catch(const std::exception& e)
        {
            std::cerr << BOLD << CYAN << "OBJECT INICITIALIZATION FAILED\n" << END;
        }
        
        try
        {
            if (!f)
                throw (std::exception());
            std::cout << BOLD << GREEN << "------Signature------\n" << END;
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
        catch(...)
        {
            std::cerr << BOLD << CYAN << "OBJECT INICITIALIZATION FAILED\n" << END;
        }
        if (f)
            delete f;
    }
    // ?----------------------------------------------------------
    {
        cout << BOLD << PINK << "--------- "
             << "Example Passing wrong arguments" << BOLD
             << " -----------\n\n" END;
        Bureaucrat a = Bureaucrat("Alex", 5);
        Intern someRandomIntern;
        Form *f = someRandomIntern.makeForm("PresidentialPardon", "Agent");
        try
        {
            if (!f)
                throw std::exception();
        }
        catch(const std::exception& e)
        {
            std::cerr << BOLD << CYAN << "OBJECT INICITIALIZATION FAILED\n" << END;
        }
        
        try
        {
            if (!f)
                throw (std::exception());
            std::cout << BOLD << GREEN << "------Signature------\n" << END;
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
        catch(...)
        {
            std::cerr << BOLD << CYAN << "OBJECT INICITIALIZATION FAILED\n" << END;
        }
        if (f)
            delete f;
    }
    return 0;
 } 