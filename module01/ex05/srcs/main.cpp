/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:35:22 by alexanderva       #+#    #+#             */
/*   Updated: 2022/12/13 14:38:00 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int main(void)
{
    Harl x;

    x.complain("DEBUG");
    x.complain("INFO");
    x.complain("WARNING");
    x.complain("ERROR");
    return (0);
}