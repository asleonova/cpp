/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 19:07:33 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/22 13:14:57 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

void SubjectTest()
{
    
}

int main()
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
    std::cout << sp1.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

   sp.addNumber(v.begin(), v.end());
   //std::cout << sp1.shortestSpan() << std::endl;
   std::cout << sp.shortestSpan() << std::endl;
   std::cout << sp.longestSpan() << std::endl;
    return 0;
}