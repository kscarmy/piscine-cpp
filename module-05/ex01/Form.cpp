#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : _Name("DEFAULT"), _isSign(false), _goSign(1), _Exec(1){
	if (CALL){std::cout << "-- Form DEFAULT CONSTRUCTOR" << std::endl;}
}

Form::Form(std::string Name, int goSign, int Exec) : _Name(Name), _isSign(false), _goSign(goSign), _Exec(Exec){
	try {
		if (goSign < 1 ) { _goSign = 1; throw Form::GradeTooHighException();}
		else	if (goSign > 150 ) { _goSign = 1; throw Form::GradeTooLowException();}
		else	{_goSign = goSign;}

		if (Exec < 1 ) { _Exec = 1; throw Form::GradeTooHighException();}
		else	if (Exec > 150 ) { _Exec = 1; throw Form::GradeTooLowException();}
		else	{_Exec = Exec;}
	}

	catch (const Form::GradeTooHighException& e){
		std::cout << e.what() << std::endl;
	}
	catch (const Form::GradeTooLowException& e){
		std::cout << e.what() << std::endl;
	}

	if (CALL){std::cout << "-- Form MAIN CONSTRUCTOR" << std::endl;}
}

Form::Form( const Form & src ) : _Name(src._Name), _isSign(src._isSign), _goSign(src._goSign), _Exec(src._Exec){
	if (CALL){std::cout << "-- Form COPY CONSTRUCTOR" << std::endl;}
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form(){
	if (CALL){std::cout << "-- Form DEFAULT DESTRUCTOR" << std::endl;}
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

// Form &				Form::operator=( Form const & rhs )
// {
// 	//if ( this != &rhs )
// 	//{
// 		//this->_value = rhs.getValue();
// 	//}
// 	return *this;
// }

// std::ostream &			operator<<( std::ostream & o, Form const & i )
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

/*
** --------------------------------- EXCEPTION ---------------------------------
*/

	const	char	*Form::GradeTooHighException::what() const	throw(){
		return ("Maximum grade is 1");
	}
	const	char	*Form::GradeTooLowException::what() const	throw(){
		return ("Minimum grade is 150");
	}

/* ************************************************************************** */