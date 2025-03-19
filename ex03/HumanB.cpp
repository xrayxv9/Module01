#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : wep(NULL)
{
	this->setName(name);
}

HumanB::~HumanB( void )
{
	return ;
}

// function

void HumanB::attack( void )
{
	std::cout << this->getName() << " attacks with their " << this->wep->getType() << std::endl;
}

// set

void HumanB::setWeapon( Weapon &wep )
{
	this->wep = &wep;
}

void HumanB::setName( std::string name )
{
	this->name = name;
}

// set

std::string HumanB::getName( void )
{
	return (this->name);
}
