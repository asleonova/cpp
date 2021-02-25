#include <iostream>

class Character
{
    public:
        void sayHello(std::string const & target);
};

class Warrior : public Character
{
    public:
        void sayHello(std::string const & target);
};

class Cat
{
    //[...]
};

void Character::sayHello(std::string const & target)
{
    std::cout << "Hello " << target << " !" << std::endl;
}

void Warrior::sayHello(std::string const & target)
{
    std::cout << "F*** off " << target << ", I don't like you!" << std::endl;
}

int main()
{
    // This is Ok, obviously, Warrior IS a Warrior
    Warrior* a = new Warrior();

    // This is Ok, because Warrior IS a character
    Character* b = new Warrior();

    //This would not be Ok, because character IS NOT a Warrior
    // Although they ARE related, and W IS C, the reverse is untrue
    // Warrior* c = new Character();

    // This would NOT be ok either because Cat IS NOT a Character
    // They are not even related
    // Character* d = new Cat();

    a->sayHello("students");
    b->sayHello("students"); // здесь отработает фун-я от Character!
    // потому что мы сказали, что это тип Character!
}