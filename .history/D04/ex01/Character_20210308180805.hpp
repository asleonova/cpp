/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:18:44 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/08 18:08:04 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

#include <iostream>
#include "Enemy.hpp"
#include "AWeapon.hpp"

class Character
{
    private:
        std::string _name;
        int _apNumber;
        AWeapon *_weapon;
        Character() {}
        
    public:
        Character(std::string const & name);
        Character(Character const & src);
        Character & operator=(Character const & rhs);
        ~Character();
        
        void recoverAP();
        void equip(AWeapon *weapon);
        void attack(Enemy *target);
        std::string getName() const;
        int getApNumber() const;
        std::string getWeaponName() const;
        std::string WeaponMessage() const;
};

std::ostream & operator<<(std::ostream & o, Character const & rhs);

#endif