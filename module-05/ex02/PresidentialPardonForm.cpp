#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5, "Idefix"){
	if (CALL){std::cout << "-- PresidentialPardonForm DEFAULT CONSTRUCTOR" << std::endl;}
}

PresidentialPardonForm::PresidentialPardonForm(const	std::string	Target) : AForm("PresidentialPardonForm", 25, 5, Target){
	if (CALL){std::cout << "-- PresidentialPardonForm MAIN CONSTRUCTOR" << std::endl;}
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) : AForm(src){
	if (CALL){std::cout << "-- PresidentialPardonForm COPY CONSTRUCTOR" << std::endl;}
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm(){
	if (CALL){std::cout << "-- PresidentialPardonForm DEFAULT DESTRUCTOR" << std::endl;}
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

// PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
// {
// 	//if ( this != &rhs )
// 	//{
// 		//this->_value = rhs.getValue();
// 	//}
// 	return *this;
// }

// std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i )
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