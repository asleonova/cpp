/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 20:24:27 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/16 21:14:14 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
class Array
{
    public:
        
        Array<T>(): _n(0), _arr(NULL) {}
        Array<T>(unsigned int n): _n(n)
        {
            this->_arr = new T[_n];
        }
        ~Array<T>(void) 
        {

        }       
        Array(Array const & src)
        {
            
        }
       // Array & operator=(Array const & rhs);
       // T & operator[](unsigned int index);
        
    private:
        unsigned int _n;
        T *_arr;
};