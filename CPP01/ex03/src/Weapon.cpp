/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:44:00 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/09/24 11:49:34 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon(const std::string &weapon) {
	this->setType(weapon);
}

Weapon::~Weapon() {
	std::cout << this->getType() << " is now broken!" << std::endl;
}

std::string Weapon::getType() const {
	return (_type);
}

void Weapon::setType(const std::string &weapon) {
	_type = weapon;
}
