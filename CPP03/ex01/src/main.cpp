
#include "../includes/ScavTrap.hpp"

int main()
{
		std::cout << "\n\n\n*-------------------------------------*" << std::endl;
		std::cout <<       "|               CLAPTRAP              |" << std::endl;
		std::cout <<       "*-------------------------------------*\n" << std::endl;
{
    ClapTrap unknown;
    ClapTrap myDog("Dog");
    ClapTrap Squirrel("Squirrel");

    myDog.attack("Robber");
    myDog.takeDamage(5);
    myDog.beRepaired(5);

    myDog.takeDamage(10);
    myDog.takeDamage(10);
    myDog.attack("Another Robber");
    myDog.beRepaired(10);

    unknown.attack("Banana tree");
}

	std::cout << "\n Extra Test\n" << std::endl;

{
    ClapTrap myGod("God");
    ClapTrap newGod(myGod);

    myGod.attack("Satan");
    newGod.takeDamage(10);
    newGod.takeDamage(10);
}
		std::cout << "\n\n\n*-------------------------------------*" << std::endl;
		std::cout <<       "|               SCAVTRAP              |" << std::endl;
		std::cout <<       "*-------------------------------------*\n" << std::endl;
{
	ScavTrap a;
	ScavTrap b("Satan");

	a.attack("Vegetarian cow");
	a.beRepaired(22);
	a.takeDamage(21);
	a.beRepaired(22);
	a.guardGate();
	a.guardGate();
	b.attack("Crazy HOBO");
	b.takeDamage(101);
	b.takeDamage(15);
	b.attack("New Biatycheee");
	}
		std::cout << "\n*-------------------------------------*" << std::endl;
		std::cout << "|            END OF TESTS             |" << std::endl;
		std::cout << "*-------------------------------------*\n" << std::endl;
 
	return (0);
}