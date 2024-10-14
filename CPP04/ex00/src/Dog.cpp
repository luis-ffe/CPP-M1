/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:26:33 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/10/14 11:26:36 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(): Animal() {
	this->_type = "Dog";
	std::cout << "Dog Constructor" << std::endl;
}

Dog::Dog(const Dog &copy): Animal() {
	std::cout << "Dog Copy Constructor" << std::endl;
	*this = copy;
}

Dog::~Dog() {
	std::cout << "Dog Deconstructor" << std::endl;
}

Dog &Dog::operator=(const Dog &src) {
	std::cout << "Dog Assignment operator" << std::endl;
	this->_type = src._type;
	return *this;
}

void	Dog::MakeSound(void) const {
	std::cout << this->GetType() << ": WOOOF WOOOF AU AU  rrrrrr" << std::endl;
}
