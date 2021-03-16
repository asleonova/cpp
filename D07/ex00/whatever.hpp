/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:04:31 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/16 14:09:58 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void swap(T &x, T &y) {
    T tmp(x);
    tmp = x;
    x = y;
    y = tmp;
}

template<typename T>
T min (T const &x, T const &y) {
    return ((x < y) ? x : y);
}

template<typename T>
T max (T const &x, T const &y) {
    return ((x > y) ? x : y);
}

