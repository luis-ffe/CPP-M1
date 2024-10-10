
#include "../includes/Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;

    // std::cout <<"\nTeste 1: Print All" << std::endl;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

    // std::cout <<"\nSet raw to 42 in A" << std::endl;
    // a.setRawBits(42);

    // std::cout <<"\nTest 2: Print all:" << std::endl;
	// std::cout << a.getRawBits() << std::endl;
	// std::cout << b.getRawBits() << std::endl;
	// std::cout << c.getRawBits() << std::endl;

    // std::cout <<"\nUse Operator c = b = a" << std::endl;

    // c = b = a;

    // std::cout <<"\nTest 3: Print all:" << std::endl;
	// std::cout << a.getRawBits() << std::endl;
	// std::cout << b.getRawBits() << std::endl;
	// std::cout << c.getRawBits() << std::endl;

    // Fixed d(a);
    // std::cout <<"\nTest 4: Print d created from a &copy constructor:" << std::endl;
	// std::cout << d.getRawBits() << std::endl;

	return (0);
}
