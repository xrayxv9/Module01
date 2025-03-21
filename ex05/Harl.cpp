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
}

void Harl::info( void )
{
	std::cout << YELLOW << "INFO: " << RESET << "You have found the museum good job !" << std::endl;
}

void Harl::warning( void )
{
	std::cout << ORANGE << "WARNING: " << RESET << "What the heck is that statue doing ?!" << std::endl;
}

void Harl::error( void )
{
	std::cout << RED << "ERROR: " << RESET << "THE SUN !!!!!" << std::endl;
}

void Harl::complain( std::string level )
{
	void (Harl::*fct[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};
	std::string lst[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (lst[i] == level)
			(this->*fct[i])();
	}
}
