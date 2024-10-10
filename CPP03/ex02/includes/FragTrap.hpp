/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:34:32 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/10/10 12:34:33 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	private:

	public:
		FragTrap();
		FragTrap(const FragTrap &copy);
		FragTrap(std::string name);
		virtual ~FragTrap();

		FragTrap &operator=(const FragTrap &src);
		void highFiveGuys(void);
};
