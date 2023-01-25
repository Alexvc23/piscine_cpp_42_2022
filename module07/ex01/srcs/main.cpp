/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:53:44 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/23 16:0 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"iter.h"

using std::cout;
using std::endl;

int main(void)
{
    int myArray[] = {0, 1, 2 ,3 ,4, 5};
    char text[] = "tengo la camisa negra\n";
    std::string lista[] = {"buenos", "dias", "amigitos", "como", "estan"};

    cout << BOLD << "--------------------------------------------------\n" << END; 
    cout << BOLD << GREEN << "Test incrementing by 1 each element of array\n" << endl << END;
    iter(myArray, 6, print);//!print original 
    cout << "\n";
    iter(myArray, 6, addOne);//!do changes adding one to each one 
    iter(myArray, 6, print); //! print changes to the same array 
    cout << "\n";
    cout << BOLD << "--------------------------------------------------\n" << END; 
    cout << BOLD << GREEN << "Test turning chars to upper case\n" << endl << END;
    iter(text, 6, print);//!print original 
    cout << "\n";
    iter(text, std::string(text).length(), toUpper);//! Do changes 
    iter(text, 6, print); //! print changes to the same array 
    cout << "\n";
    cout << BOLD << "--------------------------------------------------\n" << END; 
    cout << BOLD << GREEN << "Test printing an array of strings\n" << endl << END;
    iter(lista, (sizeof(lista) / sizeof(lista[0])), print);
    cout << "\n";

    return 0;
}