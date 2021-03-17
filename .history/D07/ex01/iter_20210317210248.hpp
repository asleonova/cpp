/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 15:23:44 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/17 21:02:48 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void iter(T *array, size_t len, void(*func)(T const & element))
{
    for (size_t i = 0; i < len; i++)
    {
        func(array[i]);
    }
}

template<typename T>
void print(T const & x) { std::cout << x << std::endl; return ; }

template<typename T>
void multiplyByItself(T const & x)
{
    x *= x;
    std::cout << x << std::endl;
}