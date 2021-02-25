#ifndef PEON_H
#define PEON_H

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
    private:
        std::string _name;
    public:
        Peon(std::string name);
        Peon(Peon const & src);
        Peon & operator=(Peon const & rhs);
        std::string getName(void);
        virtual void getPolymorphed() const;
        ~Peon(void);
};

//std::ostream & operator<<(std::ostream & o, Peon const & rhs);
#endif