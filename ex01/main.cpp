#include "Zombie.hpp"
#include <iostream>

int main ( void )
{
	Zombie *z = zombieHorde(4, "jack");

	for (int i = 0; i < 4; i++)
	{
		std::cout << i << ". ";
		z[i].announce();
	}
	delete [] z;
}
