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

		Fixed	operator+(Fixed const &other) const;
		Fixed	operator-(Fixed const &other) const;
		Fixed	operator*(Fixed const &other) const;
		Fixed	operator/(Fixed const &other) const;

		bool	operator==(Fixed const &other) const;
		bool	operator!=(Fixed const &other) const;
		bool	operator<=(Fixed const &other) const;
		bool	operator>=(Fixed const &other) const;
		bool	operator<(Fixed const &other) const;
		bool	operator>(Fixed const &other) const;
		
		Fixed	&operator++(void);
		Fixed	&operator--(void);
		Fixed	operator++(int value);
		Fixed	operator--(int value);

		static const Fixed	&min(Fixed const &c1, Fixed const &c2);
		static const Fixed	&max(Fixed const &c1, Fixed const &c2);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr);
