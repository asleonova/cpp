#include "inheritance_1.hpp"

Animal::Animal()
{
    std::cout << "Default constructor called" << std::endl;
}

Animal::Animal(Animal const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Animal & Animal::operator=(Animal const & rhs)
{
    std:: cout << "Animal assignation operator called" << std::endl;
    this->_numberOfLegs = rhs._numberOfLegs;
    return (*this);
}

void Animal::run(int distance)
{
    std::cout << "it has run " << distance << std::endl;    
}

Animal::~Animal()
{
    std::cout << "Copy destructor called" << std::endl;
}

Cat::Cat()
{
    std::cout << "Default constructor called for Cat" << std::endl;
}

Cat::Cat(Cat const & src)
{
    std::cout << "Copy constructor for cat called" << std::endl;
    *this = src;
}

Cat & Cat::operator=(Cat const & rhs)
{
    return(*this);
}

Cat::~Cat()
{
    std::cout << "Destructor for cat called" << std::endl;
}

void Cat::scornSomeone(std::string const & target)
{
    std::cout << "Cat scorns its target: " << target << std::endl;
}

Pony::Pony()
{
    std::cout << "Default constructor called for Pony" << std::endl;
}

Pony::Pony(Pony const & src)
{
    std::cout << "Copy constructor for pony called" << std::endl;
    *this = src;
}

Pony & Pony::operator=(Pony const & rhs)
{
    return(*this);
}

Pony::~Pony()
{
    std::cout << "Destructor for pony called" << std::endl;
}

void Pony::doMagic(std::string const & target)
{
    std::cout << "Pony does magic for: " << target << std::endl;
}
