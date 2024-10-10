/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:13:43 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/09/12 10:13:44 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/master_header.hpp"

int main(void){
    Phonebook phonebook;
    std::string input;

    while (!std::cin.eof()) {
        std::cout << "Command list; SEARCH / ADD / EXIT \n";
        std::getline(std::cin, input);
        if (input == "EXIT")
        {
            //free???
            return (0);
        }
        else if (input == "ADD") {
            ft_add_all(&phonebook);
        }
        else if (input == "SEARCH") {
            ft_search(&phonebook);
        }
        else {
            if (!std::cin.eof()) {
                std::cout << "Commands: [ADD] [SEARCH] [EXIT]\n";
            }
        }
    }
    return 0;
}
