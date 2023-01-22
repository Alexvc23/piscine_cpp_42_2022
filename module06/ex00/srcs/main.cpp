/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:05:37 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/22 18:11:54 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

int main(int argc, char **argv)
{
    Scalar test;
    try
    {
        if (argc != 2)
            throw std::string("Wrong number of arguments provided");
        test = Scalar(argv[1]);
    }
    catch(std::string error)
    {
        std::cerr << BOLD << RED << error << END << std::endl;
    }
    catch(const Scalar::wrongException &e)
    {
        std::cerr << BOLD << RED << e.what() << END << std::endl;
    }
    return (0);
}