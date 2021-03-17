/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 20:24:30 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/17 20:16:01 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <unistd.h>

#define CLRED "\x1b[31m"
#define CLGREEN "\x1b[32m"
#define CLBLUE "\x1b[34m"
#define CLEND "\x1b[0m"
#define CLYELLOW "\x1b[33m"

int main(void)
{
	std::cout << "/* ******************************************** */" << std::endl;
	std::cout << CLBLUE << "Test 1: testing the default constructor:" << CLEND << std::endl;
	Array<int> arr1;
	std::cout << "array created!" << std::endl;
	std::cout << "arr1: " << arr1 << std::endl;
	std::cout << "/* ******************************************** */" << std::endl;
	std::cout << CLBLUE << "Test 2: access the element of an array (should throw exception cause the array is empty):" << CLEND << std::endl;
	try
	{
		arr1[0];
	}
	catch (const std::exception &e)
	{
		std::cerr << CLRED << e.what() << CLEND << '\n';
	};
	std::cout << "/* ******************************************** */" << std::endl;
	std::cout << CLBLUE << "Test 3: creating int array with the size of 5:" << CLEND << std::endl;
	Array<int> arr2(5);
	std::cout << "array created!" << std::endl;
	std::cout << "arr2: " << arr2 << std::endl;
	std::cout << "/* ******************************************** */" << std::endl;
	std::cout << CLBLUE << "Test 4: creating a copy of the previous array:" << CLEND << std::endl;
	Array<int> arr3(arr2);
	std::cout << "array copy with the size of 5 created!" << std::endl;
	std::cout << "arr3: " << arr3 << std::endl;
	std::cout << "/* ******************************************** */" << std::endl;
	std::cout << CLBLUE << "Test 5: testing the assignment operator:" << CLEND << std::endl;
	Array<int> arr4;
	arr4 = arr2;
	std::cout << "arr4: " << arr4 << std::endl;
	std::cout << "/* ******************************************** */" << std::endl;
	std::cout << CLBLUE << "Test 6: changing the values of an element of an array (valid index):" << CLEND << std::endl;
	std::cout << "arr3[0] before changing: " << arr3[0] << std::endl;
	arr3[0] = 10;
	std::cout << "arr3[0] after changing: " << arr3[0] << std::endl;
	std::cout << "all array after changing: " << arr3 << std::endl;
	std::cout << "/* ******************************************** */" << std::endl;
	std::cout << CLBLUE << "arr2 and arr4 should stay unchanged :" << CLEND << std::endl;
	std::cout << arr2 << std::endl;
	std::cout << arr4 << std::endl;
	std::cout << "/* ******************************************** */" << std::endl;
	std::cout << CLBLUE << "Test 8: changing the values of an element of an array (invalid index [6]):" << CLEND << std::endl;
	try
	{
		arr4[6] = 4;
	}
	catch (const std::exception &e)
	{
		std::cerr << CLRED << e.what() << CLEND << '\n';
	}
	std::cout << CLBLUE << "Test 9: access the element of an array (invalid index [-1]):" << CLEND << std::endl;
	try
	{
		arr4[-1];
	}
	catch (const std::exception &e)
	{
		std::cerr << CLRED << e.what() << CLEND << '\n';
	}
	std::cout << CLYELLOW << "/* ******************************************** */" << std::endl;
	std::cout << "/* ******************************************** */" << CLEND << std::endl;



	return (0);
}