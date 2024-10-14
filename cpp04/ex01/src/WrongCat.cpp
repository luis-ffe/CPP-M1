#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal() {
	std::cout << "WrongCat Default Constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) {
	std::cout << "WrongCat Copy Constructor" << std::endl;
	*this = copy;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat Destructor" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src) {
    std::cout << "WrongCat Assignment Operator" << std::endl;
	this->_type = src._type;
	return *this;
}