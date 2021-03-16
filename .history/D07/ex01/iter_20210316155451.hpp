/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 15:23:44 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/16 15:54:51 by dbliss           ###   ########.fr       */
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