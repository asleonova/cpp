#ifndef VICTIM_H
#define VICTIM_H

#include <iostream>

class Victim
{
    private:
        std::string _name;
    public:
        Victim(std::string name);
        Victim(Victim const & src);
        Victim & operator=(Victim const & rhs);
        ~Victim(void);

        std::string getName(void) const;
        virtual void getPolymorphed() const;
};

std::ostream & operator<<(std::ostream & o, Victim const & rhs);

#endif