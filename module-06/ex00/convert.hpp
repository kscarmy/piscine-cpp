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


/************************************/
/*			char.cpp				*/
/************************************/

void	printChar(char c, std::string str);
void	goChar(std::string str);


/************************************/
/*			int.cpp					*/
/************************************/

void	printInt(int i, std::string str);
void	goInt(std::string str);


/************************************/
/*			float.cpp				*/
/************************************/

void	printFloat(float f, std::string str);
void	goFloat(std::string str);


/************************************/
/*			double.cpp				*/
/************************************/

void	printDouble(double d, std::string str);
void	goDouble(std::string str);


#endif