#include "Pony.hpp"

Pony::Pony()
{
    this->_breed = "test";
    this->_color = "test";
    this->_sex = "test";
}

Pony::Pony(std::string breed, std::string color, std::string sex)
{
    std::cout << "Pony " << this->_breed << "is born " << std::endl; 
    this->_breed = breed;
    this->_color = color;
    this->_sex = sex;
}

Pony::~Pony()
{
    std::cout << "Pony " << this->_breed << "died " << std::endl;
}

