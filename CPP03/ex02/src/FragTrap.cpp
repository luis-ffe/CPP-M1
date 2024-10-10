/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:34:42 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/10/10 12:35:03 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "FragTrap Default Constructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy) {
	std::cout << "FragTrap Copy Constructor" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "FragTrap Constructor Name: " << this->_Name << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Deconstructor " << this->_Name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src) {
	std::cout << "FragTrap Assignment operator called" << std::endl;
	this->_Name = src._Name;
	this->_HitPoints = src._HitPoints;
	this->_EnergyPoints = src._EnergyPoints;
	this->_AttackDamage = src._AttackDamage;
	return *this;
}

void	FragTrap::highFiveGuys(void) {
	std::cout << "FragTrap " << this->_Name << " high fives you in da faceeee ." << std::endl;
}
