/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 21:02:24 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/20 21:47:59 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include <time.h>

SuperTrap::SuperTrap(std::string name) : FragTrap(name), NinjaTrap(name)
{
    this->_hitPoints = FragTrap::_hitPoints;
    this->_maxHitPoints = FragTrap::_maxHitPoints;
    this->_energyPoints = NinjaTrap::_energyPoints;
    this->_maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
    this->_level = 1;
    this->_name = name; 
    this->_meAttackDamage = NinjaTrap::_meAttackDamage;
    this->_raAttackDamage = FragTrap::_raAttackDamage;
    this->_armorDamageReduction = FragTrap::_armorDamageReduction;
    std::cout << "SuperTrap constructor called" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const & src) : FragTrap(_name), NinjaTrap(_name)
{
    std::cout << "SuperTrap copy constructor called" << std::endl;
    *this = src;
}

SuperTrap & SuperTrap::operator=(SuperTrap const & rhs)
{
    std::cout << "SuperTrap assignation operator called" << std::endl;
    if (this != & rhs)
    {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_maxEnergyPoints = rhs._maxEnergyPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_maxEnergyPoints = rhs._maxEnergyPoints;
        this->_level = rhs._level;
        this->_meAttackDamage = rhs._meAttackDamage;
        this->_raAttackDamage = rhs._meAttackDamage; 
        this->_armorDamageReduction = rhs._armorDamageReduction;
    }
    return (*this);
}

SuperTrap:: ~SuperTrap()
{
    std::cout << "SuperTrap destructor called" << std::endl;
}

void SuperTrap::rangedAttack(std::string const & target)
{
    FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const & target)
{
    NinjaTrap::rangedAttack(target);
}