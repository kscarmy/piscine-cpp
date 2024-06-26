#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() : _type("Cat"){
	_oneBrain = new Brain();
	if (CALL) std::cout << "Cat DEFAULT CONSTRUCTOR" << std::endl;}

Cat::Cat( const Cat & src ): _type(src._type), _oneBrain(src._oneBrain){
	if (CALL) std::cout << "Cat COPY CONSTRUCTOR" << std::endl;}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat(){
	delete _oneBrain;
	if (CALL) std::cout << "Cat DEFAULT DESTRUCTOR" << std::endl;}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs._type;
		this->_oneBrain = rhs._oneBrain;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

	void	Cat::makeSound(void)	const{
		std::cout << _type << " sound like Meow" << std::endl;}

	std::string	Cat::getType(void)	const{
		return (this->_type);}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */