/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 18:22:48 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/15 19:29:42 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon
{
private:
    std::string _type;
public:
    // Weapon(std::string const& type); 
    Weapon(void);
    Weapon(std::string type);
    const std::string& getType (void) const;
    void setType(std::string type);
    ~Weapon(void);
};

#endif
