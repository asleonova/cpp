/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 20:24:27 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/16 21:21:30 by dbliss           ###   ########.fr       */
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
        Array<T>(Array const & src)
        {
            if (*this != src)
            {
                this->_n = src._n;
                this->_arr = src._arr;
            }
        }
       Array & operator=(Array const & rhs);
       T & operator[](unsigned int index);
        
    private:
        unsigned int _n;
        T *_arr;
};