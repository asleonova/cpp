/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 19:07:33 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/23 12:12:11 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

#define CLRED "\x1b[31m"
#define CLGREEN "\x1b[32m"
#define CLYELLOW "\x1b[33m"
#define CLEND "\x1b[0m"

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
    std::cout << CLYELLOW << "Creating span with capacity of 10" << CLEND << std::endl;
    Span sp(10);
    std::cout << "Trying to find shortest span when we have no numbers added - should throw an exception" << std::endl;
    try
    {
        sp.shortestSpan();
    }
    catch (const std::exception &e)
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
    catch (const std::exception &e)
    {
        std::cerr << CLRED << e.what() << CLEND << '\n';
    }
    std::cout << "Adding more numbers to out span: " << std::endl;
    srand(time(NULL));
    for (int i = 1; i < 10; i++)
        sp.addNumber(rand() % 100);
    std::cout << "Our span contents: " << std::endl;
    std::cout << sp << std::endl;
    std::cout << CLYELLOW << "Finding shortest and longest span: " << CLEND << std::endl;
    std::cout << "Sp shortest span: " << sp.shortestSpan() << std::endl;
    std::cout << "Sp longest span: " << sp.longestSpan() << std::endl;
}

void copyConstructorTest()
{
    std::cout << CLYELLOW << "Creating span with capacity of 10" << CLEND << std::endl;
    Span sp(10);
    std::cout << CLYELLOW << "Adding 10 random numbers to out span: " << CLEND << std::endl;
    srand(time(NULL));
    for (int i = 1; i < 10; i++)
        sp.addNumber(rand() % 100);
    std::cout << "Our span contents: " << std::endl;
    std::cout << sp << std::endl;

    std::cout << CLYELLOW << "Creating a copy of the span " << CLEND << std::endl;
    Span spCopy(sp);
    std::cout << "Span copy contents: " << std::endl;
    std::cout << spCopy << std::endl;

    std::cout << CLYELLOW << "Creating one more span with 0 capacity: " << CLEND << std::endl;
    Span spNew(0);
    std::cout << "SpanNew contents: " << std::endl;
    std::cout << spNew << std::endl;
    std::cout << CLYELLOW << "Assigning SpanNew to our first span: " << CLEND << std::endl;
    spNew = sp;
    std::cout << "SpanNew contents after assignantion: " << std::endl;
    std::cout << spNew << std::endl;
}

void bigRangeTest()
{
    std::cout << CLYELLOW << "Creating a span with 100.000 capacity" << CLEND << std::endl;
    Span sp = Span(100000);
    std::cout << CLYELLOW << "Creating a vector with 100.000 nums" << CLEND << std::endl;
    std::vector<int> v;
    for (int i = 0; i < 100000; i++)
        v.push_back(rand() % 1000000);
    std::cout << CLYELLOW << "Adding this range we've just created to our span ... " << CLEND << std::endl;
    sp.addNumber(v.begin(), v.end());
    std::cout << CLYELLOW << "Finding shortest and longest span in the span: " << CLEND << std::endl;
    std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest span: " << sp.longestSpan() << std::endl;
}

int main()
{
    std::cout << std::endl << CLGREEN << "******SUBJECT TEST******" << CLEND << std::endl;
    subjectTest();
    std::cout << std::endl <<  CLGREEN << "******SIMPLE TEST******" << CLEND << std::endl;
    simpleTest();
    std::cout << std::endl <<CLGREEN << "******COPY CONSTRUCTOR TEST******" << CLEND << std::endl;
    copyConstructorTest();
    std::cout << std::endl << CLGREEN << "******BIG RANGE TEST******" << CLEND << std::endl;
    bigRangeTest();
    return 0;
}