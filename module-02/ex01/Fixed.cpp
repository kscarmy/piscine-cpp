/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 08:40:09 by guderram          #+#    #+#             */
/*   Updated: 2022/09/04 15:39:53 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

const int 	Fixed::_bit = 8;

Fixed::Fixed(void) : _val(0){ std::cout << "Default constructor called" << std::endl; return ;}


Fixed::Fixed(const int val) : _val(val){ std::cout << "Int constructor called" << std::endl; return ;}



Fixed::Fixed(const Fixed &cpy) : _val(cpy._val) { std::cout << "Copy constructor called" << std::endl;
	*this = cpy; return ;}

Fixed::~Fixed(void){ std::cout << "Destructor called" << std::endl; return ;}

Fixed& Fixed::operator=(const Fixed &fixed){ std::cout << "Copy assignment operator called" << std::endl;
	_val = fixed.getRawBits(); return (*this); }

int		Fixed::getRawBits( void ) const{ std::cout << "getRawBits member function called" << std::endl; return (_val);}

void Fixed::setRawBits( int const raw ) { _val = raw; return ;}
