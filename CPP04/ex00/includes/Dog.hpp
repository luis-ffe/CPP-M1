/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:26:18 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/10/14 11:26:19 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog: public Animal
{
	private:

	public:
		Dog();
		Dog(const Dog &copy);
		~Dog();

		Dog &operator=(const Dog &src);
		void MakeSound(void)const;

};
