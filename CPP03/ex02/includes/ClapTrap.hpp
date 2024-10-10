/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:34:29 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/10/10 12:38:53 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>


class ClapTrap
{
	protected:
		unsigned int _AttackDamage;
		unsigned int _EnergyPoints;
		unsigned int _HitPoints;
		std::string _Name;

	public:
		ClapTrap();
		ClapTrap(const ClapTrap &copy);
		ClapTrap(std::string name);
		virtual ~ClapTrap();

		ClapTrap &operator=(const ClapTrap &src);
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
