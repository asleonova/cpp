#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
    this->_name = name;
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const & src) : Victim(src)
{
    std::cout << "Peon Copy constructor called" << std::endl;
    *this = src;
}

Peon & Peon::operator=(Peon const & rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
    }
    return (*this);
}

std::string Peon::getName(void)
{
    return this->_name;
}

void Peon::getPolymorphed() const
{
    std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}

Peon::~Peon(void)
{
    std::cout << "Bleuark..." << std::endl;
}

// std::ostream & operator<<(std::ostream & o, Peon const & rhs)
// {
//     o << rhs.getName();
//     o << std::endl;
//     return o;
// }