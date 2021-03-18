/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 15:22:54 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/18 16:53:11 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <stack>
#include <vector>


// Test-related stuff below

// Needed to automatically fail tests;
#include <assert.h>

// #include <string.h>
#include <cstring>

bool exception_thrown = false;

void check(int expression);


int test_no = 1;

void out(std::string s)
{
	std::cout << std::endl;
	std::cout << "\033[0;34m" << "Test " << test_no << " | " << s << "\033[0m" << std::endl;
	test_no += 1;
}

void check(int expression)
{
	// If expression doesn't evaluate to 1, the program will abort
	assert(expression == 1);
	std::cout << "\033[92m✓ PASS\033[0m" << std::endl;
}

// Test-related stuff ends

int main(void)
{
	out("Easyfind | vector<int>, successful find");
	std::vector<int> a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	check(easyfind(a, 2) == 2);

	out("Easyfind | vector<int>, unsuccessful find");
	std::vector<int> a1;
	a1.push_back(1);
	a1.push_back(2);
	a1.push_back(3);
	a1.push_back(4);

	out("Easyfind | deque<int>, successful find");
	std::deque<int> b;
	b.push_back(1);
	b.push_back(2);
	b.push_back(3);
	b.push_back(4);
	check(easyfind(b, 2) == 2);

	out("Easyfind | deque<int>, unsuccessful find");
	std::deque<int> b1;
	b1.push_back(1);
	b1.push_back(2);
	b1.push_back(3);
	b1.push_back(4);
}
// int main()
// {
//     std::list<int> lst;

//     lst.push_back(10);
//     lst.push_back(23);
//     lst.push_back(3);
//     lst.push_back(17);
//     lst.push_back(20);
//     easyfind(lst, 3);
//     return 0;
// }