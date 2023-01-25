/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:42:41 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/25 13:53:32 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "template.hpp"


using std::cout;
using std::endl;

int main(void)
{
    {
        cout << BOLD << "--------------------------------------------\n" << END;
        cout << BOLD << GREEN << "Example using a integer\n" << END;
        int a = 2;
        int b = 3;
        cout << BOLD << "a = " << a << END << endl;
        cout << BOLD << "b = " << b << END << endl;
        cout << "swap(a, b) : " << END; 
        ::swap(a, b);
        cout << "a = " << a << ", b = " << b << endl;
        cout << "min( a, b ) = " << ::min(a, b) << endl;
        cout << "max( a, b ) = " << ::max(a, b) << endl;
    }
    { 
        cout << BOLD << "--------------------------------------------\n" << END;
        cout << BOLD << GREEN << "Example using a float\n" << END;
        float a = 5.555;
        float b = 5.33333;
        cout << BOLD << "a = " << a << END << endl;
        cout << BOLD << "b = " << b << END << endl;
        cout << "swap(a, b) : " << END; 
        ::swap(a, b);
        cout << "a = " << a << ", b = " << b << endl;
        cout << "min( a, b ) = " << ::min(a, b) << endl;
        cout << "max( a, b ) = " << ::max(a, b) << endl;
    }
    {
        cout << BOLD << "--------------------------------------------\n" << END;
        cout << BOLD << GREEN << "Example using a string\n" << END;
        std::string a = "chaine1";
        std::string b = "chaine2";
        cout << "a = " << a << " b = " << b << endl;
        cout << "swap(a, b) : " << END; 
        ::swap(a, b);
        cout << "a = " << a << ", b = " << b << endl;
        cout << "min( a, b ) = " << ::min(a, b) << endl;
        cout << "max( a, b ) = " << ::max(a, b) << endl;
    }
    return (0);
} 