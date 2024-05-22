#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern() : _NameForm("DEFAULT"), _TargetForm("DEFAULT"){
	if (CALL){std::cout << "-- Intern DEFAULT CONSTRUCTOR" << std::endl;}
}

Intern::Intern(std::string NameForm, std::string TargetForm) : _NameForm(NameForm), _TargetForm(TargetForm){
	if (CALL){std::cout << "-- Intern DEFAULT CONSTRUCTOR" << std::endl;}
}

Intern::Intern( const Intern & src ) : _NameForm(src.getNameForm()), _TargetForm(src.getTargetForm()){
	if (CALL){std::cout << "-- Intern COPY CONSTRUCTOR" << std::endl;}
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern(){
	if (CALL){std::cout << "-- Intern DEFAULT DESTRUCTOR" << std::endl;}
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	if ( this != &rhs )
	{
		// this->_value = rhs.getValue();
		this->_NameForm = rhs._NameForm;
		this->_TargetForm = rhs._TargetForm;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Intern const & i )
{
	//o << "Value = " << i.getValue();
	o << i.getNameForm() << " intern has " << i.getTargetForm() << " target";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

int		findForm(std::string NameForm)
{
	std::string str [3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for (int i = 0; i < 3; i++)
	{
		if (str[i].compare(NameForm) == 0) {return (i);}
	}
	// std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	return (4);
}

AForm	*Intern::makeForm(std::string NameForm, std::string TargetForm){

	AForm	*ret(NULL);
	switch (findForm(NameForm))
	{
		case 0:
			ret = new ShrubberyCreationForm(TargetForm);
			break;
		case 1:
			ret = new RobotomyRequestForm(TargetForm);
			break;
		case 2:
			ret = new PresidentialPardonForm(TargetForm);
			break;
		case 4:
			ret = NULL;
			try {
				throw Intern::InvalidFormTypeName();	}
			catch(const std::exception& e){
				std::cout << e.what() << std::endl;		}
			return (ret);
	}
	std::cout << "Intern create " << NameForm << std::endl;
	return (ret);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Intern::getNameForm(void)	const{
	return (_NameForm);
}

std::string	Intern::getTargetForm(void)	const{
	return (_TargetForm);
}

/*
** --------------------------------- EXCEPTION ---------------------------------
*/

	const	char	*Intern::InvalidFormTypeName::what() const	throw(){
		return ("Name form is invalid !");
	}
/* ************************************************************************** */