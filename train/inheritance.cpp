#include <iostream>

class Quadruped // Can access name, run() and legs
{
    private:
        std::string name;
    protected:
        Leg     legs[4];
    public:
        void run();
};

class Dog: public Quadruped // Can access run() and legs
{

};

int main() // can only access run()
{
    
}