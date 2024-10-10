/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:28:52 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/09/24 11:46:13 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* newZombie(std::string name) {
    Zombie *newZombie;
    newZombie = new Zombie(name);
    if(!newZombie)
    {
        std::cout << "Failed Memmory Allocatin" << std::endl;
        return (NULL);
    }
    return (newZombie);
}
