/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 18:03:44 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/23 13:09:27 by dbliss           ###   ########.fr       */
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
    std::cout << mstack.top() << std::endl;  // Returns a reference to the top element in the stack.
    mstack.pop();                            // Remove top element
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

void constIteratorTest()
{
    MutantStack<int> mstack;
    std::cout << CLYELLOW << "Pushing 10 random numbers to stack ... " << CLEND << std::endl;
    srand(time(NULL));
    for (int i = 1; i < 10; i++)
        mstack.push(rand() % 100);
    MutantStack<int>::const_iterator it = mstack.cbegin();
    MutantStack<int>::const_iterator it1 = mstack.cend();
    std::cout << CLYELLOW << "Showing the contents of the stack through const iterator: " << CLEND << std::endl;
    // This expression is in comment to show that we can't modify const_iterator value as expected.
    // it[0] = 5;
    for (; it != it1; it++)
        std::cout << *it << std::endl;



    std::cout << CLYELLOW << "Creating copy of out stack ..." << CLEND << std::endl;
    MutantStack<int> mstackCopy(mstack);
    MutantStack<int>::const_iterator itC = mstackCopy.cbegin();
    MutantStack<int>::const_iterator itC1 = mstackCopy.cend();
    std::cout << CLYELLOW << "Showing the contents of the stackCopy through const iterator: " << CLEND << std::endl;
    for (; itC != itC1; itC++)
        std::cout << *itC << std::endl;
}

void reverseIteratorTest()
{
    MutantStack<int> mstack;
    std::cout << CLYELLOW << "Pushing 10 random numbers to stack ... " << CLEND << std::endl;
    srand(time(NULL));
    for (int i = 1; i < 10; i++)
        mstack.push(rand() % 100);
    MutantStack<int>::reverse_iterator it = mstack.rbegin();
    MutantStack<int>::reverse_iterator it1 = mstack.rend();
    std::cout << CLYELLOW << "Changing the value of 0 element in our stack : " << CLEND << std::endl;
    it[0] = 5;
    std::cout << "The 0 element of the stack now: " << it[0] << std::endl;
    std::cout << CLYELLOW << "Iterating through our stack: " << CLEND << std::endl;
    for (; it != it1; it++)
        std::cout << *it << std::endl;
}

void constRevIteratorTest()
{
    MutantStack<int> mstack;
    std::cout << CLYELLOW << "Pushing 10 random numbers to stack ... " << CLEND << std::endl;
    srand(time(NULL));
    for (int i = 1; i < 10; i++)
        mstack.push(rand() % 100);
    MutantStack<int>::const_iterator it = mstack.cbegin();
    MutantStack<int>::const_iterator it1 = mstack.cend();
    std::cout << CLYELLOW << "Showing the contents of the stack through const iterator: " << CLEND << std::endl;
    // This expression is in comment to show that we can't modify const_iterator value as expected.
    // it[0] = 5;
    for (; it != it1; it++)
        std::cout << *it << std::endl;



    std::cout << CLYELLOW << "Creating copy of out stack ..." << CLEND << std::endl;
    MutantStack<int> mstackCopy(mstack);
    MutantStack<int>::const_iterator itC = mstackCopy.cbegin();
    MutantStack<int>::const_iterator itC1 = mstackCopy.cend();
    std::cout << CLYELLOW << "Showing the contents of the stackCopy through const iterator: " << CLEND << std::endl;
    for (; itC != itC1; itC++)
        std::cout << *itC << std::endl;
}
int main()
{
    std::cout << std::endl
              << CLGREEN << "******SUBJECT TEST******" << CLEND << std::endl
              << std::endl;
    subjectTest();
    std::cout << std::endl
              << CLGREEN << "******CONST ITERATOR TEST******" << CLEND << std::endl
              << std::endl;
    constIteratorTest();
    std::cout << std::endl
              << CLGREEN << "******REVERSE ITERATOR TEST******" << CLEND << std::endl
              << std::endl;
    reverseIteratorTest();
    //copyConstructorTest();
    return 0;
}