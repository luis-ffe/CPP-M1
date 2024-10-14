
#include "../includes/Animal.hpp"

Animal::Animal(): _type("Incognito") {
    std::cout << "Animal Default Constructor" << std::endl;
}

Animal::Animal(const Animal &copy) {
    std::cout << "Animal Copy Constructor" << std::endl;
    *this = copy;
}

Animal::~Animal() {
    std::cout << "Animal Destructor" << std::endl;
}

Animal &Animal::operator=(const Animal &src) {
    std::cout << "Animal Assignment Operator" << std::endl;
    this->_type = src._type;
    return *this;
}

std::string Animal::GetType(void) const {
    return (this->_type);
}
