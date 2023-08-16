#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : _type("Dog"){
	if (CALL) std::cout << "Dog DEFAULT CONSTRUCTOR" << std::endl;}

Dog::Dog( const Dog & src ) : _type(src._type){
	if (CALL) std::cout << "Dog COPY CONSTRUCTOR" << std::endl;}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog(){
	if (CALL) std::cout << "Dog DEFAULT DESTRUCTOR" << std::endl;}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
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

	void	Dog::makeSound(void)	const{
		std::cout << _type << " sound like Woof" << std::endl;}
	
	std::string	Dog::getType(void)	const{
		return (this->_type);}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */