#pragma once

#include <iostream>
# include <cmath>

class	Fixed
{
	private:
		int					_value;
		static const int	_frac = 8;

	public:
		Fixed(void);
		Fixed(const int nbr);
		Fixed(const float nbr);
		~Fixed(void);
		Fixed(Fixed const &copy);
		Fixed	&operator=(Fixed const &other);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr);
