/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:13:57 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/09/24 11:50:29 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iomanip>
# include <cstdlib>
# include <iostream>

class Zombie
{
private:
    std::string name;
    
public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void announce(void);
    void nameTheZombie( std::string name);
};

Zombie* zombieHorde(int N, std::string name);
