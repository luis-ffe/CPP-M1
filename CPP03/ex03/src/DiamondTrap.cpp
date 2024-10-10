/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:29:46 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/10/10 12:29:49 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap() {
	this->_Name = ClapTrap::_Name + "_clap_trap";
	this->_EnergyPoints = FragTrap::_EnergyPoints;
	this->_HitPoints = ScavTrap::_HitPoints;
	this->_AttackDamage = FragTrap::_AttackDamage;
	std::cout << "DiamondTrap Default Constructor" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap(copy), ScavTrap(copy), FragTrap(copy) {
	*this = copy;
	std::cout << "DiamondTrap Copy Constructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_trap") {
	this->_Name = name;
	this->_EnergyPoints = FragTrap::_EnergyPoints;
	this->_HitPoints = ScavTrap::_HitPoints;
	this->_AttackDamage = FragTrap::_AttackDamage;
	std::cout << "DiamondTrap Constructor: " << this->_Name << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap Deconstructor: " << this->_Name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src) {
	std::cout << "DiamondTrap Assignment Operator" << std::endl;
	this->_Name = src._Name;
	this->_EnergyPoints = src._EnergyPoints;
	this->_HitPoints = src._HitPoints;
	this->_AttackDamage = src._AttackDamage;
	return *this;
}

void	DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) {
	std::cout << "DiamondTrap: " << this->_Name << " originated from ClapTrap: " << ClapTrap::_Name << std::endl;
}
