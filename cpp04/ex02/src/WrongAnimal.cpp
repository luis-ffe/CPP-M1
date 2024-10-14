#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal():_type("wrong Animal") {
	std::cout << "WrongAnimal Default Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
	std::cout << "WrongAnimal Copy Constructor" << std::endl;
	*this = copy;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Deconstructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src) {
	std::cout << "WrongAnimal Assignment operator" << std::endl;
	this->_type = src._type;
	return *this;
}

void WrongAnimal::MakeSound(void)const {
	std::cout << this->GetType() << ": Wrong Animal Noises XD" << std::endl;
}

std::string	WrongAnimal::GetType(void)const {
	return (this->_type);
}
