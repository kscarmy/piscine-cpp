/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:13:24 by guderram          #+#    #+#             */
/*   Updated: 2022/10/14 15:13:35 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <limits.h>
# include <stdlib.h>


bool	isCharIn(std::string src, char c){
	int nbr = 0;
	for (unsigned long i=0; i < src.size(); i++){
		if (src[i] == c)
			nbr++;
	}
	if (nbr == 1)
		return true;
	return false;
}

bool	findMeDigit(char c, std::string info){
	std::string str = "1234567890-" + info;
	for (unsigned long i=0; i < str.size(); i++){
		if (str[i] == c)
			return true;
	}
	return false;
}

bool	findMeOtherString(std::string src, bool flo){
	std::string infp = flo ? "+inff" : "+inf";
	std::string infm = flo ? "-inff" : "-inf";
	std::string nan = flo ? "nanf" : "nan";
	if (src == infp || src == infm || src == nan)
		return true;
	return false;
}

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
		if (!findMeDigit(str[i], ""))
			return false;
	}
	if (std::atol(str.c_str()) > INT_MAX)
		return false;
	if (std::atol(str.c_str()) < INT_MIN)
		return false;
	return true;
}

bool	isFloat(std::string str){
	if (findMeOtherString(str, true))
		return true;
	for (unsigned long i=0; i < str.size(); i++){
		if (!findMeDigit(str[i], ".f"))
			return false;
	}
	if (!isCharIn(str, '.'))
		return false;
	if (!isCharIn(str, 'f'))
		return false;
	if (std::atof(str.c_str()) > __FLT_MAX__)
		return false;
	if (std::atof(str.c_str()) < __FLT_MIN__)
		return false;
	return true;
}

bool	isDouble(std::string str){
	if (findMeOtherString(str, false))
		return true;
	for (unsigned long i=0; i < str.size(); i++){
		if (!findMeDigit(str[i], "."))
			return false;
	}
	if (!isCharIn(str, '.'))
		return false;
	if (std::atof(str.c_str()) > __DBL_MAX__)
		return false;
	if (std::atof(str.c_str()) < __DBL_MIN__)
		return false;
	return true;
}

int main( int argc, char **argv )
{
	// std::cout << "min : " << __FLT_MIN__ << " max : " << __FLT_MAX__ << std::endl;
	if (argc != 2){
		std::cout << "Le programme prend deux arguments" << std::endl; return 0;
	}
	std::string str = argv[1];
	std::cout << "is char : " << isChar(str) << std::endl;
	std::cout << "is int : " << isInt(str) << std::endl;
	std::cout << "is float : " << isFloat(str) << std::endl;
	std::cout << "is double : " << isDouble(str) << std::endl;
	// argv = NULL;
	/***************************************/

	return 0;
}