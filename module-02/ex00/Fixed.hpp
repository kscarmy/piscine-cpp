/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 08:40:14 by guderram          #+#    #+#             */
/*   Updated: 2022/09/04 10:05:40 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	public:
	Fixed(void);
	Fixed(const Fixed &cpy);
	~Fixed(void);

	Fixed		&operator=(const Fixed &fixed);
	int			getRawBits( void ) const;
	void		setRawBits( int const raw );

	private:
	int			_val;
	static const int		_bit;
};

#endif
