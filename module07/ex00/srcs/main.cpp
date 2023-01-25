/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:42:41 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/25 14:38:39 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "template.hpp"


using std::cout;
using std::endl;

class Awesome
{
private:
    int _n;

public:
    Awesome(void) : _n(0){};
    Awesome(int n) : _n(n){};
    ~Awesome(){};
    bool operator==(Awesome const &rhs) const { return (this->_n == rhs._n); }
    bool operator!=(Awesome const &rhs) const { return (this->_n != rhs._n); }
    bool operator>(Awesome const &rhs) const { return (this->_n > rhs._n); }
    bool operator<(Awesome const &rhs) const { return (this->_n < rhs._n); }
    bool operator>=(Awesome const &rhs) const { return (this->_n < rhs._n); }
    bool operator<=(Awesome const &rhs) const { return (this->_n < rhs._n); }
    int get_n() const { return _n; }
};

std::ostream &operator<<(std::ostream &o, const Awesome &a)
{
    o << a.get_n();
    return o;
}

int main(void)
{
    Awesome a(2), b(4);
    cout << "object a = " << a << " object b = " << b << endl;
    ::swap(a, b);
    cout << "after swap\n";
    cout << "object a = " << a << " object b = " << b << endl;
    cout << "max(a, b) = " << ::max(a, b) << endl;
    {
        cout << BOLD << "--------------------------------------------\n" << END;
        cout << BOLD << GREEN << "Example using a integer\n" << END;
        int a = 2;
        int b = 3;
        cout << BOLD << "a = " << a << END << endl;
        cout << BOLD << "b = " << b << END << endl;
        cout << "swap(a, b) : " << END; 
        ::swap(a, b);
        cout << "a = " << a << ", b = " << b << endl;
        cout << "min( a, b ) = " << ::min(a, b) << endl;
        cout << "max( a, b ) = " << ::max(a, b) << endl;
    }
    { 
        cout << BOLD << "--------------------------------------------\n" << END;
        cout << BOLD << GREEN << "Example using a float\n" << END;
        float a = 5.555;
        float b = 5.33333;
        cout << BOLD << "a = " << a << END << endl;
        cout << BOLD << "b = " << b << END << endl;
        cout << "swap(a, b) : " << END; 
        ::swap(a, b);
        cout << "a = " << a << ", b = " << b << endl;
        cout << "min( a, b ) = " << ::min(a, b) << endl;
        cout << "max( a, b ) = " << ::max(a, b) << endl;
    }
    {
        cout << BOLD << "--------------------------------------------\n" << END;
        cout << BOLD << GREEN << "Example using a string\n" << END;
        std::string a = "chaine1";
        std::string b = "chaine2";
        cout << "a = " << a << " b = " << b << endl;
        cout << "swap(a, b) : " << END; 
        ::swap(a, b);
        cout << "a = " << a << ", b = " << b << endl;
        cout << "min( a, b ) = " << ::min(a, b) << endl;
        cout << "max( a, b ) = " << ::max(a, b) << endl;
    }
    return (0);
} 