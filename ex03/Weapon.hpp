#pragma once
#include <iostream>

class Weapon
{
	public:
		Weapon( std::string Type );
		~Weapon( void );
		void setType(std::string type);
		const std::string getType( void );

	private:
		std::string type;


};
