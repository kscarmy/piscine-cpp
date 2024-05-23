#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : _Name("DEFAULT"), _isSign(false), _goSign(1), _Exec(1){
	if (CALL){std::cout << "-- Form DEFAULT CONSTRUCTOR" << std::endl;}
}

Form::Form(std::string const Name, int const goSign, int const Exec) : _Name(Name), _isSign(false), _goSign(goSign), _Exec(Exec)	{
	try {
		if (goSign < 1 )	{
			throw Form::GradeTooHighException();}
		else	if (goSign > 150 )	{
			throw Form::GradeTooLowException();}

		if (Exec < 1 )	{	
			throw Form::GradeTooHighException();}
		else	if (Exec > 150 )	{
			throw Form::GradeTooLowException();}
	}

	catch (const Form::GradeTooHighException& e)	{
		std::cout << e.what() << std::endl;
	}
	catch (const Form::GradeTooLowException& e)	{
		std::cout << e.what() << std::endl;
	}

	if (CALL)	{
		std::cout << "-- Form MAIN CONSTRUCTOR" << std::endl;}
}

Form::Form( const Form & src ) : _Name(src._Name), _isSign(src._isSign), _goSign(src._goSign), _Exec(src._Exec)	{
	if (CALL)	{
		std::cout << "-- Form COPY CONSTRUCTOR" << std::endl;}
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form(){
	if (CALL)	{
		std::cout << "-- Form DEFAULT DESTRUCTOR" << std::endl;}
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		// this->_value = rhs.getValue();
		this->_isSign = rhs._isSign;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << i.getName() << " Form is sign ? " << i.getisSign() << " need ";
	o << i.getgoSign() << " for sign and " << i.getExec() << " for execution !";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

	int	Form::beSigned(const Bureaucrat& src)	{
		try{
			if (src.getGrade() > this->getgoSign())	{
				throw Form::GradeTooLowException();}
			else	{
				this->_isSign = true;
				return (0);}
		}
		catch(const std::exception& e)	{
			std::cout << e.what() << std::endl;
		}
		return (1);
	}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

	std::string	Form::getName(void)	const{
		return (_Name);
	}

	bool		Form::getisSign(void)	const{
		return (_isSign);
	}

	int		Form::getgoSign(void)	const{
		return (_goSign);
	}

	int		Form::getExec(void)	const{
		return (_Exec);
	}

/*
** --------------------------------- EXCEPTION ---------------------------------
*/

	const	char	*Form::GradeTooHighException::what() const	throw(){
		return ("Maximum grade is not good");
	}
	const	char	*Form::GradeTooLowException::what() const	throw(){
		return ("Minimum grade is not good");
	}

/* ************************************************************************** */