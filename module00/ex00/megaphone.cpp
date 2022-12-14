/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:04:34 by alexanderva       #+#    #+#             */
/*   Updated: 2022/12/14 14:15:43 by jvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main(int ac, char **argv)
{
    std::string buffer;
    int i = 0;
    (void) argv;

    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    while (argv[++i])
        buffer.append(argv[i]);
    for (i = 0; i < (int)buffer.length(); i++)
        std::cout << (char)std::toupper(buffer[i]);
    std::cout << std::endl;
    return (0);
}