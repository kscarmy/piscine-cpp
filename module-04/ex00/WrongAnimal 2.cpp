#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal() : _type("WrongAnimal"){
	if (CALL) std::cout << "WrongAnimal DEFAULT CONSTRUCTOR" << std::endl;}

WrongAnimal::WrongAnimal( const WrongAnimal & src ) : _type(src._type){
	if (CALL) std::cout << "WrongAnimal COPY CONSTRUCTOR" << std::endl;}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal(){
	if (CALL) std::cout << "WrongAnimal DEFAULT DESTRUCTOR" << std::endl;}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &				WrongAnimal::operator=( WrongAnimal const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs._type;
	}
	return *this;
}




/*
** --------------------------------- METHODS ----------------------------------
*/

	void	WrongAnimal::makeSound(void)	const{
		std::cout << _type << " sound 'Inauduble'" << std::endl;}

	std::string	WrongAnimal::getType(void)	const{
		return (this->_type);}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */