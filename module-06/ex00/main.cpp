/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:13:24 by guderram          #+#    #+#             */
/*   Updated: 2022/10/13 19:13:37 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <limits.h>


bool	isChar(std::string str){
	if (str.size() != 1)
		return (false);
	if (str[0] <= 31)
		return (false);
	if (str[0] >= 127)
		return (false);
	return true;
}

bool	isInt(std::string str){
	for (unsigned long i=0; i < str.size(); i++){
		if (i == 0 && str[i] == '-') {i++;}
		if (str[i] < 48)
			return false;
		if (str[i] > 57)
			return false;
	}
	if (std::stoi(str, nullptr, 10) > INT_MAX)
		return false;
	if (std::stoi(str, nullptr, 10) < INT_MIN)
		return false;
	return true;
}

int main( int argc, char **argv )
{
	if (argc != 2){
		std::cout << "Le programme prend deux arguments" << std::endl; return 0;
	}
	std::string str = argv[1];
	std::cout << "is char : " << isChar(str) << std::endl;
	std::cout << "is int : " << isInt(str) << std::endl;
	// argv = NULL;
	/***************************************/

	return 0;
}
