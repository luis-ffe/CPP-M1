/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:36:42 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/10/11 14:33:45 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	std::cout << "\n\n\n\033[32m*-------------------------------------*" << std::endl;
	std::cout <<               "|             Animal Class            |" << std::endl;
	std::cout <<               "*-------------------------------------*\n\033[0m" << std::endl;
	
	std::cout << "\033[34mWill Construct instance here: Allocating \033[0m"<< std::endl;
	const Animal *undefined = new Animal();
	std::cout << "\033[34m\n->GetType(); \033[0m"<< std::endl;
	std::cout << "Animal _type: " << undefined->GetType() << std::endl;
	std::cout << "\033[34m\n->MakeSound(); \033[0m"<< std::endl;
	undefined->MakeSound();
	std::cout << "\033[34m\nDelete\033[0m" << std::endl;
	delete undefined;

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
	std::cout <<               "|          WrongAnimal Class          |" << std::endl;
	std::cout <<               "*-------------------------------------*\n\033[0m" << std::endl;
	
	std::cout << "\033[34mWill Construct instance here: Allocating \033[0m"<< std::endl;
	const WrongAnimal *wrong1 = new WrongAnimal();
	std::cout << "\033[34m\n->GetType(); \033[0m"<< std::endl;
	std::cout << "Animal _type: " << wrong1->GetType() << std::endl;
	std::cout << "\033[34m\n->MakeSound(); \033[0m"<< std::endl;
	wrong1->MakeSound();
	std::cout << "\033[34m\nDelete\033[0m" << std::endl;
	delete wrong1;

	std::cout << "\n\n\n\033[32m*-------------------------------------*" << std::endl;
	std::cout <<               "|            WrongCat Class           |" << std::endl;
	std::cout <<               "*-------------------------------------*\n\033[0m" << std::endl;

	std::cout << "\033[34mWill Construct instance here: Allocating \033[0m"<< std::endl;
	const WrongCat *wrong2 = new WrongCat();
	std::cout << "\033[34m\n->GetType(); \033[0m"<< std::endl;
	std::cout << "Animal _type: " << wrong2->GetType() << std::endl;
	std::cout << "\033[34m\n->MakeSound(); \033[0m"<< std::endl;
	wrong2->MakeSound();

	std::cout << "\033[34m\nMake a Copy; \033[0m"<< std::endl;
	const WrongCat *beCopy = new WrongCat(*wrong2);
	
	std::cout << "\033[34m\n->MakeSound() Copy; \033[0m"<< std::endl;
	beCopy->MakeSound();
	std::cout << "\033[34m\nDelete\033[0m" << std::endl;
	delete beCopy;
	delete wrong2;

	std::cout << "\033[31m\n*-------------------------------------*" << std::endl;
	std::cout <<           "|            END OF TESTS             |" << std::endl;
	std::cout <<           "*-------------------------------------*\n\033[0m" << std::endl;
	
	return (0);
}
