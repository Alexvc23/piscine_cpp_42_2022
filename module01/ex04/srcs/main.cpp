/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:32:06 by alexanderva       #+#    #+#             */
/*   Updated: 2022/12/15 14:41:04 by jvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int sed(char **argv, std::string str)
{
    std::ofstream outfile;
    int index_p = -1;

    outfile.open(std::string(argv[1]) + ".replase");
    if (outfile.fail())
    {
        std::cerr << "Problem creating outfile\n";
        return (-1);
    }
    int size = str.size();
    for (int i = 0; i < size; i++)
    {
        index_p = str.find(std::string(argv[2]), i);
        if (index_p == i && index_p != -1)
        {
            outfile << std::string(argv[3]);
            i += std::string(argv[2]).size() - 1;
        }
        else
            outfile << str[i];
    }
    outfile.close();
    return (0);
}

int main(int ac, char **argv)
{
    char c;
    std::string str;
    std::ifstream file; // in file stream template class ifstream

    if (ac != 4)
    {
        std::cerr
            << "Wrong sintax please enter <file> <old_word> <new_word>\n";
        return (-1);
    }
    file.open(std::string(argv[1]));
    if (file.fail())
    {
        std::cerr << std::string(std::string(argv[1]) + " : " +
                                 "No such file or directory");
        return (-1);
    }
    while (!file.eof() && file >> std::noskipws >> c)
        str += c;
    return (sed(argv, str));
}