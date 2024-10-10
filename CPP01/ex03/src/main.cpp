/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:44:08 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/09/24 11:50:57 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"
#include "../includes/HumanB.hpp"
#include "../includes/Weapon.hpp"

int main(void)
{
    {
    Weapon club = Weapon("Banana");

    HumanA alice("Alice", club);
    alice.attack();
    club.setType("Baggette");
    alice.attack();
    }
    {
    Weapon club = Weapon("Bow and arrow");

    HumanB berto = HumanB("Berto");
    berto.attack();
    berto.setWeapon(club);
    berto.attack();
    club.setType("Flamethrower");
    berto.attack();
    }   
    return (0);
}
