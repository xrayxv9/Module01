#include "Zombie.hpp"

int main( void )
{
	Zombie *z = newZombie("Pedro");
	z->announce();

	randomChump("Christian");
	delete z;

	return 0;
}
