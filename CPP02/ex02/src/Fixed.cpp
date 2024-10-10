
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

/* Aditions to 2.0 */

Fixed	Fixed::operator+(Fixed const &other) const {
	Fixed	result(this->toFloat() + other.toFloat());
	return (result);
}

Fixed	Fixed::operator-(Fixed const &other) const {
	Fixed	result(this->toFloat() - other.toFloat());
	return (result);
}

Fixed	Fixed::operator*(Fixed const &other) const {
	Fixed	result(this->toFloat() * other.toFloat());
	return (result);
}

Fixed	Fixed::operator/(Fixed const &other) const {
	Fixed	result(this->toFloat() / other.toFloat());
	return (result);
}

bool	Fixed::operator==(const Fixed &other) const {
	return (this->toFloat() == other.toFloat());
}

bool	Fixed::operator!=(const Fixed &other) const {
	return (this->toFloat() != other.toFloat());
}

bool	Fixed::operator<=(const Fixed &other) const {
	return (this->toFloat() <= other.toFloat());
}

bool	Fixed::operator>=(const Fixed &other) const {
	return (this->toFloat() >= other.toFloat());
}

bool	Fixed::operator<(const Fixed &other) const {
	return (this->toFloat() < other.toFloat());
}

bool	Fixed::operator>(const Fixed &other) const {
	return (this->toFloat() > other.toFloat());
}

Fixed	&Fixed::operator++(void) {
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed	&Fixed::operator--(void) {
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed	Fixed::operator++(int value) {
	Fixed	res;
	res = *this;
	if (!value)
		value = 1;
	this->setRawBits(this->getRawBits() + value);
	return (res);
}

Fixed	Fixed::operator--(int value) {
	Fixed	res;
	res = *this;
	if (!value)
		value = 1;
	this->setRawBits(this->getRawBits() - value);
	return (res);
}

const Fixed	&Fixed::min(Fixed const &c1, Fixed const &c2) {
	if (c1 < c2)
		return (c1);
	return (c2);
}

const Fixed	&Fixed::max(Fixed const &c1, Fixed const &c2) {
	if (c1 > c2)
		return (c1);
	return (c2);
}
