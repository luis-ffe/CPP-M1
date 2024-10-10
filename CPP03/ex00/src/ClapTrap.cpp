
#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(): _AttackDamage(0), _EnergyPoints(10),  _HitPoints(10), _Name("Default Name") {
    std::cout << "Default Contructor" << std::endl;
}


ClapTrap::ClapTrap(std::string name): _AttackDamage(0), _EnergyPoints(10),  _HitPoints(10), _Name(name) {
    std::cout << "Contructor Set Name: " << name << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor Called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &source) {
	std::cout << "ClapTrap Assignment operator called" << std::endl;
    this->_AttackDamage = source._AttackDamage;
    this->_EnergyPoints = source._EnergyPoints;
    this->_HitPoints = source._EnergyPoints;
    this->_Name = source._Name;
    return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = copy;
}

void ClapTrap::attack(const std::string &target) {
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

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->_HitPoints > 0) {
        this->_HitPoints -= amount;
        std::cout << this->_Name << " took " << amount << " Damage." << std::endl;
        return;
    }
    if (this->_HitPoints <= 0) {
        std::cout << this->_Name << " is dead! Stop beating corpses!" << std::endl;
    }
    return;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_HitPoints <= 0) {
        std::cout << this->_Name << " is very dead YOLO, cant come back to life!" << std::endl;
        return;
    }
    if (this->_EnergyPoints <= 0) {
        std::cout << this->_Name << " has no energy to repair itself!" << std::endl;
        return;
    }
    if (this->_EnergyPoints > 0 && this->_HitPoints > 0) {
        this->_EnergyPoints--;
        this->_HitPoints += amount;
        std::cout << this->_Name << " healed itself by " << amount << " hitpoins" << std::endl;
        return;
    }
    return;
}
