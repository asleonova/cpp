/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 13:16:58 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/01 13:23:15 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = src;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
    std::cout << "ClapTrap assignation operator called" << std::endl;
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

ClapTrap:: ~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

std::string ClapTrap::getName(void) const
{
    return this->_name;
}

int ClapTrap::getEnergyPoints(void) const
{
    return this->_energyPoints;
}

void ClapTrap::rangedAttack(std::string const & target)
{
    std::cout << "\x1b[4;35m" << this->type << "\x1b[0m\x1b[1;35m " << this->_name << "\x1b[0m attacks \x1b[1;33m" << target << "\x1b[0m at range, causing \x1b[1;31m" << this->_raAttackDamage << "\x1b[0m points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target)
{
    std::cout << "\x1b[4;35m" << this->type <<"\x1b[0m\x1b[1;35m " << this->_name << "\x1b[0m attacks \x1b[1;33m" << target << "\x1b[0m at range, causing \x1b[1;31m" << this->_meAttackDamage << "\x1b[0m points of damage!" << std::endl; 
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if ((int)amount > this->_armorDamageReduction)
        amount = (int)amount - this->_armorDamageReduction;
    else
        amount = 0;
    if (this->_hitPoints > (int)amount)
        this->_hitPoints -= (int)amount;
    else
        this->_hitPoints = 0;
    std::cout << "\x1b[4;35m" << this->type << "\x1b[0m\x1b[1;35m " << this->_name << "\x1b[0m takes \x1b[1;33m" << amount << "\x1b[0m of damage. Current HP level is:  \x1b[1;31m" << this->_hitPoints << "\x1b[0m" << std::endl; 
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->_hitPoints += amount;
    if (this->_hitPoints > this->_maxHitPoints)
        this->_hitPoints = this->_maxHitPoints;
}

std::ostream & operator<<(std::ostream & o, ClapTrap const & i)
{
    o << i.getEnergyPoints();
    return (o);
}