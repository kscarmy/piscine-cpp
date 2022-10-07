#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() : _Name("DEFAULT"), _Grade(150){
	if (CALL){std::cout << "-- Bureaucrat DEFAULT CONSTRUCTOR" << std::endl;}
}

Bureaucrat::Bureaucrat(std::string	Name, int Grade) : _Name(Name){
	try {
		if (Grade < 1 ) { _Grade = 150; throw Bureaucrat::GradeTooHighException();}
		else	if (Grade > 150 ) { _Grade = 150; throw Bureaucrat::GradeTooLowException();}
		else	{_Grade = Grade;}
	}
	catch (const Bureaucrat::GradeTooHighException& e){
		std::cout << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException& e){
		std::cout << e.what() << std::endl;
	}
	if (CALL){std::cout << "-- Bureaucrat MAIN CONSTRUCTOR" << std::endl;}
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) : _Name(src._Name), _Grade(src._Grade){
	if (CALL){std::cout << "-- Bureaucrat COPY CONSTRUCTOR" << std::endl;}
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat(){
	if (CALL){std::cout << "-- Bureaucrat DEFAULT DESTRUCTOR" << std::endl;}
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

// Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
// {
// 	//if ( this != &rhs )
// 	//{
// 		//this->_value = rhs.getValue();
// 	//}
// 	return *this;
// }

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o <<  i.getName() << " bureaucrat has " << i.getGrade() << " grade";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/



	void		Bureaucrat::increment(void){
		try {
			if (_Grade - 1 < 1) {throw Bureaucrat::GradeTooHighException();}
			else	{_Grade -= 1;}
		}
		catch (const Bureaucrat::GradeTooHighException& e){
			std::cout << e.what() << std::endl;
		}
		catch (const Bureaucrat::GradeTooLowException& e){
			std::cout << e.what() << std::endl;
		}
	}

	void		Bureaucrat::decrement(void){
		try {
			if (_Grade + 1 > 150) {throw Bureaucrat::GradeTooLowException();}
			else	{_Grade += 1;}
		}
		catch (const Bureaucrat::GradeTooHighException& e){
			std::cout << e.what() << std::endl;
		}
		catch (const Bureaucrat::GradeTooLowException& e){
			std::cout << e.what() << std::endl;
		}
	}

	void		Bureaucrat::signForm(AForm &src){	
		if (src.beSigned(*this) == 1) {
			std::cout << this->getName() << " couldn't sign " << src.getName() << " because ";
			std::cout << this->getName() << " is grade " << this->getGrade() << " and grade ";
			std::cout << src.getgoSign() << " is required" << std::endl;
		}
		else {std::cout << this->getName() << " signed " << src.getName() << std::endl;}
	}

	void		Bureaucrat::executeForm(AForm const & form){
		try{
			if (form.getisSign() != true) { throw AForm::FormNotSigned(); }
			else	if (form.getExec() > this->getGrade()) { throw AForm::GradeTooLowException(); }
			// else	{ form. ;}
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

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

	std::string	Bureaucrat::getName(void)	const{
		return (_Name);
	}

	int			Bureaucrat::getGrade(void)	const{
		return (_Grade);
	}

/*
** --------------------------------- EXCEPTION ---------------------------------
*/

	const	char	*Bureaucrat::GradeTooHighException::what() const	throw(){
		return ("Maximum grade is 1");
	}
	const	char	*Bureaucrat::GradeTooLowException::what() const	throw(){
		return ("Minimum grade is 150");
	}

/* ************************************************************************** */