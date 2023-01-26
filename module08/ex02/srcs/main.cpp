/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandervalencia <alexandervalencia@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:01:18 by alexanderva       #+#    #+#             */
/*   Updated: 2023/01/26 14:49:58 by alexanderva      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MutantStack.hpp"

int main(void)
{
    MutantStack<int> mStack;

    cout << BOLD << "---------------------------------------------\n" << END;
    cout << BOLD << BLUE << "Testing method push" << END << endl; 
    cout << BOLD << "push(6)\npush(8)\npush(4)\npush(2)\npush(10)\n" << END;
    mStack.push(6);
    mStack.push(8);
    mStack.push(4);
    mStack.push(2);
    mStack.push(10);
    cout << endl;

    cout << BOLD << "---------------------------------------------\n" << END;
    cout << BOLD << BLUE << "Testing size method" << END << endl; 
    //? Test size method
    cout << "Stack size: " << mStack.size() << endl;

    cout << BOLD << "---------------------------------------------\n" << END;
    cout << BOLD << BLUE << "Testing top method" << END << endl; 
    //? Test top method
    cout << "Stack top: " << mStack.top() << endl;

    cout << BOLD << "---------------------------------------------\n" << END;
    cout << BOLD << BLUE << "Testing pop method" << END << endl; 
    //? Test pop method
    mStack.pop();

    cout << BOLD << "---------------------------------------------\n" << END;
    cout << BOLD << BLUE << "Testing top method again" << END << endl; 
    //? Test top method again
    cout << "Stack top after pop: " << mStack.top() << endl;

    cout << BOLD << "---------------------------------------------\n" << END;
    cout << BOLD << BLUE << "Testing empty method" << END << endl; 
    //? Test empty method
    if (mStack.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    cout << BOLD << "---------------------------------------------\n" << END;
    cout << BOLD << BLUE << "Testing iterators" << END << endl; 
    //? Testing iterators  

    MutantStack<int>::iterator begin = mStack.begin();
    MutantStack<int>::iterator end = mStack.end();


    while (begin != end)
    {
        cout << *begin << endl;
        begin++;
    }
    return 0;
}

/* int main()
{
    std::list<int> mStack; 
    mStack.push_front(5);
    mStack.push_front(17);
    std::cout << mStack.front() << std::endl;
    mStack.pop_front();
    std::cout << mStack.size() << std::endl;
    mStack.push_back(3);
    mStack.push_back(5);
    mStack.push_back(737);
    mStack.push_back(0);

    std::list<int>::iterator it = mStack.begin();
    std::list<int>::iterator ite = mStack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::list<int> s(mStack);
    return 0;
} */

/* int main()
{
    MutantStack<int> mStack;
    mStack.push(5);
    mStack.push(17);
    std::cout << mStack.top() << std::endl;
    mStack.pop();
    std::cout << mStack.size() << std::endl;
    mStack.push(3);
    mStack.push(5);
    mStack.push(737);
    //[...]
    mStack.push(0);
    MutantStack<int>::iterator it = mStack.begin();
    MutantStack<int>::iterator ite = mStack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mStack);
    return 0;
}
 */