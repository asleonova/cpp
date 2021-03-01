/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 21:02:24 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/20 21:47:59 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include <time.h>

NinjaTrap::NinjaTrap(std::string name)
{
    this->type = "Ninja";
    this->_hitPoints = 60;
    this->_maxHitPoints = 60;
    this->_energyPoints = 120;
    this->_maxEnergyPoints = 120;
    this->_level = 1;
    this->_name = name; 
    this->_meAttackDamage = 60;
    this->_raAttackDamage = 5;
    this->_armorDamageReduction = 0;
    std::cout << "NinjaTrap constructor called" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src)
{
    std::cout << "NinjaTrap copy constructor called" << std::endl;
    *this = src;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & rhs)
{
    std::cout << "NinjaTrap assignation operator called" << std::endl;
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

NinjaTrap:: ~NinjaTrap()
{
    std::cout << "NinjaTrap destructor called" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap & target)
{
    srand(time(0));
    std::string specialAttack[10] = {
        "bananas!",
        "apples!",
        "cheese!",
        "cucumbers!",
        "pineapples!",
        "chilli!",
        "potato!",
        "durian!",
        "vodka!",
        "croissant!"
    };
    int damage[5] = {
        5,
        10,
        20,
        30,
        40
    };
    int i = rand() % 10;
    int j = rand() % 5;
    std::cout << "\x1b[1;36m" << this->type << " " << this->_name << "\x1b[0m attacks \x1b[4;35mFragTrap " << target.getName() << "\x1b[0m with a special random shoebox attack called: " 
    << specialAttack[i] << " causing\x1b[1;33m " << damage[j] << "\x1b[0m points of damage" << std::endl;  
    target.takeDamage(damage[j]);
}

void NinjaTrap::ninjaShoebox(ScavTrap & target)
{
    srand(time(0));
    std::string specialAttack[10] = {
        "bananas!",
        "apples!",
        "cheese!",
        "cucumbers!",
        "pineapples!",
        "chilli!",
        "potato!",
        "durian!",
        "vodka!",
        "croissant!"
    };
    int damage[5] = {
        5,
        10,
        20,
        30,
        40
    };
    int i = rand() % 10;
    int j = rand() % 5;
    std::cout << "\x1b[1;36mNinja " << this->_name << "\x1b[0m attacks \x1b[4;35mScavTrap " << target.getName() << "\x1b[0m with a special random shoebox attack called: " 
    << specialAttack[i] << " causing\x1b[1;33m " << damage[j] << "\x1b[0m points of damage" << std::endl;  
    target.takeDamage(damage[j]);
}

void NinjaTrap::ninjaShoebox(NinjaTrap & target)
{
    srand(time(0));
    std::string specialAttack[10] = {
        "bananas!",
        "apples!",
        "cheese!",
        "cucumbers!",
        "pineapples!",
        "chilli!",
        "potato!",
        "durian!",
        "vodka!",
        "croissant!"
    };
    int damage[5] = {
        5,
        10,
        20,
        30,
        40
    };
    int i = rand() % 10;
    int j = rand() % 5;
    std::cout << "\x1b[1;36mNinja " << this->_name << "\x1b[0m attacks \x1b[4;35mNinjaTrap " << target.getName() << "\x1b[0m with a special random shoebox attack called: " 
    << specialAttack[i] << " causing\x1b[1;33m " << damage[j] << "\x1b[0m points of damage" << std::endl; 
    target.takeDamage(damage[j]); 
}