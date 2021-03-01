#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) :
    _name(name),
    _apcost(apcost),
    _damage(damage)
{

}

AWeapon::AWeapon(AWeapon const & src)
{
    *this = src;
}

AWeapon & AWeapon::operator=(AWeapon const & rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_damage = rhs._damage;
        this->_apcost = rhs._apcost;
    }
    return (*this);
}

AWeapon::~AWeapon()
{

}

std::string AWeapon::getName() const
{
    return this->_name;
}

int AWeapon::getAPCost() const
{
    return this->_apcost;
}

int AWeapon::getDamage() const
{
    return this->_damage;
}