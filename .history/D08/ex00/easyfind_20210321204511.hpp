/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 14:59:12 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/21 20:45:11 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <iterator>

# define CLRED "\x1b[31m"
# define CLGREEN "\x1b[32m"
# define CLEND "\x1b[0m"

template<typename T>
int easyfind(T cInt, int i)
{
    typename T::iterator it;
    it = std::find (cInt.begin(), cInt.end(), i);
    if (it != cInt.end())
    {
        return (*it);
    }
    std::cout << CLRED << "Element not found!!!" << CLEND << std::endl;
    return (-1);
}