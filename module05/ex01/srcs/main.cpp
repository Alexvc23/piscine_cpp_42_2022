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
    cout << BOLD << "-------------------------------------------------"
         << "-------------------\n"
         << END;
    {
        cout << BOLD << "--------- Example passing wrong arguments" << BOLD
             << " -----------\n\n" END;
        Bureaucrat a = Bureaucrat("Alex", -1);
        Form f = Form("FormTest", 75, 98); //! we set a normal form

        try
        {
            f.beSigned(a); //! we try to sign form taking
            cout << a;     //! Prints a attributes
            cout << f;     //! Prints f attributes
            a.signForm(f); //! We explain is f was signed or not
        }
        catch (Form::gradeToLowException &e)
        {
            std::cerr << BOLD << CYAN << e.what() << END << '\n';
        }
        catch (Form::gradeToHighException &e)
        {
            std::cerr << BOLD << CYAN << e.what() << END << '\n';
        }
    }
    // ?----------------------------------------------------------
    cout << BOLD << "-------------------------------------------------"
         << "-------------------\n"
         << END;
    {
        cout << BOLD << "--------- Example passing too low arguments to be signed" << BOLD
             << " -----------\n\n" END;
        Bureaucrat a = Bureaucrat("Jimmy", 78);
        Form f = Form("FormTest", 75, 98); //! we set a normal form

        try
        {
            f.beSigned(a); //! we try to sign form taking
            cout << a;     //! Prints a attributes
            cout << f;     //! Prints f attributes
            a.signForm(f); //! We explain is f was signed or not
        }
        catch (Form::gradeToLowException &e)
        {
            std::cerr << BOLD << CYAN << e.what() << END << '\n';
        }
        catch (Form::gradeToHighException &e)
        {
            std::cerr << BOLD << CYAN << e.what() << END << '\n';
        }
    }
    // ?----------------------------------------------------------
    cout << BOLD << "-------------------------------------------------"
         << "-------------------\n"
         << END;
    {
        cout << BOLD << "--------- Example passing proper arguments" << BOLD
             << " -----------\n\n" END;
        Bureaucrat a = Bureaucrat("Tonny", 55);
        Form f = Form("FormTest", 75, 98); //! we set a normal form

        try
        {
            f.beSigned(a); //! we try to sign form taking
            cout << a;     //! Prints a attributes
            cout << f;     //! Prints f attributes
            a.signForm(f); //! We explain is f was signed or not
        }
        catch (Form::gradeToLowException &e)
        {
            std::cerr << BOLD << CYAN << e.what() << END << '\n';
        }
        catch (Form::gradeToHighException &e)
        {
            std::cerr << BOLD << CYAN << e.what() << END << '\n';
        }
    }
    return 0;
}