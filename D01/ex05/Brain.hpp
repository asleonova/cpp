/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 13:09:37 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/15 15:53:30 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>

class Brain
{
private:
    int _iq;
    int _size;
public:
    Brain(void);
    ~Brain();
    std::string identify(void) const;
    int getIq(void) const;
    int getSize(void) const;
    void setIq(int iq);
    void setSize(int size);
};



#endif