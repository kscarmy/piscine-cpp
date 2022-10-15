/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isSomeThing.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:13:24 by guderram          #+#    #+#             */
/*   Updated: 2022/10/15 15:53:17 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "convert.hpp"

/****************************/
/*			Utils			*/
/****************************/

bool	findStr(std::string src, std::string str){
	std::size_t found = src.find(str);
	if (found != std::string::npos && (found + str.size()) == src.size())
		return true;
	return false;
}

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

/****************************/
/*			Char			*/
/****************************/

bool	isChar(std::string str){
	if (str.size() != 1)
		return (false);
	if (str[0] <= 31)
		return (false);
	if (str[0] >= 127)
		return (false);
	return true;
}

/****************************/
/*			Int				*/
/****************************/

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

/****************************/
/*			Float			*/
/****************************/

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

/****************************/
/*			Doubles			*/
/****************************/

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
