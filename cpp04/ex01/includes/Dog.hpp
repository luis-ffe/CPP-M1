#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal 
{
	private:
		Brain* _Brain;
	public:
		Dog();
		Dog(const Dog &copy);
		~Dog();

		Dog &operator=(const Dog &src);
		void MakeSound(void)const;
        const std::string	getIdea(size_t i) const;
        void	setIdea(size_t i, std::string idea) ;
};
