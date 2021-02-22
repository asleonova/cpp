#include <iostream>

#ifndef INHERITANCE_1_H
#define INHERITANCE_1_H

class Animal
{
    private:
        int _numberOfLegs;
    public:
        Animal();
        Animal(Animal const & src);
        Animal & operator=(Animal const & rhs);
        ~Animal();
        
        void run(int distance);
};

class Cat: public Animal
{
    public:
        Cat();
        Cat(Cat const & src);
        Cat & operator=(Cat const & rhs);
        ~Cat();

        void scornSomeone(std::string const & target);
};

class Pony: public Animal
{
    public: 
        Pony();
        Pony(Pony const & src);
        Pony & operator=(Pony const & rhs);
        ~Pony();

    void doMagic(std::string const & target);
};

#endif