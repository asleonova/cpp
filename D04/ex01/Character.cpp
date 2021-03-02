/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:18:40 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/02 20:38:41 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : _name(name), _apNumber(40), _weapon(NULL)
{
}

Character::Character(Character const & src)
{
    *this = src;
}

Character & Character::operator=(Character const & rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
    }
    return (*this);
}

Character::~Character()
{

}

std::string Character::getName() const
{
    return this->_name;
}

int Character::getApNumber() const
{
    return this->_apNumber;
}

std::string Character::getWeaponName() const
{
    return this->_weapon->getName();
}

void Character::recoverAP()
{
    this->_apNumber += 10;
    if (this->_apNumber > 40)
        this->_apNumber = 40;
}

void Character::equip(AWeapon *weapon)
{
    this->_weapon = weapon;
}

void Character::attack(Enemy *target)
{
    if (this->_weapon == NULL)
    {
        std::cout << "\x1b[1;31You have no weapon and can't attack, get yourself a weapon first\x1b[0m" << std::endl;
        return ;
    }
    if (this->_apNumber < this->_weapon->getAPCost())
    {
        std::cout << "\x1b[1;31Your AP level is too low to attack\x1b[0m" << std::endl; 
        return ;
    }
    //Substract to the enemy's HP the damage value of the weapon
    // if the target has 0 HP, you must delete it.
    std::cout << this->_name << " attacks " << target->getType() <<
        " with a " << this->_weapon->getName() << std::endl;
    this->_weapon->attack();
    this->_apNumber -= this->_weapon->getAPCost();
    target->takeDamage(this->_weapon->getDamage());
    if (target->getHP() == 0)
    {
        std::cout << "\x1b[1;31mYour target reached 0 hp level, it'll be deleted now\x1b[0m" << std::endl;
        delete(target);
    }
}   

std::string Character::WeaponMessage() const
{
    if (this->_weapon == NULL)
        return ("and is unarmed");
    else 
        return (this->getWeaponName());
}
std::ostream & operator<<(std::ostream & o, Character const & rhs)
{
    o << rhs.getName();
    o << " has ";
    o << rhs.getApNumber();
    o << " AP and wields a ";
    o << rhs.WeaponMessage() << std::endl;
    return o;
}