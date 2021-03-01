/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 12:56:48 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/01 13:08:50 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <time.h>

FragTrap::FragTrap(std::string name)
{
    this->type = "FR4G-TP";
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_level = 1;
    this->_name = name;
    this->_meAttackDamage = 30;
    this->_raAttackDamage = 20;
    this->_armorDamageReduction = 5;

    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
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