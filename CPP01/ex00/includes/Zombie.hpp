/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:13:57 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/09/24 11:45:55 by luis-ffe         ###   ########.fr       */
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

Zombie* newZombie(std::string name);
void randomChump( std::string name);
