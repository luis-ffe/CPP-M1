
#pragma once

#include <string>
#include <iostream>

class ClapTrap
{
	private:
		unsigned int _AttackDamage;
		unsigned int _EnergyPoints;
		unsigned int _HitPoints;
		std::string _Name;

	public:
		ClapTrap();
		ClapTrap(const ClapTrap &copy);
		ClapTrap(std::string name);
		~ClapTrap();

		ClapTrap &operator=(const ClapTrap &src);
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
