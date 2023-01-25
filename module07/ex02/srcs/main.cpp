/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:09:36 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/25 14:56:35 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#define MAX_VAL 750

using std::cout;
using std::endl;

template<typename T>
void iter(int *element , T obj, const size_t size) 
{
    size_t new_size = reinterpret_cast<size_t>(size);
    cout << BOLD << BLUE << "int array: " << END;
    for (size_t i = 0; i < new_size; i++)
        cout << BOLD << element[i] << " " << END;
    cout << "\n";
    cout << BOLD << BLUE << "template array<int>: " << END; 
    for (size_t i = 0; i < new_size; i++)
        cout << BOLD << obj[i] << " " << END;
}

int main(int, char**)
{
    //--------------------------------------------------------------------
    cout << BOLD << BLUE << "Test comparing a array and the templete class"
    << END << endl;
    Array<int> *numbers =  new Array<int>(MAX_VAL); //? class
    int *mirror = new int[MAX_VAL]; //? array
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        (*numbers)[i] = value;
        mirror[i] = value;
    }
    // iter(mirror, numbers, MAX_VAL);
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != (*numbers)[i])
        {
            std::cerr << "didn't save the same value!!" << 
            ((i % 20) == 0 ? "\n" : "");
            return 1;
        }
        else
            cout << BOLD << "[" << GREEN << "✔️️" << END << BOLD "]" <<
            ((i % 30) == 0 ? "\n" : "") << END;
    }
    cout << "\n";
    cout << BOLD << "Total of characters checked " << MAX_VAL - 1 << END << endl;

    //--------------------------------------------------------------------
    cout << BOLD << "-----------------------------------------------\n" << END;
    {
        cout << BOLD << BLUE << "\nTest using overload operator =\n" << END;

        Array<int> *tmp = numbers;
        cout << BOLD << "Array<int> numbers.size() = " << BLUE << tmp->size() << END << endl;
        delete numbers;
        cout << BOLD << RED << "after deleting numbers object\n" << END;
        cout << BOLD << "Array<int> tmp->size() = " << BLUE << tmp->size() << END << endl;
        cout << BOLD << "-----------------------------------------------\n" << END;
        //--------------------------------------------------------------------
        cout << BOLD << BLUE << "\nTest using copy constructor\n" << END;
        Array<int> *test = new Array<int>(*tmp);
        cout << BOLD << "tmp->size() = " << BLUE << tmp->size() << END << endl;
        cout << BOLD << RED << "after deleting tmp object\n" << END;
        cout << BOLD << "test.size() = " << BLUE << test->size() << END << endl;
        delete test;
    }
    //--------------------------------------------------------------------
    cout << BOLD << "-----------------------------------------------\n" << END;
    Array<int> test(MAX_VAL);
    for (int i = 0; i < MAX_VAL; i++)
        test[i] = rand();
    try
    {
        test[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        test[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    delete [] mirror;//
    cout << BOLD << "-----------------------------------------------\n" << END;
    return 0;
}