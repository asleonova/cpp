/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 20:24:27 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/16 20:37:24 by dbliss           ###   ########.fr       */
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
    private:
        unsigned int _n;

};