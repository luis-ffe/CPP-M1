/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:13:04 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/10/14 12:14:38 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal 
{
	private:
		Brain* _Brain;
	public:
		Dog();
		Dog(const Dog &copy);
		~Dog();

		Dog &operator=(const Dog &src);
		void MakeSound(void)const;
        const std::string	getIdea(size_t i) const;
        void	setIdea(size_t i, std::string idea) ;
};
