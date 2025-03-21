#pragma once
#include <iostream>

class Zombie
{
	public :
		Zombie( void );
		~Zombie( void );
		
		void announce ( void );
		void setName( std::string name );	

	private :
		std::string getName( void );
		std::string name;
};

Zombie *zombieHorde(int n, std::string name);
