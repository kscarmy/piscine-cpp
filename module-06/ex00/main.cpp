/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:13:24 by guderram          #+#    #+#             */
/*   Updated: 2022/10/14 15:41:23 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "convert.hpp"

int main( int argc, char **argv )
{
	if (argc != 2){	std::cout << "Le programme prend deux arguments" << std::endl; return 0;	}
	std::string str = argv[1];

	/***************************************/
	
	std::cout << "is char : " << isChar(str) << std::endl;
	std::cout << "is int : " << isInt(str) << std::endl;
	std::cout << "is float : " << isFloat(str) << std::endl;
	std::cout << "is double : " << isDouble(str) << std::endl;

	/***************************************/

	return 0;
}
