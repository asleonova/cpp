/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 14:59:12 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/18 15:40:39 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

template<typename T>
int easyfind(T cInt, int i)
{
    typename T::iterator it;
    it = std::find (cInt.begin(), cInt.end(), i);
    if (it == cInt.end())
    {
        std::cout << "Element found, here it's value" << *it << std::endl;
        return (*it);
    }
    std::cout << "Element not found!!!" << std::endl;
    return (-1);
}