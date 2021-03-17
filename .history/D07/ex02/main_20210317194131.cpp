/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 20:24:30 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/17 19:41:31 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#include <unistd.h>

// int main()
// {
//     Array<int> a1;
//     Array<int> a2(5);
//     Array<int> a3(a2);
//     Array<int> a4 = a2;
//     std::cout << "A1: " << a1 << std::endl;
//     std::cout << "A4: " << a4 << std::endl;
//      Array<float> a5(6);
//      std::cout << "A5: " << a5 << std::endl;    

//     sleep(50);
//     return 0; 
// }

int	main(void)
{
	Array<int>	arr(5);

	arr[0];
    try
    {
        arr[-5];
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
	// std::cout << "A :"<< std::endl;
	// std::cout << arr << std::endl;

	// Array<int>	brr(5);

	// std::cout << "B (empty) :"<< std::endl;
    // std::cout << brr << std::endl;
	// std::cout << "B (A assignment) :" << std::endl;
	// brr = arr;
	// std::cout << brr << std::endl;

	// Array<int>	crr(arr);

	// std::cout << "C (A copy): " << std::endl;
	// std::cout << crr << std::endl;

	// std::cout << "A (unchanged when B / C changed):" << std::endl;
	// brr[1] = -1;
	// crr[3] = 5;
	// std::cout << crr << std::endl;

	// Array<int>	drr(7);

	// std::cout << "D (copy of A, different size): " << std::endl;
	// drr = arr;
	// std::cout << drr << std::endl;

	// Array<std::string>	err(3);

	// err[1] = "hello";
	// err[2] = "world";

	// std::cout << "E (string array) :"<< std::endl;
	// std::cout << err << std::endl;

	// std::cout << "(Commented) A<int> = E<string> (does not compile): " << std::endl;
	// arr = err;

	return (0);
}