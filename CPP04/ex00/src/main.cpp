/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:36:42 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/10/14 12:13:24 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

class WrongAnimal
{
protected:
    std::string _type;

public:
    WrongAnimal() {};
    WrongAnimal( std::string type ) : _type(type) {};
    void makeSound() const {std::cout << "Wrong animal sound!" << std::endl;};
};


class WrongCat : public WrongAnimal
{
public:
    WrongCat() {};
    ~WrongCat() {};
    void makeSound() const {std::cout << "cat sound!" << std::endl;};
};

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
	std::cout <<               "|          Wrongs Class          |" << std::endl;
	std::cout <<               "*-------------------------------------*\n\033[0m" << std::endl;
	

    Animal* animals[] = { new Dog(), new Cat(), new Animal() };
    for (int i = 0; i < 3; i++) {
        std::cout << animals[i]->GetType() << std::endl;
        animals[i]->MakeSound();
        delete animals[i];
    }

    Dog dog1;
    Animal* dog2 = new Dog(dog1);
    std::cout << dog2->GetType() << std::endl;
    dog2->MakeSound();
    delete dog2;

    WrongAnimal* wronganimal = new WrongCat();
    wronganimal->makeSound();
    delete wronganimal;
	return (0);
}
