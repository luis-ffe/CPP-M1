/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:45:04 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/09/24 11:46:22 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;
	std::cout << "Address of string:    " << &string << std::endl;
	std::cout << "Address of stringPTR: " << stringPTR << std::endl;
	std::cout << "Address of stringREF: " << &stringREF << std::endl;
	std::cout << "Value of string:      " << string <<std::endl;
	std::cout << "Value of stringPTR:   " << *stringPTR <<std::endl;
	std::cout << "Value of stringREF:   " << stringREF <<std::endl;
	return (0);
}
