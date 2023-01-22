/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 06:31:21 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/22 09:30:38 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Base.hpp"

using std::cout;

int main(void)
{
    Base *ptr = generate();
    cout << BOLD << "-----------------------------------------------\n" << END; 
    cout << BOLD << BLUE << "Testing passing value by reference\n" << END;
    identify(*ptr);
    cout << BOLD << "-----------------------------------------------\n" << END; 
    cout << BOLD << BLUE << "Testing passing value by address \n" << END;
    identify(ptr);

    delete ptr;
    return 0;
}
