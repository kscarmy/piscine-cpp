#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 25, 5, "Idefix"){
	if (CALL){std::cout << "-- RobotomyRequestForm DEFAULT CONSTRUCTOR" << std::endl;}
}

RobotomyRequestForm::RobotomyRequestForm(const	std::string	Target) : AForm("RobotomyRequestForm", 25, 5, Target){
	if (CALL){std::cout << "-- RobotomyRequestForm MAIN CONSTRUCTOR" << std::endl;}
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : AForm(src){
	if (CALL){std::cout << "-- RobotomyRequestForm COPY CONSTRUCTOR" << std::endl;}
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm(){
	if (CALL){std::cout << "-- RobotomyRequestForm DEFAULT DESTRUCTOR" << std::endl;}
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

// RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
// {
// 	//if ( this != &rhs )
// 	//{
// 		//this->_value = rhs.getValue();
// 	//}
// 	return *this;
// }

// std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
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