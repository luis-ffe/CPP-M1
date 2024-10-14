#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain* _Brain;
	public:
		Cat();
		Cat(const Cat &copy);
		~Cat();

		Cat &operator=(const Cat &src);
		void MakeSound(void)const;
        const std::string	getIdea(size_t i) const;
        void	setIdea(size_t i, std::string idea) ;
};
