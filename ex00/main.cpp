#include "Zombie.hpp"

int main( void )
{
	Zombie zomb;
	Zombie *z;

	z = zomb.newZombie("Pedro");
	z->Announce();
	zomb.randomChump("Christian");

	delete z;
	return 0;
}
