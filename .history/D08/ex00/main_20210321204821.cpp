/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 15:22:54 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/21 20:48:21 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>
#include <deque>

int main(void)
{
	std::cout << "easyfind(1) of vector<int> in the range of 0 to 9" << std::endl;
	std::vector<int> a;
	for (int i = 0; i < 10; i++)
		a.push_back(i);
	std::cout << CLGREEN << "Element found, here it's value: " << CLEND << easyfind(a, 1) << std::endl;
	std::cout << "easyfind(10) of vector<int> in the range of 0 to 9" << std::endl;
	std::cout << easyfind(a, 10) << std::endl;

    std::cout << "easyfind(2) of list<int>, in the range of 0 to 9" << std::endl;
	std::list<int> b;
	for (int i = 0; i < 10; i++)
		b.push_back(i);
	std::cout << CLGREEN << "Element found, here it's value: " << CLEND << easyfind(b, 2) << std::endl;
    std::cout << "easyfind(11) of list<int>, in the range of 0 to 9" << std::endl;
	std::cout << easyfind(b, 11) << std::endl;

    std::cout << "easyfind(3) of deque<int>, in the range of 0 to 9" << std::endl;
	std::deque<int> c;
	for (int i = 0; i < 10; i++)
		c.push_back(i);
	std::cout << CLGREEN << "Element found, here it's value: " << CLEND << easyfind(c, 3) << std::endl;
    std::cout << "easyfind(12) of deque<int>, in the range of 0 to 9" << std::endl;
	std::cout << easyfind(c, 12) << std::endl;
	
    return 0;
}
