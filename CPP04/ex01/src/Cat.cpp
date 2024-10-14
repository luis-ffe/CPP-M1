/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:24:34 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/10/14 12:14:15 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Brain.hpp"

Cat::Cat(): Animal() {
	this->_type = "Cat";
	this->_Brain = new Brain();
	std::cout << "Cat Constructor" << std::endl;
}

Cat::Cat(const Cat &copy): Animal(), _Brain(new Brain) {
	std::cout << "Cat Copy Constructor" << std::endl;
	*this = copy;
}

Cat::~Cat() {
	delete this->_Brain;
	std::cout << "Cat Deconstructor" << std::endl;
}

Cat &Cat::operator=(const Cat &src) {
	std::cout << "Cat Assignment operator" << std::endl;
	if (this != &src) {
		this->_type = src._type;
		*this->_Brain = *src._Brain;
	}
	return *this;
}

void	Cat::MakeSound(void) const {
	std::cout << this->GetType() << ": MMMiauauauau" << std::endl;
}


const std::string	Cat::getIdea(size_t i) const {
	if (i < 100)
		return(this->_Brain->getIdea(i));
	else
		return ("\033[33m 100 Ideas Per Brain\033[0m");
}

void	Cat::setIdea(size_t i, std::string idea) {
	if (i < 100)
		this->_Brain->setIdea(i, idea);
	else
		std::cout << "\033[33m Ideas Limited to 100 \033[0m" << std::endl;
}