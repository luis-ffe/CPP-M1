/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:46:17 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/09/24 14:55:54 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N < 1) {
        std::cout << "Zombie horde needs Zombies!!!\n - [Valid input has to be greater than 0] -\n";
        return NULL;
    }
    
    Zombie *zombieHorde;

    try {
        zombieHorde = new Zombie[N];
    } catch (std::bad_alloc&) {
        std::cout << "Allocation Error\n" << std::endl;
        return NULL;
    }
    for (int i = 0; i < N; i++) {
        zombieHorde[i].nameTheZombie(name);
        //std::cout << "zombie creation N: " << i << std::endl;
    }
    return zombieHorde;
}
