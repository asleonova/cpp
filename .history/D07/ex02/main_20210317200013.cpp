/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 20:24:30 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/17 20:00:13 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <unistd.h>

# define CLRED "\x1b[31m"
# define CLGREEN "\x1b[32m"
# define CLBLUE "\x1b[34m"
# define CLEND "\x1b[0m"
# define CLYELLOW "\x1b[33m

int	main(void)
{
	std::cout << "/* ******************************************** */" << std::endl;
	std::cout << CLBLUE << "Test 1: testing the default constructor:" << CLEND << std::endl;
	Array<int>	arr1;
	std::cout << "array created!" << std::endl;
	std::cout << arr1 << std::endl;
	std::cout << "/* ******************************************** */" << std::endl;
	std::cout << CLBLUE << "Test 2: creating int array with the size of 5:" << CLEND << std::endl;
	Array<int> arr2(5);
	std::cout << "array created!" << std::endl;
	std::cout << arr2 << std::endl;
	std::cout << "/* ******************************************** */" << std::endl;
	std::cout << CLBLUE << "Test 3: creating a copy of the previous array:" << CLEND << std::endl;
	Array<int> arr3(arr2);
	std::cout << "array copy with the size of 5 created!" << std::endl;
	std::cout << arr3 << std::endl;
	std::cout << "/* ******************************************** */" << std::endl;
	std::cout << CLBLUE << "Test 4: testing the assignment operator:" << CLEND << std::endl;
	Array<int> arr4;	
	arr4 = arr2;
	std::cout <<  
	std::cout << "/* ******************************************** */" << std::endl;
	std::cout << "/* ******************************************** */" << std::endl;
	std::cout << "/* ******************************************** */" << std::endl;
	std::cout << "/* ******************************************** */" << std::endl;
	std::cout << "/* ******************************************** */" << std::endl;
	std::cout << "/* ******************************************** */" << std::endl;
	std::cout << "/* ******************************************** */" << std::endl;
	std::cout << "/* ******************************************** */" << std::endl;
	std::cout << "/* ******************************************** */" << std::endl;
	std::cout << "/* ******************************************** */" << std::endl;
	std::cout << "/* ******************************************** */" << std::endl;
	std::cout << "/* ******************************************** */" << std::endl;
	std::cout << "/* ******************************************** */" << std::endl;
	std::cout << "/* ******************************************** */" << std::endl;
	std::cout << "/* ******************************************** */" << std::endl;
	std::cout << "/* ******************************************** */" << std::endl;
	std::cout << "/* ******************************************** */" << std::endl;




// std::cout << arr.size() << std::endl;
// std::cout << arr << std::endl;
//     try
//     {
// 		std::cout << arr[1] << std::endl;
//        // arr[-5];
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
    
    
	std::cout << "A :"<< std::endl;
	std::cout << arr << std::endl;

	Array<int>	brr(5);

	std::cout << "B (empty) :"<< std::endl;
    std::cout << brr << std::endl;
	std::cout << "B (A assignment) :" << std::endl;
	brr = arr;
	std::cout << brr << std::endl;

	Array<int>	crr(arr);

	std::cout << "C (A copy): " << std::endl;
	std::cout << crr << std::endl;

	std::cout << "A (unchanged when B / C changed):" << std::endl;
	brr[1] = -1;
	crr[3] = 5;
	std::cout << crr << std::endl;

	Array<int>	drr(7);

	std::cout << "D (copy of A, different size): " << std::endl;
	drr = arr;
	std::cout << drr << std::endl;

	Array<std::string>	err(3);

	err[1] = "hello";
	err[2] = "world";

	std::cout << "E (string array) :"<< std::endl;
	std::cout << err << std::endl;

//	std::cout << "(Commented) A<int> = E<string> (does not compile): " << std::endl;
//	arr = err;

	return (0);
}