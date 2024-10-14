/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:36:42 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/10/14 12:14:28 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Brain.hpp"

int main()
{

	std::cout << "\n\n\n\033[32m*-------------------------------------*" << std::endl;
	std::cout <<               "|               Cat Class             |" << std::endl;
	std::cout <<               "*-------------------------------------*\n\033[0m" << std::endl;
	
	std::cout << "\033[34mWill Construct instance here: Allocating \033[0m"<< std::endl;
	const Cat *cat = new Cat();
	std::cout << "\033[34m\n->GetType(); \033[0m"<< std::endl;
	std::cout << "Animal _type: " << cat->GetType() << std::endl;
	std::cout << "\033[34m\n->MakeSound(); \033[0m"<< std::endl;
	cat->MakeSound();
	std::cout << "\033[34m\nDelete\033[0m" << std::endl;
	delete cat;

	std::cout << "\n\n\n\033[32m*-------------------------------------*" << std::endl;
	std::cout <<               "|               Dog Class             |" << std::endl;
	std::cout <<               "*-------------------------------------*\n\033[0m" << std::endl;
	
	std::cout << "\033[34mWill Construct instance here: Allocating \033[0m"<< std::endl;
	const Dog *dogo = new Dog();
	std::cout << "\033[34m\n->GetType(); \033[0m"<< std::endl;
	std::cout << "Animal _type: " << dogo->GetType() << std::endl;
	std::cout << "\033[34m\n->MakeSound(); \033[0m"<< std::endl;
	dogo->MakeSound();
	std::cout << "\033[34m\nDelete\033[0m" << std::endl;
	delete dogo;

	std::cout << "\n\n\n\033[32m*-------------------------------------*" << std::endl;
	std::cout <<               "|              Brain Class            |" << std::endl;
	std::cout <<               "*-------------------------------------*\n\033[0m" << std::endl;

	Cat *gata1 = new Cat();
	gata1->setIdea(1, "Bananas");
	Cat *gato2 = new Cat(*gata1);
	gata1->setIdea(1, "popo");
	
	std::cout << "If  the next 2 lines are equal then we have a shallow copy" << std::endl;
	
	std::cout << gata1->getIdea(1) << std::endl;
	std::cout << gato2->getIdea(1) << std::endl;

	delete gato2;
	delete gata1;
	
	std::cout << "\033[31m\n*-------------------------------------*" << std::endl;
	std::cout <<           "|            END OF TESTS             |" << std::endl;
	std::cout <<           "*-------------------------------------*\n\033[0m" << std::endl;
	
	return (0);
}
