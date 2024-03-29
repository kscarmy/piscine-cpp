#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat() : _type("WrongCat"){
	if (CALL) std::cout << "WrongCat DEFAULT CONSTRUCTOR" << std::endl;}

WrongCat::WrongCat( const WrongCat & src ): _type(src._type){
	if (CALL) std::cout << "WrongCat COPY CONSTRUCTOR" << std::endl;}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat(){
	if (CALL) std::cout << "WrongCat DEFAULT DESTRUCTOR" << std::endl;}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
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

	void	WrongCat::makeSound(void)	const{
		std::cout << _type << " sound like Meow" << std::endl;}

	std::string	WrongCat::getType(void)	const{
		return (this->_type);}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */