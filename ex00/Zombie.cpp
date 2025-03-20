#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : name(name)
{
	return ;
}

Zombie::~Zombie()
{
	std::cout << name << " Has been destroyed" << std::endl;
}

void Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
