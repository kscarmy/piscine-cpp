#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5, "Idefix"){
	if (CALL)	{
		std::cout << "-- PresidentialPardonForm DEFAULT CONSTRUCTOR" << std::endl;}
}

PresidentialPardonForm::PresidentialPardonForm(const	std::string	Target) : AForm("PresidentialPardonForm", 25, 5, Target){
	if (CALL)	{
		std::cout << "-- PresidentialPardonForm MAIN CONSTRUCTOR" << std::endl;}
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) : AForm(src){
	if (CALL)	{
		std::cout << "-- PresidentialPardonForm COPY CONSTRUCTOR" << std::endl;}
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm(){
	if (CALL)	{
		std::cout << "-- PresidentialPardonForm DEFAULT DESTRUCTOR" << std::endl;}
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	AForm::operator=(rhs);
	return *this;
}

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i )
{
	//o << "Value = " << i.getValue();
	(void)i;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	PresidentialPardonForm::andAction(void)	const{
	std::cout << this->getTarget() << " has been pardonned by Zaphod Beeblebrox ! (H2G2)" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */