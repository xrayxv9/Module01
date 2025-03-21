#include "Harl.hpp"

Harl::Harl( void )
{
	std::cout << "An outer wilds fan has emerged from his cave" << std::endl;
}

Harl::~Harl( void )
{
	std::cout << "The outer wilds fan went back to his cave" << std::endl;
}

void Harl::debug( void )
{
	std::cout <<  GREEN << "DEBUG: " << RESET << "You just begun your outer wilds world GG !" << std::endl;
	info();
}

void Harl::info( void )
{
	std::cout << YELLOW << "INFO: " << RESET << "You have found the museum good job !" << std::endl;
	warning();
}

void Harl::warning( void )
{
	std::cout << ORANGE << "WARNING: " << RESET << "What the heck is that statue doing ?!" << std::endl;
	error();
}

void Harl::error( void )
{
	std::cout << RED << "ERROR: " << RESET << "THE SUN !!!!!" << std::endl;
}

void Harl::printThemAll( int nb )
{	
	void (Harl::*fct[4])( void ) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	(this->*fct[nb])();
}
