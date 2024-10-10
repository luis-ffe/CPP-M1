#pragma once

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	private:

	public:
		FragTrap();
		FragTrap(const FragTrap &copy);
		FragTrap(std::string name);
		virtual ~FragTrap();

		FragTrap &operator=(const FragTrap &src);
		void highFiveGuys(void);
};
