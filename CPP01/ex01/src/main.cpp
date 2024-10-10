/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:13:43 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/09/24 15:30:51 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main(void)
{
    int N = 5;
    std::string _Name = "GivenName";

    Zombie* horde = zombieHorde(N, _Name);

    if (!horde) {
        return (EXIT_SUCCESS);
    }
    for (int i = 0; i < N; i++) {
        horde[i].announce();
    }
    delete[] horde;

    horde = zombieHorde(0, "Name:0");
    delete[] horde;

    return (EXIT_SUCCESS);
}
