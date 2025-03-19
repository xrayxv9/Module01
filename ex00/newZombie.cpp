#include "Zombie.hpp"

Zombie *Zombie::newZombie( std::string name )
{
	Zombie *zom = new Zombie;

	zom->name = name;
	return zom;
}
