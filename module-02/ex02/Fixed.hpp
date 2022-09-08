/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 08:40:14 by guderram          #+#    #+#             */
/*   Updated: 2022/09/08 17:06:42 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

#ifndef FIXED_HPP
# define FIXED_HPP

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



	bool operator>(Fixed const &fixed);
	bool operator<(Fixed const &fixed);

	bool operator>=(Fixed const &fixed);
	bool operator<=(Fixed const &fixed);

	bool operator==(Fixed const &fixed);
	bool operator!=(Fixed const &fixed);

	Fixed operator+(Fixed const &fixed);
	Fixed operator-(Fixed const &fixed);
	Fixed operator*(Fixed const &fixed);
	Fixed operator/(Fixed const &fixed);

	Fixed	&operator++(void);
	Fixed	operator++(int);
	
	private:
	int			_val;
	static int	const	_bit;
};

std::ostream &operator<<(std::ostream &out, Fixed const &fixed);


#endif
