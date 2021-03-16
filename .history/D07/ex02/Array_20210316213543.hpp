/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 20:24:27 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/16 21:35:43 by dbliss           ###   ########.fr       */
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
            for (int i = 0; i < this->_n; i++)
                this->_arr[i] = i;
        }
        ~Array<T>(void) 
        {

        }       
        Array<T>(Array const & src)
        {
            if (*this != src)
            {
                delete [] this->_arr;
                this->_arr = new T[src._n];
                this->_n = src._n;
                for (int i = 0; i < this->_n; i++)
                    this->_arr[i] = src._arr[i];
            }
        }
       Array & operator=(Array const & rhs);
       T & operator[](unsigned int index);
        
    private:
        unsigned int _n;
        T *_arr;
};