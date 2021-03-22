/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 19:07:33 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/22 16:13:50 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

# define CLRED "\x1b[31m"
# define CLGREEN "\x1b[32m"
# define CLYELLOW "\x1b[33m"
# define CLEND "\x1b[0m"


void subjectTest()
{
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

void simpleTest()
{
    std::cout << CLYELLOW <<  "Creating span with capacity of 10" << CLEND << std::endl;
    Span sp(10);
    std::cout << "Trying to find shortest span when we have no numbers added - should throw an exception" << std::endl;
    try
    {
        sp.shortestSpan();
    }
    catch(const std::exception& e)
    {
        std::cerr << CLRED << e.what() << CLEND << '\n';
    }
    std::cout << CLYELLOW << "Adding 1 number to our span" << CLEND << std::endl;
    sp.addNumber(0);
    std::cout << "Trying to find the longest span when we have only one number in the span - should throw an exception" << std::endl;
    try
    {
        sp.longestSpan();
    }
    catch(const std::exception& e)
    {
        std::cerr << CLRED << e.what() << CLEND << '\n';
    }
    std::cout << "Adding more numbers to out span: from 1 to 9" << std::endl;
    for (int i = 1; i < 10; i++)
        sp.addNumber(i);
    std::cout << CLYELLOW << "Finding shortest and longest span: " << CLEND << std::endl;
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    std::cout << CLYELLOW << "Creating a copy of the span and trying to find shortest and longest span there: " << CLEND << std::endl;
    Span sp1(sp);
    std::cout << sp1.shortestSpan() << std::endl;
    std::cout << sp1.longestSpan() << std::endl;
    std::cout << "Creating new span with 0 capacity: " << std::endl;
    Span sp2(0);
    std::cout << CLYELLOW << "Trying to add : ..... "
    try
    {
        sp2.addNumber(0);
    }
    catch(const std::exception& e)
    {
        std::cerr << CLRED << e.what() << CLEND << '\n';
    }
    
    sp2 = sp;
    std::cout << "Sp2 shortest span: " <<  sp2.shortestSpan() << std::endl;
    std::cout << "Sp2 longest span: " << sp2.longestSpan() << std::endl;
    std::cout << "Trying to add more numbers when the capacity is full - should throw an exception" << std::endl;
    try
    {
        sp.addNumber(1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void bigRangeTest()
{
    Span sp = Span(14);
    std::vector<int> v;
    for (int i = 0; i < 14; i++)
        v.push_back(i);

    sp.addNumber(v.begin(), v.end());
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    sp.addNumber(0);
    sp.addNumber(1);
    sp.addNumber(2);
    sp.addNumber(3);
    sp.addNumber(4);
    // sp.addNumber(5);
    try
    {
        //  std::cout << sp1.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    sp.addNumber(v.begin(), v.end());
    //std::cout << sp1.shortestSpan() << std::endl;
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

int main()
{
    std::cout << CLGREEN << "******SUBJECT TEST******" << CLEND << std::endl;
    subjectTest();
    std::cout << CLGREEN << "******SIMPLE TEST******" << CLEND << std::endl;
    simpleTest();
    std::cout << CLGREEN << "******BIG RANGE TEST******" << CLEND << std::endl; 
    //bigRangeTest();
    return 0;

}