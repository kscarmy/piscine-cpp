/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:13:24 by guderram          #+#    #+#             */
/*   Updated: 2022/09/28 10:58:51 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void )
{
	// Fixed a;
	// Fixed const b( 10 );
	// Fixed const c( 42.42f );
	// Fixed const d( b );

	// a = Fixed( 1234.4321f );
	
	// if (a > c)
	// 	std::cout << "a > c" << std::endl;
	// if (a < c)
	// 	std::cout << "a < c" << std::endl;

	// if (a >= c)
	// 	std::cout << "a >= c" << std::endl;
	// if (a <= c)
	// 	std::cout << "a <= c" << std::endl;

	// if (a == c)
	// 	std::cout << "a == c" << std::endl;
	// if (a != c)
	// 	std::cout << "a != c" << std::endl;

	// Fixed a;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	// std::cout << a << std::endl;
	// std::cout << a + 3 << std::endl;
	// a = 20;
	// std::cout << ++a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a / 2 << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a / 5 << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << F

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	Fixed c = 2.5f;
	std::cout << c << std::endl;
	std::cout << c * 2 << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;


	return 0;
}
