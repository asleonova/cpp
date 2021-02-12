#include "Pony.hpp"

void ponyOnTheStack(void)
{
   // Pony pony("Fell", "black", "male");
    Pony pony = Pony("Fell", "black", "male");
}

void ponyOnTheHeap(void)
{
    Pony* pony1 = new Pony("Cob", "white", "female");
    delete pony1;
}

int main(void)
{
    ponyOnTheStack();
    ponyOnTheHeap();
    return (0);
}