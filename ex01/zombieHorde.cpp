#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name)
{
	Zombie *zb = new Zombie[n];
	for (int i = 0; i < n; i++) 
    {
        zb[i].setName(name);
		zb[i].announce();
	}
    return (zb);
}
