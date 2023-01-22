/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 06:31:12 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/22 09:26:58 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

class A;
class B;
class C;

using std::cout;
using std::endl;

//! Constructors
Base::Base()
{
	cout << "\e[0;33mDefault Constructor called of Base\e[0m" << endl;
}

Base::Base(const Base &copy)
{
	(void) copy;
	cout << "\e[0;33mCopy Constructor called of Base\e[0m" << endl;
}


//! Destructor
Base::~Base()
{
	cout << "\e[0;31mDestructor called of Base\e[0m" << endl;
}
//!! Operators
Base & Base::operator=(const Base &assign)
{
	(void) assign;
	return *this;
}

//!!locat functions 
int randomNum(void)
{
	srand(time(0));	
	int ramdom_number = (rand() % 100 ) + 1;
	return (ramdom_number % 3);
}

Base *generateA(void)
{
	Base *ptr = new A();
	return (ptr);
}

Base *generateB(void)
{
	Base *ptr = new B();
	return (ptr);
}

Base *generateC(void)
{
	Base *ptr = new C();
	return (ptr);
}

Base *generate(void)
{
	int ran = randomNum();
	Base *ptr;

	Base * (*funcList[])() = {&generateA, &generateB, 
	&generateC};
	ptr = funcList[ran]();

	return ptr;
}

 void identify(Base* p)
 {
	{
		A *result = dynamic_cast<A *>(p);
		if (result)
		{
			cout << BOLD << "This class is of type: " << RED << "A\n" << END;
			return;
		}
	}
	{
		B *result = dynamic_cast<B *>(p);
		if (result)
		{
			cout << BOLD << "This class is of type: " << RED << "B\n" << END;
			return;
		}
	}
	{
		C *result = dynamic_cast<C *>(p);
		if (result)
		{
			cout << BOLD << "This class is of type: " << RED << "C\n" << END;
			return;
		}
	}
	cout << BOLD << "Class impossible to identify\n" << END;
 }

 void identify(Base & p)
 {
	try
	{
		A &result = dynamic_cast<A &>(p);
		(void)result;
		cout << BOLD << "This class is of type: " << RED << "A\n" << END;
		return;
	}
	catch(const std::bad_cast &bc)
	{
		try
		{
			B &result = dynamic_cast<B &>(p);
			(void)result;
			cout << BOLD << "This class is of type: " << RED << "B\n"
				 << END;
			return;
		}
		catch (const std::bad_cast &bc)
		{
			try
			{
				C &result = dynamic_cast<C &>(p);
				(void)result;
				cout << BOLD << "This class is of type: " << RED << "C\n"
					 << END;
				return;
			}
			catch (const std::bad_cast &bc)
			{
				cout << BOLD << "Class impossible to identify\n"
				 << END;
			}
		}
	}
 }