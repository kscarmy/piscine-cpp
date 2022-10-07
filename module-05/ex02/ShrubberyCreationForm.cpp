#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 25, 5, "Idefix"){
	if (CALL){std::cout << "-- ShrubberyCreationForm DEFAULT CONSTRUCTOR" << std::endl;}
}

ShrubberyCreationForm::ShrubberyCreationForm(const	std::string	Target) : AForm("ShrubberyCreationForm", 25, 5, Target){
	if (CALL){std::cout << "-- ShrubberyCreationForm MAIN CONSTRUCTOR" << std::endl;}
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : AForm(src){
	if (CALL){std::cout << "-- ShrubberyCreationForm COPY CONSTRUCTOR" << std::endl;}
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm(){
	if (CALL){std::cout << "-- ShrubberyCreationForm DEFAULT DESTRUCTOR" << std::endl;}
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

// ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
// {
// 	//if ( this != &rhs )
// 	//{
// 		//this->_value = rhs.getValue();
// 	//}
// 	return *this;
// }

// std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */