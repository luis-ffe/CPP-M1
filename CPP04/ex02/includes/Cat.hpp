/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:13:01 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/10/14 12:14:39 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain* _Brain;
	public:
		Cat();
		Cat(const Cat &copy);
		~Cat();

		Cat &operator=(const Cat &src);
		void MakeSound(void)const;
        const std::string	getIdea(size_t i) const;
        void	setIdea(size_t i, std::string idea) ;
};
