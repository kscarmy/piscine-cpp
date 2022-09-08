/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 08:40:09 by guderram          #+#    #+#             */
/*   Updated: 2022/09/08 17:07:59 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int	const	Fixed::_bit = 8;

Fixed::Fixed(void) : _val(0)
{ std::cout << "Default constructor called" <<  std::endl; return ;}


Fixed::Fixed(const int val) : _val((int)round(val * (1 << this->_bit)))
{ std::cout << "Int constructor called" << std::endl; return ;}

Fixed::Fixed(const float val) : _val((int)round(val * (1 << this->_bit)))
{ std::cout << "Float constructor called" << std::endl; return ; }

Fixed::Fixed(const Fixed &cpy) : _val(cpy._val)
{ std::cout << "Copy constructor called" << std::endl; *this = cpy; return ;}

Fixed::~Fixed(void)
{ std::cout << "Destructor called" << std::endl; return ;}


Fixed& Fixed::operator=(const Fixed &fixed)
{ std::cout << "Copy assignment operator called" << std::endl;
if (this != &fixed){ this->_val = fixed.getRawBits(); } return (*this); }


int		Fixed::getRawBits( void ) const
{ return (this->_val);}

void Fixed::setRawBits( int const raw )
{ this->_val = raw; return ;}


int Fixed::toInt( void ) const
{ return (this->_val >> this->_bit); }

float Fixed::toFloat( void ) const { return ((float)getRawBits() / (1 << this->_bit)); }




std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{ out << fixed.toFloat(); return (out); }


bool Fixed::operator>(const Fixed &fixed){
	std::cout << "op >" << std::endl;
	return (this->_val > fixed.getRawBits()); }

bool Fixed::operator<(const Fixed &fixed){
	std::cout << "op <" << std::endl;
	return (this->_val < fixed.getRawBits()); }


bool Fixed::operator>=(const Fixed &fixed){
	std::cout << "op >=" << std::endl;
	return (this->_val >= fixed.getRawBits()); }

bool Fixed::operator<=(const Fixed &fixed){
	std::cout << "op <=" << std::endl;
	return (this->_val <= fixed.getRawBits()); }

bool Fixed::operator==(const Fixed &fixed){
	std::cout << "op ==" << std::endl;
	return (this->_val == fixed.getRawBits()); }

bool Fixed::operator!=(const Fixed &fixed){
	std::cout << "op !=" << std::endl;
	return (this->_val != fixed.getRawBits()); }


Fixed Fixed::operator+(Fixed const &fixed){
	Fixed	ret;
	std::cout << "op +" << std::endl;
	ret.setRawBits(this->_val + fixed.getRawBits());
	return (ret); }

Fixed Fixed::operator-(Fixed const &fixed){
	Fixed	ret;
	std::cout << "op -" << std::endl;
	ret.setRawBits(this->_val - fixed.getRawBits());
	return (ret); }

Fixed Fixed::operator*(Fixed const &fixed){
	Fixed	ret;
	std::cout << "op *" << std::endl;
	ret.setRawBits((this->getRawBits() >> this->_bit) * fixed.getRawBits());
	return (ret); }

Fixed Fixed::operator/(Fixed const &fixed){
	Fixed	ret;
	std::cout << "op /" << std::endl;
	ret.setRawBits((this->getRawBits() << this->_bit) / fixed.getRawBits());
	return (ret); }


Fixed	&Fixed::operator++(void)
	{ _val += 1; return (*this) ;}

Fixed	Fixed::operator++(int)
	{ Fixed Ret(*this); _val += 1; return (Ret) ;}
