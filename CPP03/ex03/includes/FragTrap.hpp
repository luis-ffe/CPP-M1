/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:28:09 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/10/10 12:28:10 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
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
