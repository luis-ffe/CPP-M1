
#include "../includes/Cat.hpp"

Cat::Cat(): Animal() {
	this->_type = "Cat";
	std::cout << "Cat Constructor" << std::endl;
}

Cat::Cat(const Cat &copy): Animal() {
	std::cout << "Cat Copy Constructor" << std::endl;
	*this = copy;
}

Cat::~Cat() {
	std::cout << "Cat Deconstructor" << std::endl;
}

Cat &Cat::operator=(const Cat &src) {
	std::cout << "Cat Assignment operator" << std::endl;
	this->_type = src._type;
	return *this;
}

void	Cat::MakeSound(void) const {
	std::cout << this->GetType() << ": MMMiauauauau" << std::endl;
}
