
#include "../includes/Dog.hpp"
#include "../includes/Brain.hpp"


Dog::Dog(): Animal() {
	this->_Brain = new Brain();
	this->_type = "Dog";
	std::cout << "Dog Constructor" << std::endl;
}

Dog::Dog(const Dog &copy): Animal(), _Brain(new Brain) {
	std::cout << "Dog Copy Constructor" << std::endl;
	*this = copy;
}

Dog::~Dog() {
	delete this->_Brain;
	std::cout << "Dog Deconstructor" << std::endl;
}

Dog &Dog::operator=(const Dog &src) {
	std::cout << "Dog Assignment operator" << std::endl;
	if (this != &src) {
		this->_type = src._type;
		*this->_Brain = *src._Brain;
	}
	return *this;
}

void	Dog::MakeSound(void) const {
	std::cout << this->GetType() << ": WOOOF WOOOF AU AU  rrrrrr" << std::endl;
}

const std::string Dog::getIdea(size_t i) const {
	if (i < 100)
		return(this->_Brain->getIdea(i));
	else
		return ("\033[33m 100 Ideas Per Brain\033[0m");
}

void	Dog::setIdea(size_t i, std::string idea) {
	if (i < 100)
		this->_Brain->setIdea(i, idea);
	else
		std::cout << "\033[33m Ideas Limited to 100 \033[0m" << std::endl;
}
