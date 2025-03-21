#pragma once

#include <iostream>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define ORANGE  "\033[38;5;208m"

class Harl
{
	public:
		Harl( void );
		~Harl( void );
		void printThemAll( int nb );

	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};
