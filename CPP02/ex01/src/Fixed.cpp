
#include "../includes/Fixed.hpp"

static	float baseToPower(float base, int exp) {
	float	res;

	if (!exp)
		return (1);
	if (exp < 0) {
		base = 1 / base;
		exp *= -1;
	}
	res = base;
	while (--exp) {
		res *= base;
	}
	return (res);
}

Fixed::Fixed(void): _value(0) {
	std::cout << "Default constructor called" << std::endl; 
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl; 
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed	&Fixed::operator=(const Fixed &other) {
	std::cout << "Coppy assignment Operator called" << std::endl;
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

Fixed::Fixed(const float nbr): _value(nbr * baseToPower(2, this->_frac)) {  
	std::cout << "Float constructor called" << std::endl; 
}

Fixed::Fixed(const int nbr): _value(nbr * baseToPower(2, this->_frac)) {  
	std::cout << "Int constructor called" << std::endl; 
} 

float	Fixed::toFloat(void) const {
	return (this->_value * baseToPower(2, -this->_frac));
}

int	Fixed::toInt(void) const {
	return (this->_value * baseToPower(2, -this->_frac));
}

std::ostream	&operator<<(std::ostream &str, Fixed const &nbr) {
	return (str << nbr.toFloat());
}
