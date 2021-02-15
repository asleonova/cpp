/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 13:09:46 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/15 16:08:33 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

#include "Brain.hpp"

class Human
{
private:
    const Brain _brain;
public:
    
    Human();
    std::string identify();
    const Brain &getBrain(void) const;
    ~Human();
};



#endif