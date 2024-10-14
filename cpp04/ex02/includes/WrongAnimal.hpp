#pragma once

#include <string>
#include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);
		virtual ~WrongAnimal();

		WrongAnimal &operator=(const WrongAnimal &src);
		void MakeSound(void)const;

		std::string GetType(void)const;
};
