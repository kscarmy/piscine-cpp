/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:13:24 by guderram          #+#    #+#             */
/*   Updated: 2022/10/14 18:14:06 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "convert.hpp"

int main( int argc, char **argv )
{
	if (argc != 2){	std::cout << "Le programme prend deux arguments" << std::endl; return 1;	}
	std::string str = argv[1];


	/***************************************/
	/*	securite	*/

	int	ret = 0;
	if (isChar(str)) {		ret++;	}
	if (isInt(str)) {		ret++;	}
	if (isFloat(str)) {		ret++;	}
	if (isDouble(str)) {	ret++;	}
	if (ret == 0) {			return 1;	}

	/***************************************/
	/*	Detection Type	*/
	std::cout << "is char : " << isChar(str) << std::endl;
	std::cout << "is int : " << isInt(str) << std::endl;
	std::cout << "is float : " << isFloat(str) << std::endl;
	std::cout << "is double : " << isDouble(str) << std::endl;

	/***************************************/

	
	/*	First Conv	*/
	// char	c;
	// int		i;
	// float	f;
	// double	d;

	// d = std::atof(str.c_str());
	
	// char c = 0;


	// std::cout << c << std::endl;

	if (isChar(str))
		goChar(str);
	else if (isInt(str))
		goInt(str);
	if (isFloat(str))
		goFloat(str);
	if (isDouble(str))
		goDouble(str);

	return 0;
}
