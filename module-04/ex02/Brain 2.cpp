#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain(){
	if (CALL) std::cout << "Brain DEFAULT CONSTRUCTOR" << std::endl;
	for (int i=0; i<100;i++){
		_ideas[i] = "i have no idea";}
}

Brain::Brain( const Brain & src ){
	if (CALL) std::cout << "Brain COPY CONSTRUCTOR" << std::endl;
	for (int i=0; i<100;i++){
		_ideas[i] = src._ideas[i];}
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain(){
	if (CALL) std::cout << "Brain DEFAULT DESTRUCTOR" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	if ( this != &rhs )
	{
		for (int i=0; i<100;i++){
			_ideas[i] = rhs._ideas[i];}
	}
	return *this;
}




/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */