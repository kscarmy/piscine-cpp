#include "ScalarConverter.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter( const ScalarConverter & src )
{
	ScalarConverter::operator=(src);
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScalarConverter::~ScalarConverter()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScalarConverter &				ScalarConverter::operator=( ScalarConverter const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	// ScalarConverter::operator=(rhs);
	(void)rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ScalarConverter const & i )
{
	//o << "Value = " << i.getValue();
	(void)i;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void ScalarConverter::convert(std::string str)
{
	/***************************************/
	/*	securite	*/

	int	ret = 0;
	if (isChar(str)) {		ret++;	}
	if (isInt(str)) {		ret++;	}
	if (isFloat(str)) {		ret++;	}
	if (isDouble(str)) {	ret++;	}
	if (ret == 0) {			return ;	}

	/***************************************/
	/*	Detection Type	*/
	
	std::cout << "is char : " << isChar(str) << std::endl;
	std::cout << "is int : " << isInt(str) << std::endl;
	std::cout << "is float : " << isFloat(str) << std::endl;
	std::cout << "is double : " << isDouble(str) << std::endl;

	/***************************************/
	/*	First Conv	*/

	if (isChar(str))
		goChar(str);
	else if (isInt(str))
		goInt(str);
	if (isFloat(str))
		goFloat(str);
	if (isDouble(str))
		goDouble(str);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */