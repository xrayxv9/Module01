#pragma once
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB( std::string name );
		~HumanB( void );
		void attack( void );
		void setWeapon(Weapon &wep);

	private:
		Weapon *wep;
		std::string name;

		void setName( std::string );

		std::string getName( void );
};
