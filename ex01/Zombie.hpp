#pragma once
#include <iostream>

class Zombie
{
	public :
		Zombie( void );
		~Zombie( void );
		
		void announce ( void );
		Zombie *zombieHorde(int n, std::string name);	

	private :
		void setName( std::string name );	
		std::string getName( void );
		std::string name;
};
