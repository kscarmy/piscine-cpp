/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 08:40:14 by guderram          #+#    #+#             */
/*   Updated: 2022/09/29 10:09:06 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

#ifndef FIXED_HPP
# define FIXED_HPP

# define CALL 0

class Fixed
{
	public:
	Fixed(void);
	Fixed(const int val);
	Fixed(const float val);
	Fixed(const Fixed &cpy);
	~Fixed(void);

	Fixed		&operator=(Fixed const &fixed);

	int			getRawBits( void ) const;
	void		setRawBits( int const raw );

	int toInt( void ) const;
	float toFloat( void ) const;



	bool operator>(Fixed const &fixed) const;
	bool operator<(Fixed const &fixed) const;

	bool operator>=(Fixed const &fixed) const;
	bool operator<=(Fixed const &fixed) const;

	bool operator==(Fixed const &fixed) const;
	bool operator!=(Fixed const &fixed) const;

	Fixed operator+(Fixed const &fixed) const;
	Fixed operator-(Fixed const &fixed) const;
	Fixed operator*(Fixed const &fixed) const;
	Fixed operator/(Fixed const &fixed) const;

	Fixed	&operator++(void);
	Fixed	operator++(int);

	Fixed	&operator--(void);
	Fixed	operator--(int);
	

	static Fixed	&min(Fixed &a, Fixed &b);
	static const Fixed	&min(Fixed const &a, Fixed const &b);

	static Fixed	&max(Fixed &a, Fixed &b);
	static const Fixed	&max(Fixed const &a, Fixed const &b);

	private:
	int			_val;
	static int	const	_bit;
};

std::ostream &operator<<(std::ostream &out, Fixed const &fixed);


#endif
