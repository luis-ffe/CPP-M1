/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:24:57 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/10/14 12:14:06 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Brain 
{
    private:
        std::string _ideas[100];

    public:
        Brain();
        Brain(const Brain &src);
        ~Brain();

        Brain &operator=(const Brain &copy);
        const std::string	getIdea(size_t i) const;
        void	setIdea(size_t i, std::string idea) ;
};
