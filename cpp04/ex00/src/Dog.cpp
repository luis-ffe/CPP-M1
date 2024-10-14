
#include "../includes/Dog.hpp"

Dog::Dog(): Animal() {
	this->_type = "Dog";
	std::cout << "Dog Constructor" << std::endl;
}

Dog::Dog(const Dog &copy): Animal() {
	std::cout << "Dog Copy Constructor" << std::endl;
	*this = copy;
}

Dog::~Dog() {
	std::cout << "Dog Deconstructor" << std::endl;
}

Dog &Dog::operator=(const Dog &src) {
	std::cout << "Dog Assignment operator" << std::endl;
	this->_type = src._type;
	return *this;
}

void	Dog::MakeSound(void) const {
	std::cout << this->GetType() << ": WOOOF WOOOF AU AU  rrrrrr" << std::endl;
}
