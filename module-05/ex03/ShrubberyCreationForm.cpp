#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137, "Idefix"){
	if (CALL){std::cout << "-- ShrubberyCreationForm DEFAULT CONSTRUCTOR" << std::endl;}
}

ShrubberyCreationForm::ShrubberyCreationForm(const	std::string	Target) : AForm("ShrubberyCreationForm", 145, 137, Target){
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

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	AForm::operator=(rhs);
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i )
{
	//o << "Value = " << i.getValue();
	(void)i;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	ShrubberyCreationForm::andAction(void)	const{

	std::string F_Arg = this->getTarget() + "_shrubbery";
	std::ofstream ret (F_Arg.c_str());
	ret << "       _-_        " << "       _-_        " << std::endl;
	ret << "    /~~   ~~\\    " << "    /~~   ~~\\    " << std::endl;
	ret << " /~~         ~~\\ " << " /~~         ~~\\ " << std::endl;
	ret << "{               } " << "{               } " << std::endl;
	ret << " \\  _-     -_  / " << " \\  _-     -_  / " << std::endl;
	ret << "   ~  \\ //  ~    " << "   ~  \\ //  ~    " << std::endl;
	ret << "_- -   | | _- _   " << "_- -   | | _- _   " << std::endl;
	ret << "  _ -  | |   -_   " << "  _ -  | |   -_   " << std::endl;
	ret << "      // \\       " << "      // \\       " << std::endl;
	ret.close();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */