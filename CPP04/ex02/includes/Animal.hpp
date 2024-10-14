/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:37:09 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/10/14 10:51:24 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Animal
{
	protected:
		std::string _type;

	public:
		Animal();
		Animal(const Animal &copy);
		virtual ~Animal();

		Animal &operator=(const Animal &src);
		virtual void MakeSound(void) const = 0;
		std::string GetType(void) const;
};
