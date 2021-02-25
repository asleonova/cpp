#ifndef SORCERER_H
#define SORCERER_H

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
    private:
        std::string _name;
        std::string _title;
    public:
        Sorcerer(std::string name, std::string title);
        Sorcerer(Sorcerer const & src);
        Sorcerer & operator=(Sorcerer const & rhs);
        ~Sorcerer();
        std::string getName() const;
        std::string getTitle() const;
        virtual void polymorph(Victim const & victim) const;
};

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs);

#endif