/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 12:45:24 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/01 12:52:34 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <time.h>

FragTrap::FragTrap(std::string name) :
_hitPoints(100),
_maxHitPoints(100),
_energyPoints(100),
_maxEnergyPoints(100),
_level(1),
_name(name), 
_meAttackDamage(30),
_raAttackDamage(20),
_armorDamageReduction(5)
{
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
    *this = src;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
    std::cout << "FragTrap assignation operator called" << std::endl;
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

FragTrap:: ~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

std::string FragTrap::getName(void) const
{
    return this->_name;
}

int FragTrap::getEnergyPoints(void) const
{
    return this->_energyPoints;
}

int FragTrap::getHitPoints(void) const
{
    return this->_hitPoints;
}

void FragTrap::rangedAttack(std::string const & target)
{
    std::cout << "\x1b[4;35mFR4G-TP\x1b[0m\x1b[1;35m " << this->_name << "\x1b[0m attacks \x1b[1;33m" << target << "\x1b[0m at range, causing \x1b[1;31m" << this->_raAttackDamage << "\x1b[0m points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "\x1b[4;35mFR4G-TP\x1b[0m\x1b[1;35m " << this->_name << "\x1b[0m attacks \x1b[1;33m" << target << "\x1b[0m at range, causing \x1b[1;31m" << this->_meAttackDamage << "\x1b[0m points of damage!" << std::endl; 
}

void FragTrap::takeDamage(unsigned int amount)
{
    if ((int)amount > this->_armorDamageReduction)
        amount = (int)amount - this->_armorDamageReduction;
    else
        amount = 0;
    if (this->_hitPoints > (int)amount)
        this->_hitPoints -= (int)amount;
    else
        this->_hitPoints = 0;
    std::cout << "\x1b[4;35mFR4G-TP\x1b[0m\x1b[1;35m " << this->_name << "\x1b[0m takes \x1b[1;33m" << amount << "\x1b[0m of damage. Current HP level is:  \x1b[1;31m" << this->_hitPoints << "\x1b[0m" << std::endl; 
}

void FragTrap::beRepaired(unsigned int amount)
{
    this->_hitPoints += amount;
    if (this->_hitPoints > this->_maxHitPoints)
        this->_hitPoints = this->_maxHitPoints;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    srand(time(0));
    std::string attackType[5] = {
        "Attack with \x1b[1;31m red Pony\x1b[0m",
        "Attack with \x1b[1;32m green Pony\x1b[0m",
        "Attack with \x1b[1;33m yellow Pony\x1b[0m",
        "Attack with \x1b[1;34m blue Pony\x1b[0m",
        "Attack with \x1b[1;35m purple Pony\x1b[0m"
    };
    int i = rand() % 5;
    this->_energyPoints -= 25;
    if (this->_energyPoints < 0)
        std::cout << "\x1b[1;31mYou're out of energy, looooser\x1b[0m" << std::endl;
    else
        std::cout << "You're attacking " << target << " with " << attackType[i] << std::endl;        
}

std::ostream & operator<<(std::ostream & o, FragTrap const & i)
{
    o << i.getEnergyPoints();
    return (o);
}