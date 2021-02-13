/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 16:44:53 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/13 16:45:07 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

#include <iostream>

class Pony 
{
    private:
        std::string _breed;
        std::string _color;
        std::string _sex;
    public:
        Pony(void);
        Pony(std::string breed, std::string color, std::string sex);
        ~Pony(void);
};

#endif