/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 20:24:27 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/16 20:43:35 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
class Array
{
    public:
        
        Array()
        {
            //create an empty array
        }
        Array(unsigned int n) : n(_n)
        {
            
        }
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

};