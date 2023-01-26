/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:25:34 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/26 12:52:22 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Span.hpp"

int main(void)
{
    //----------------------------------------------------------------------
    {
        cout <<  BOLD << "-----------------------------------------------------\n"
        << END;
        cout << BOLD << BLUE << "Test passing array of size 10000 at once" << END << endl;
        int array[10000]; //? initial array 
        int n = sizeof(array) / sizeof(array[0]); //? array size
        for (int i = 0; i < 10000; i++)//? we feed it with 10000 numbers
            array[i] = i;
        std::vector<int> vec(array, array + n);//? we initialize a vector with the array
        try
        {
            Span s = Span(n);
            s.addNumbers(vec.begin(), vec.end());
            cout << BOLD << "Span size: " << RED << s.getN() << END <<  endl;
            cout << BOLD << "Longest Span: " << RED << s.longestSpan() << END <<  endl;
            cout << BOLD << "Shortest Span: " << RED << s.shortestSpan() << END <<  endl;
        }
        catch(const std::length_error& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }
    //----------------------------------------------------------------------
    {
        cout <<  BOLD << "-----------------------------------------------------\n"
        << END;
        cout << BOLD << BLUE << "Test adding 6 numbers to Span at once" << END << endl;
        int array[] = {6, 3, 17, 9, 11}; //? initial array 
        int n = sizeof(array) / sizeof(array[0]); //? array size
        std::vector<int> vec(array, array + n);//? we initialize a vector with the array
        Span s = Span(n);
        try
        {
            s.addNumbers(vec.begin(), vec.end());
            std::vector<int> t = s.getNumbers();
            std::sort(t.begin(), t.end());
            for (size_t i = 0; i < t.size(); i++)
                cout << t[i] << " ";
            cout << endl;
            cout << BOLD << "Span size: " << RED << s.getN() << END <<  endl;
            cout << BOLD << "Shortest Span: " << RED << s.shortestSpan() << END <<  endl;
            cout << BOLD << "Longest Span: " << RED << s.longestSpan() << END <<  endl;
        }
        catch(const std::length_error& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }
    //----------------------------------------------------------------------
    {
        cout <<  BOLD << "-----------------------------------------------------\n"
        << END;
        cout << BOLD << BLUE << "Test trying to add a range grader than span size" << END << endl;
        int array[] = {6, 3, 17, 9, 11}; //? initial array 
        int n = sizeof(array) / sizeof(array[0]); //? array size
        std::vector<int> vec(array, array + n);//? we initialize a vector with the array
        try
        {
            Span s = Span(1);
            s.addNumbers(vec.begin(), vec.end());
            std::vector<int> t = s.getNumbers();
            std::sort(t.begin(), t.end());
            for (size_t i = 0; i < t.size(); i++)
                cout << t[i] << " ";
            cout << endl;
            cout << BOLD << "Span size: " << RED << s.getN() << END <<  endl;
            cout << BOLD << "Shortest Span: " << RED << s.shortestSpan() << END <<  endl;
            cout << BOLD << "Longest Span: " << RED << s.longestSpan() << END <<  endl;
        }
        catch(const std::length_error& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }
    //----------------------------------------------------------------------
    {
        cout <<  BOLD << "-----------------------------------------------------\n"
        << END;
        cout << BOLD << BLUE << "Test trying to add more numbers than allowed" << END << endl;
        try
        {
            Span s = Span(1);
            for (size_t i = 0; i < 10; i++)
                s.addNumber(5);
        }
        catch(const std::length_error& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    //----------------------------------------------------------------------
    {
        cout <<  BOLD << "-----------------------------------------------------\n"
        << END;
        cout << BOLD << BLUE << "Test trying to find the longest with not enough numbers" << END << endl;
        try
        {
            Span s = Span(1);
            s.addNumber(5);
            int longest = s.longestSpan(); 
            int shortest = s. shortestSpan(); 
            cout << BOLD << "Longest Span: " << RED << longest << END <<  endl;
            cout << BOLD << "Shortest Span: " << RED << shortest << END <<  endl;
        }
        catch(const std::length_error& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    //----------------------------------------------------------------------
}