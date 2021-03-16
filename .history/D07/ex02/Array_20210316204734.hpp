/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 20:24:27 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/16 20:47:34 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

template <typename T>
class Array
{
    public:
        
        Array();
        Array(unsigned int n);
        ~Array(void)
        {

        }
        Array(Array const & src)
        {

        }
        Array & operator=(Array const & rhs)
        {
            
        }
        T & operator[](insigned int index);
        
    private:
        unsigned int _n;
        T *_arr;

};