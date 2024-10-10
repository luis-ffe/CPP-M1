/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:43:19 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/09/24 11:43:23 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <cstdlib>
#include <iostream>

class Harl
{
    private:
        void info(void);
        void error(void);
        void debug(void);
        void warning(void);

    public:
        Harl();
        ~Harl();
        void complain(std::string str);
};
