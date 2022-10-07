#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AForm::AForm() : _Name("DEFAULT"), _isSign(false), _goSign(1), _Exec(1), _Target("Idefix"){
	if (CALL){std::cout << "-- Form DEFAULT CONSTRUCTOR" << std::endl;}
}

AForm::AForm(std::string Name, int goSign, int Exec, std::string Target) : _Name(Name), _isSign(false), _goSign(goSign), _Exec(Exec), _Target(Target){
	try {
		if (goSign < 1 ) { _goSign = 1; throw AForm::GradeTooHighException();}
		else	if (goSign > 150 ) { _goSign = 1; throw AForm::GradeTooLowException();}
		else	{_goSign = goSign;}

		if (Exec < 1 ) { _Exec = 1; throw AForm::GradeTooHighException();}
		else	if (Exec > 150 ) { _Exec = 1; throw AForm::GradeTooLowException();}
		else	{_Exec = Exec;}
	}

	catch (const AForm::GradeTooHighException& e){
		std::cout << e.what() << std::endl;
	}
	catch (const AForm::GradeTooLowException& e){
		std::cout << e.what() << std::endl;
	}

	if (CALL){std::cout << "-- Form MAIN CONSTRUCTOR" << std::endl;}
}

AForm::AForm( const AForm & src ) : _Name(src._Name), _isSign(src._isSign), _goSign(src._goSign), _Exec(src._Exec), _Target(src._Target){
	if (CALL){std::cout << "-- AForm COPY CONSTRUCTOR" << std::endl;}
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AForm::~AForm(){
	if (CALL){std::cout << "-- Form DEFAULT DESTRUCTOR" << std::endl;}
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

// Form &				AForm::operator=( Form const & rhs )
// {
// 	//if ( this != &rhs )
// 	//{
// 		//this->_value = rhs.getValue();
// 	//}
// 	return *this;
// }

std::ostream &			operator<<( std::ostream & o, AForm const & i )
{
	o << i.getName() << " Form is sign ? " << i.getisSign() << " need ";
	o << i.getgoSign() << " for sign and " << i.getExec() << " for execution !";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

	int	AForm::beSigned(const Bureaucrat& src){
		try{
			if (src.getGrade() > this->getgoSign()) {throw AForm::GradeTooLowException();}
			else	{this->_isSign = true; std::cout << src.getName() << " has signed " << this->getName() << std::endl; return (0);}
		}
		catch(const std::exception& e){
			std::cout << e.what() << std::endl;
		}
		return (1);
	}

	void	AForm::execute(Bureaucrat const & executor)	const{
	try{
		// std::cout << this->getExec() << " exec " << executor.getGrade() << " grade" << std::endl;
		if (this->getisSign() != true) { throw AForm::FormNotSigned(); }
		else	if (this->getExec() < executor.getGrade()) {  throw AForm::GradeTooLowException(); }
		else	{this->andAction();}
	}

	catch (const AForm::GradeTooHighException& e){
		std::cout << e.what() << std::endl;
	}
	catch (const AForm::GradeTooLowException& e){
		std::cout << e.what() << std::endl;
	}
	catch (const AForm::FormNotSigned& e){
		std::cout << e.what() << std::endl;
	}
}

	void	AForm::andAction(void)	const{
		return ;
	}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

	std::string	AForm::getName(void)	const{
		return (_Name);
	}

	bool		AForm::getisSign(void)	const{
		return (_isSign);
	}

	int		AForm::getgoSign(void)	const{
		return (_goSign);
	}

	int		AForm::getExec(void)	const{
		return (_Exec);
	}

	std::string	AForm::getTarget(void)	const{
		return (_Target);
	}

/*
** --------------------------------- EXCEPTION ---------------------------------
*/

	const	char	*AForm::GradeTooHighException::what() const	throw(){
		return ("Maximum grade is not good");
	}
	const	char	*AForm::GradeTooLowException::what() const	throw(){
		return ("Minimum grade is not good");
	}
	const	char	*AForm::FormNotSigned::what() const	throw(){
		return ("This Form is not signed before Executed !");
	}

/* ************************************************************************** */