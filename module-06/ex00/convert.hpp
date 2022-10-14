#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <limits.h>
# include <stdlib.h>



/************************************/
/*			isSomeThing.cpp			*/
/************************************/

bool	isCharIn(std::string src, char c);
bool	findMeDigit(char c, std::string info);
bool	findMeOtherString(std::string src, bool flo);
bool	isChar(std::string str);
bool	isInt(std::string str);
bool	isFloat(std::string str);
bool	isDouble(std::string str);

/*	-----------------------------------	*/


#endif