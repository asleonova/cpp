/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 19:07:33 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/21 17:43:45 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "span.hpp"

// int main()
// {
//     Span sp = Span(5);
//     Span sp1(2);
//     sp.addNumber(5);
//     sp.addNumber(3);
//     sp.addNumber(17);
//     sp.addNumber(9);
//     sp.addNumber(11);
//     sp.addNumber(3);
//     try
//     {
//           //  std::cout << sp1.shortestSpan() << std::endl;
//     std::cout << sp1.longestSpan() << std::endl;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
    

//     sp1.addNumber(4);
//   //  std::cout << sp1.shortestSpan() << std::endl;
//    std::cout << sp.shortestSpan() << std::endl;
//    std::cout << sp.longestSpan() << std::endl;
//     return 0;
// }

#include "span.hpp"

int	main(void)
{
	Storage		stor(100004);
	// Shortest should be 0
	// Longest should be 0

	std::cout << "Shortest span : " << stor.shortestSpan() << std::endl;
	std::cout << "Longest span : " << stor.longestSpan() << std::endl;

	for (int i = 1 ; i <= 10 ; i++)
		stor.addNumber(i);
	// Shortest should be 1
	// Longest should be 9

	std::cout << "Shortest span : " << stor.shortestSpan() << std::endl;
	std::cout << "Longest span : " << stor.longestSpan() << std::endl;

	stor.addNumbers(11, 100000);
	// Shortest should be 1
	// Longest should be 99999

	std::cout << "Shortest span : " << stor.shortestSpan() << std::endl;
	std::cout << "Longest span : " << stor.longestSpan() << std::endl;

	stor.addNumber(45673);
	// Shortest should be 0
	stor.addNumber(-100000);
	// Longest should be 200000

	std::cout << "Shortest span : " << stor.shortestSpan() << std::endl;
	std::cout << "Longest span : " << stor.longestSpan() << std::endl;

	try
	{
		stor.addNumber(100);
	}
	catch (std::exception & e)
	{
		std::cout << "Exception : " << e.what() << std::endl;
	}

	return (0);
}