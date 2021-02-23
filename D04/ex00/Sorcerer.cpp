#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
    this->_name = name;
    this->_title = title;

    std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl; 
}

Sorcerer::Sorcerer(Sorcerer const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Sorcerer & Sorcerer::operator=(Sorcerer const & rhs)
{
    this->_name = rhs._name;
    this->_title = rhs._title;
    return (*this);
}

Sorcerer::~Sorcerer()
{
    std::cout << this->_name << ", " << this->_title << " is dead. Consequences will never be the same!" << std::endl;
}

std::string Sorcerer::getName() const
{
    return (this->_name);
}

std::string Sorcerer::getTitle() const
{
    return (this->_title);
}

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs)
{
    o << "I am " << rhs.getName();
    o << ", " << rhs.getTitle() << ", and I like ponies!";
    o << std::endl;
    return o;
}