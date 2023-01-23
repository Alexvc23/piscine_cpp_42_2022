/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 07:55:47 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/23 08:16:01 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

class A;
class B;
class C;

using std::cout;
using std::endl;

//!!local functions 
int randomNum(void)
{
	srand(time(0));	
	int ramdom_number = (rand() % 100 ) + 1;
	return (ramdom_number % 3);
}

Base *generate(void)
{

    switch (randomNum())
    {
    case 0:
        return (new A());
        break;
    case 1:
        return (new B());
        break;
    case 2:
        return (new C());
        break;
    default:
        cout << BOLD << "Problem generating a random number\n" << END << endl;
        return (nullptr);
        break;
    }
}

void identify(Base* p)
 {
		if (dynamic_cast<A *>(p))
			cout << BOLD << "This class is of type: " << RED << "A\n" << END;
		else if (dynamic_cast<B *>(p))
			cout << BOLD << "This class is of type: " << RED << "B\n" << END;
		else if (dynamic_cast<C *>(p))
			cout << BOLD << "This class is of type: " << RED << "C\n" << END;
		else
			cout << BOLD << "Class impossible to identify\n" << END;
 }

 void identify(Base & p)
 {
	try
	{
		A &result = dynamic_cast<A &>(p);
		(void)result;// just to silent while compilation
		cout << BOLD << "This class is of type: " << RED << "A\n" << END;
	}
	catch(const std::bad_cast &bc)
	{
		try
		{
			B &result = dynamic_cast<B &>(p);
			(void)result;// just to silent while compilation
			cout << BOLD << "This class is of type: " << RED << "B\n"
			<< END;
		}
		catch (const std::bad_cast &bc)
		{
			try
			{
				C &result = dynamic_cast<C &>(p);
				(void)result;// just to silent while compilation
				cout << BOLD << "This class is of type: " << RED << "C\n"
					 << END;
			}
			catch (const std::bad_cast &bc)
			{
				cout << BOLD << "Class impossible to identify\n"
				<< END;
			}
		}
	}
 }

int main(void)
{
	for (int i = 0 ; i < 10 ; i++)
	{
		cout << "\n\n";
		std::this_thread::sleep_for(std::chrono::milliseconds(500 + i));
		Base *ptr = generate();
		cout << BOLD << "-----------------------------------------------\n" << END; 
		cout << BOLD << BLUE << "Testing passing value by reference\n" << END;
		identify(*ptr);
		cout << BOLD << "-----------------------------------------------\n" << END; 
		cout << BOLD << BLUE << "Testing passing value by address \n" << END;
		identify(ptr);

		delete ptr;
	}
    return 0;
}
