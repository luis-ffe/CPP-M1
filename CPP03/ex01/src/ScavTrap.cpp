
#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	this->_GuardingGate = false;
	std::cout << "ScavTrap Default Constructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
{
	this->_GuardingGate = copy._GuardingGate;
	std::cout << "ScavTrap Copy Constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	this->_GuardingGate = false;
	std::cout << "ScavTrap Constructor NAME: " << this->_Name << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Deconstructed: " << this->_Name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "ScavTrap Assignment operator" << std::endl;
	this->_Name = src._Name;
	this->_HitPoints = src._HitPoints;
	this->_EnergyPoints = src._EnergyPoints;
	this->_AttackDamage = src._AttackDamage;
	return *this;
}

/*
void	ScavTrap::attack(const std::string &target)
{
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		std::cout << "ScavTrap " << this->_Name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
		this->_EnergyPoints--;
	}
	else if (this->_EnergyPoints == 0)
		std::cout << "\033[31mScavTrap " << this->_Name << " is not able to attack " << target << ", because he has no energy points left.\033[0m" << std::endl;
	else
		std::cout << "\033[31mScavTrap " << this->_Name << " is not able to attack " << target << ", because he has not enough hit points.\033[0m" << std::endl;
}
*/

void ScavTrap::attack(const std::string &target) {
    if (this->_HitPoints <= 0) {
        std::cout << this->_Name << " is dead! Cannot attack " << target << std::endl;
        return;
    }
    if (this->_EnergyPoints <= 0) {
        std::cout << this->_Name << " is tired! Cannot attack " << target << std::endl;
        return;
    }
    if (this->_AttackDamage > 0) {
        std::cout << this->_Name << " attacks " << target << " dealing " << this->_AttackDamage << " Damage!" << std::endl;
        this->_EnergyPoints--;
        return;
    }
    if (this->_AttackDamage <= 0) {
        std::cout << this->_Name << " has no attack damage to hit " << target << std::endl;
        return;
    }
    else {
        std::cout << this->_Name << " is dead and cannot attack " << target << std::endl;
        return;
    }
    return;
}

void	ScavTrap::guardGate(void) {
	if (this->_GuardingGate == false) {
		this->_GuardingGate = true;
		std::cout << "ScavTrap " << this->_Name << " guarding the gate." << std::endl;
	}
	else
		std::cout << "\033[33mScavTrap " << this->_Name << " already guarding the gate.\033[0m" << std::endl;
}
