/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 14:59:12 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/18 15:25:17 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <iterator>

template<typename T>
T* easyFind(T cInt, int i)
{
    typename T::iterator it;
    it = find (cInt.begin(), cInt.end(), i);
    if (it != cInt.end())
    {
        std::cout << "Element found!" << std::endl;
        return (*it);
    }
    std::cout << "Element not found!!!" << std::endl;
    return (nullptr);
}