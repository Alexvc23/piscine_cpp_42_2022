/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:57:16 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/24 10:32:11 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"
using std::cout;
using std::endl;

/** The uintptr_t type is guaranteed to be large enough to store the value of any
pointer, which means it can be used to convert a pointer to an integer and back
without losing any information. This can be useful in situations where a pointer
needs to be passed to a function that expects an integer parameter, or stored in
 a data structure that only supports integers. **/

int main(void)
{
    Data *person  = new Data; //! Data structure with information inside
    Serialize test;

    person->name = "Patrick";
    person->lastName = "Perez";
    person->nationality = "French";
    person->age = 56;

    uintptr_t serialization = test.serialize(person); //! Variable to seriaze Data structure 
    Data *deserialization  = test.deserialize(serialization); //! ptr to deserialize uintptr_t 

    //?------------------------------------------------------------------------
    cout << BOLD << BLUE << "------------------print as decimal----------------\n" 
    << END;
    cout << BOLD << RED << "UINTPTR_T: " << END << BOLD << serialization << END << endl;
    cout << BOLD << RED << "DATA: " << END << BOLD << test.serialize(deserialization) << END << endl;
    //?------------------------------------------------------------------------
    cout << BOLD << BLUE << "------------------print as pointer----------------\n";
    cout << BOLD << RED << "UINTPTR_T: " << END << BOLD << test.deserialize(serialization) << END << endl;
    cout << BOLD << RED << "DATA: " << END << BOLD << person << END << endl;
    //?------------------------------------------------------------------------
    cout << BOLD << BLUE << "------------------test with deserialized pointer----------------\n" 
    << END;
    cout <<  deserialization->name << endl;
    cout <<  deserialization->lastName << endl;
    cout <<  deserialization->nationality << endl;
    cout <<  deserialization->age << endl;

    delete person;
    return 0;
}
