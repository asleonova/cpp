/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 19:43:32 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/19 19:43:34 by dbliss           ###   ########.fr       */
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
    Fixed(const int n);
    Fixed(const float n);
    ~Fixed();
    Fixed(Fixed const & src);
    Fixed & operator=(Fixed const & src);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;

};

std::ostream & operator<<(std::ostream & o, Fixed const & src);

#endif