#pragma once
#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon &wep);
		~HumanA( void );
		void attack( void );

	private:
		Weapon &wep;
		std::string name;

		void setName( std::string );
		void setWeapon( Weapon &type);

		std::string getName( void );
		const std::string getWeapon( void );
};
