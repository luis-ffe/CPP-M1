/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:42:58 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/09/24 15:34:06 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int main(void) {
	Harl	harl;

	//std::cout << "Functioning [harl.complain(\"ERROR\")]:\n" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;

	//std::cout << "Functioning [harl.complain(\"WARNING\")]:\n" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;

	//std::cout << "Functioning [harl.complain(\"INFO\")]:\n" << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;

	//std::cout << "Functioning [harl.complain(\"DEBUG\")]:\n" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;

	//std::cout << "Functioning [harl.complain(\"Random\")]:\n" << std::endl;
	harl.complain("Random");
	std::cout << std::endl;

	// std::cout << "Make harl do something twice" << std::endl;

	// for (int i = 0; i < 2; i++) {
	// 	std::cout << "input: ";
	// 	std::string input;
	// 	getline(std::cin, input);
	// 	if (std::cin.eof() == true)
	// 	{
	// 		std::cerr << "^D" << std::endl;
	// 		exit(1);
	// 	}
	// 	harl.complain(input);
	// 	std::cout << std::endl;
	// }
	return (0);
}
