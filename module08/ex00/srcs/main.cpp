/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:39:04 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/26 10:20:32 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"easyfind.hpp"

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 , 11};//? list of elements
    int n = sizeof(array) / sizeof(array[0]); //? size of elements

    std::vector<int> vec(array, array + n); //? initialize a verctor with a range of elements
    std::vector<int>::iterator it;
    //-------------------------------------------------------------------------
    {
        cout << BOLD << BLUE << "Let's do a test trying to find 3 in a vector" 
        << END << endl;
        int value = 3; //?value we want to search
        try
        {
            it = easyfind(vec, value);
            cout << BOLD << "The first occurrence of " << value
                 << " in the container is: " << RED << *it << END << endl;
        }
        catch (const std::out_of_range &e)
        {
            cout << e.what() << '\n';
        }
    }
    //-------------------------------------------------------------------------
    {
        cout << BOLD << BLUE << "Let's do a test trying to find 7 in a vector" 
        << END << endl;
        int value = 7; //?value we want to search
        try
        {
            it = easyfind(vec, value);
            cout << BOLD << "The first occurrence of " << value
                 << " in the container is: " << RED << *it << END << endl;
        }
        catch (const std::out_of_range &e)
        {
            cout << e.what() << '\n';
        }
    }
    //-------------------------------------------------------------------------
    {
        cout << BOLD << BLUE << "Let's do a test trying to find 100 in a vector" 
        << END << endl;
        int value = 100; //?value we want to search
        try
        {
            it = easyfind(vec, value);
            cout << BOLD << "The first occurrence of " << value
                 << " in the container is: " << RED << *it << END << endl;
        }
        catch (const std::out_of_range &e)
        {
            cout << e.what() << '\n';
        }
    }
    //-------------------------------------------------------------------------
    return 0;
}
