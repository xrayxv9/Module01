#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &wep ) : wep(wep), name(name)
{
}

HumanA::~HumanA( void )
{
	return ;
}

// function

void HumanA::attack( void )
{
	std::cout << this->getName() << " attacks with their " << this->getWeapon() << std::endl;
}

// set

void HumanA::setWeapon( Weapon &wep )
{
	this->wep = wep;
}

void HumanA::setName( std::string name )
{
	this->name = name;
}

// set

std::string HumanA::getName( void )
{
	return (this->name);
}

const std::string HumanA::getWeapon( void )
{
	return (this->wep.getType());
}
