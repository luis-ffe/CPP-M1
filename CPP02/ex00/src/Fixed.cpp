
#include "../includes/Fixed.hpp"


Fixed::Fixed(void): _value(0) {
	std::cout << "Default Constructor Called" << std::endl; 
}

Fixed::~Fixed(void) {
	std::cout << "Destroyed Fixed Object" << std::endl; 
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy Constructor" << std::endl;
	*this = copy;
}

Fixed	&Fixed::operator=(const Fixed &other) {
	std::cout << "Coppy Assignment Operator called" << std::endl;
    if (this == &other)
        return *this;

	this->_value = other.getRawBits();

    return (*this);
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(const int raw) {
	this->_value = raw;
}
