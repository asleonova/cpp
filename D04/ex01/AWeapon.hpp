#ifndef A_WEAPON_H
#define A_WEAPON_H

#include <iostream>

class AWeapon
{
    private:
        std::string _name;
        int _apcost;
        int _damage;
        AWeapon() {}
        
    public:
        AWeapon(std::string const & name, int apcost, int damage);
        AWeapon(AWeapon const & src);
        AWeapon & operator=(AWeapon const & rhs);
        virtual ~AWeapon();
        
        std::string getName() const;
        int getAPCost() const;
        int getDamage() const;
        virtual void attack() const = 0;
};

#endif