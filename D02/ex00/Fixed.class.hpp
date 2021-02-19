/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 19:43:44 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/19 19:43:47 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

#include <iostream>

class Fixed
{
private:
    int _n;
    static const int _bit = 8;
public:
    Fixed(void);
    ~Fixed();
    Fixed(Fixed const & src);
    Fixed & operator=(Fixed const & src);
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif