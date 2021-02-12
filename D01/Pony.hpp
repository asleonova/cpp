
#ifndef PONY_H
# define PONY_H

#include <iostream>

class Pony 
{
    private:
        std::string _breed;
        std::string _color;
        std::string _sex;
    public:
        Pony(void);
        Pony(std::string breed, std::string color, std::string sex);
        ~Pony(void);
};

#endif