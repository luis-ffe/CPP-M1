/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:13:08 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/10/14 11:15:20 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal(): _type("Incognito") {
    std::cout << "Animal Default Constructor" << std::endl;
}

Animal::Animal(const Animal &copy) {
    std::cout << "Animal Copy Constructor" << std::endl;
    *this = copy;
}

Animal::~Animal() {
    std::cout << "Animal Destructor" << std::endl;
}

Animal &Animal::operator=(const Animal &src) {
    std::cout << "Animal Assignment Operator" << std::endl;
    this->_type = src._type;
    return *this;
}

std::string Animal::GetType(void) const {
    return (this->_type);
}
