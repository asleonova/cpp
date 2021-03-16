/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 20:24:27 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/16 20:41:15 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
class Array
{
    public:
        
        Array<T>()
        {
            //create an empty array
        }
        Array<T>(unsigned int n) : n(_n)
        {
            
        }
        ~Array<T>(void)
        {

        }
        Array<T>(Array<T> const & src)
        {

        }
        Array<T> & operator=(Array<T> const & rhs)
        {
            
        }
        
    private:
        unsigned int _n;

};