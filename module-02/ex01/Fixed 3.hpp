/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 08:40:14 by guderram          #+#    #+#             */
/*   Updated: 2023/03/17 14:52:09 by guderram         ###   ########.fr       */
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

	private:
	int			_val;
	static int	const	_bit;
};

std::ostream &operator<<(std::ostream &out, Fixed const &fixed);

// std::ostream &operator>(std::ostream &out, Fixed const &fixed);

#endif
