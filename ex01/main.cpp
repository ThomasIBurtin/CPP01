
#include "Zombie.hpp"

int main()
{
    int N = 16; 
    Zombie *zombies = zombieHorde(N, "zombie");

    for (int i = 0; i < N; i++)
        zombies[i].announce();

    delete [] zombies;
}