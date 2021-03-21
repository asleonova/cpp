/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 15:22:54 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/21 20:39:03 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>
#include <deque>

int main(void)
{
	std::cout << "Easyfind | vector<int>, successful find" << std::endl;
	std::vector<int> a;
	for (int i = 0; i < 10; i++)
		a.push_back(i);
	std::cout << "Element found, here it's value: " << easyfind(a, 1) << std::endl;

    std::cout << "Easyfind | list<int>, successful find" << std::endl;
	std::list<int> b;
	for (int i = 0; i < 10; i++)
		b.push_back(i);
	std::cout << easyfind(b, 2) << std::endl;

    std::cout << "Easyfind | deque<int>, successful find" << std::endl;
	std::deque<int> c;
	for (int i = 0; i < 10; i++)
		c.push_back(i);
	std::cout << easyfind(c, 3) << std::endl;

    return 0;
}
