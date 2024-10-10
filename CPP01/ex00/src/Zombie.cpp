/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:28:58 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/09/24 11:46:08 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie() {
}

Zombie::Zombie(std::string name) {
    std::cout << "Zombie: " << name << " Created \n";
    this->name = name;
}

Zombie::~Zombie() {
    std::cout << "Zombie: " << this->name << " Destroyed \n";         
}

void Zombie::announce(void) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::nameTheZombie( std::string name) {
    this->name = name;
}