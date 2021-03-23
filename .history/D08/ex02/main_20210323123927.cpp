/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 18:03:44 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/23 12:39:27 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

#define CLRED "\x1b[31m"
#define CLGREEN "\x1b[32m"
#define CLYELLOW "\x1b[33m"
#define CLEND "\x1b[0m"

void subjectTest()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl; // Returns a reference to the top element in the stack.
    mstack.pop(); // Remove top element
    std::cout << mstack.size() << std::endl; // Size is one now;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737); //[...] mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
}

void test()
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737); //[...] mstack.push(0);
    MutantStack<int> mstack1 = mstack;
    MutantStack<int>::const_iterator it = mstack.begin();
    MutantStack<int>::const_iterator it1 = mstack.end();
    for (; it != it1; it++)
        std::cout << *it << std::endl;
    //Mutantstack<int>::iterator ite = mstack.end();
    //it += 1;
    // *ite += 1;
    // while (it != ite)
    // {
    //     std::cout << *it << std::endl;
    //     ++it;
    // }
    // std::stack<int> s(mstack);
}

int main()
{
    std::cout << std::endl
              << CLGREEN << "******SUBJECT TEST******" << CLEND << std::endl
              << std::endl;
    subjectTest();
    std::cout << std::endl
              << CLGREEN << "******SIMPLE TEST******" << CLEND << std::endl
              << std::endl;
    test();
    std::cout << std::endl
              << CLGREEN << "******COPY CONSTRUCTOR TEST******" << CLEND << std::endl
              << std::endl;
    //copyConstructorTest();
    return 0;
}