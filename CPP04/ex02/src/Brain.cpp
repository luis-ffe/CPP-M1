/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:33:25 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/10/14 11:33:26 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain() {

    std::cout << "Brain Default Constructor" << std::endl;
}

Brain::Brain(const Brain &copy) {
    std::cout << "Brain Copy Constructor" << std::endl;
    *this = copy;
}

Brain::~Brain() {
    std::cout << "Brain Destructor" << std::endl;
}

Brain &Brain::operator=(const Brain &src) {
    std::cout << "Brain Assignment Operator" << std::endl;
    if (this != &src) {
        std::copy(src._ideas, src._ideas + 100, this->_ideas);
    }
    return *this;
}

const std::string	Brain::getIdea(size_t i) const {
	if (i < 100)
		return(this->_ideas[i]);
	else
		return ("\033[33m 100 Ideas Per Brain\033[0m");
}

void	Brain::setIdea(size_t i, std::string idea) {
	if (i < 100)
		this->_ideas[i] = idea;
	else
		std::cout << "\033[33m Ideas Limited to 100 \033[0m" << std::endl;
}