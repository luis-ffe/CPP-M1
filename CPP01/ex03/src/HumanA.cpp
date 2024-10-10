/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:44:25 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/09/24 11:44:26 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):_weapon(weapon) {
	this->_name = name;
	std::cout << this->_name << " got a deadly " << this->_weapon.getType() << " to fight with." << std::endl;
}

HumanA::~HumanA(void) {
    std::cout << this->_name << " died!" << std::endl;
}

void HumanA::attack(void) {
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
