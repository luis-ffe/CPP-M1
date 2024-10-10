/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:44:18 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/09/24 11:44:21 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->_name = name;
	this->_hasWeapon = false;
	std::cout << this->_name <<" arrived!" << std::endl;
}

HumanB::~HumanB(void) {
    std::cout << this->_name << " died!" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
	this->_hasWeapon = true;
	std::cout << this->_name << " has a deadly " << this->_weapon->getType() << std::endl;
}

void HumanB::attack(void)
{
    if (this->_hasWeapon) {
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    }
    else {
        std::cout << this->_name << " has no weapons!" << std::endl;
    }
}