#include "Zombie.hpp"

void Zombie::randomChump( std::string name)
{
	Zombie zom;

	zom.name = name;
	zom.Announce();
}
