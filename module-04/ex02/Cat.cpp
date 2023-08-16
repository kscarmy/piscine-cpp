#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() : _type("Cat"){
	_oneBrain = new Brain();
	if (CALL) std::cout << "Cat DEFAULT CONSTRUCTOR" << std::endl;}

Cat::Cat( const Cat & src ) {
	*this = src;
	if (CALL) std::cout << "Cat COPY CONSTRUCTOR" << std::endl;}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat(){
	if (_oneBrain)
		delete _oneBrain;
	if (CALL) std::cout << "Cat DEFAULT DESTRUCTOR" << std::endl;}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat& Cat::operator=( const Cat& src )
{
    if (this != &src)
    {
        this->_type = src._type;
        this->_oneBrain = new Brain( *src._oneBrain );
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