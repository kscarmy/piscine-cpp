#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45, "Idefix"){
	if (CALL)	{
		std::cout << "-- RobotomyRequestForm DEFAULT CONSTRUCTOR" << std::endl;}
}

RobotomyRequestForm::RobotomyRequestForm(const	std::string	Target) : AForm("RobotomyRequestForm", 72, 45, Target){
	if (CALL)	{
		std::cout << "-- RobotomyRequestForm MAIN CONSTRUCTOR" << std::endl;}
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : AForm(src){
	if (CALL)	{
		std::cout << "-- RobotomyRequestForm COPY CONSTRUCTOR" << std::endl;}
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm(){
	if (CALL)	{
		std::cout << "-- RobotomyRequestForm DEFAULT DESTRUCTOR" << std::endl;}
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	AForm::operator=(rhs);
	return *this;
}

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
{
	//o << "Value = " << i.getValue();
	(void)i;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	RobotomyRequestForm::andAction(void)	const{
	std::cout << "'VRRRRRRRRrrrrrr VRRRRRRRRrrrrrr VRRRRRRRRrrrrrr'" << std::endl;
	std::cout << "'VRRRRRRRRrrrrrr VRRRRRRRRrrrrrr VRRRRRRRRrrrrrr'" << std::endl;
	srand(time(0));
	int i = rand();
	// std::cout << i << " " << i % 2 << std::endl;
	if (i % 2 == 0){
		std::cout << this->getTarget() << " has been Robotomysed !!!" << std::endl;
	}
	else{
		std::cout <<  "Robotomy on " << this->getTarget() << " has fail !!!" << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */