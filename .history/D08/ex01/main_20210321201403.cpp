/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 19:07:33 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/21 20:14:03 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
    Span sp = Span(14);
    Span sp1(2);
    std::vector<int> v;
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

// #include "span.hpp"

// int main(void)
// {
//     Span stor(100004);
//     // Shortest should be 0
//     // Longest should be 0
//     try
//     {
//         std::cout << "Shortest span : " << stor.shortestSpan() << std::endl;
//         std::cout << "Longest span : " << stor.longestSpan() << std::endl; /* code */
//     }
//     catch (const std::exception &e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     try
//     {
//         for (int i = 1; i <= 10; i++)
//             stor.addNumber(i);
//     }
//     catch (const std::exception &e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     // Shortest should be 1
//     // Longest should be 9
//     try
//     {
//         std::cout << "Shortest span : " << stor.shortestSpan() << std::endl;
//         std::cout << "Longest span : " << stor.longestSpan() << std::endl;
//     }
//     catch (const std::exception &e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     try
//     {

//         stor.addNumber(11, 100000);
//     }
//     catch (const std::exception &e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     // Shortest should be 1
//     // Longest should be 99999

//     try
//     {
//         std::cout << "Shortest span : " << stor.shortestSpan() << std::endl;
//         std::cout << "Longest span : " << stor.longestSpan() << std::endl;
//     }
//     catch (const std::exception &e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     try
//     {

//         stor.addNumber(45673);

//         stor.addNumber(-100000);
//     }
//     catch (const std::exception &e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     // Shortest should be 0
//     // Longest should be 200000

//     std::cout << "Shortest span : " << stor.shortestSpan() << std::endl;
//     std::cout << "Longest span : " << stor.longestSpan() << std::endl;

//     try
//     {
//         stor.addNumber(100);
//     }
//     catch (std::exception &e)
//     {
//         std::cout << "Exception : " << e.what() << std::endl;
//     }

//     return (0);
// }