/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:28:03 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/10/10 12:28:04 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string _Name;

	public:
		DiamondTrap();
		DiamondTrap(const DiamondTrap &copy);
		DiamondTrap(std::string name);
		virtual ~DiamondTrap();

		DiamondTrap &operator=(const DiamondTrap &src);
		void attack(const std::string &target);
		void whoAmI(void);
};
