/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:26:10 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/10/14 12:13:36 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat: public Animal
{
	private:

	public:
		Cat();
		Cat(const Cat &copy);
		~Cat();

		Cat &operator=(const Cat &src);
		void MakeSound(void)const;

};
