#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : _type("Dog"){
	this->_oneBrain = new Brain();
	if (CALL) std::cout << "Dog DEFAULT CONSTRUCTOR" << std::endl;}

Dog::Dog( const Dog & src ) {
	*this = src; 
	if (CALL) std::cout << "Dog COPY CONSTRUCTOR" << std::endl;}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog(){
	delete this->_oneBrain;
	if (CALL) std::cout << "Dog DEFAULT DESTRUCTOR" << std::endl;}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog& Dog::operator=( const Dog& src )
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

	void	Dog::makeSound(void)	const{
		std::cout << _type << " sound like Woof" << std::endl;}
	
	std::string	Dog::getType(void)	const{
		return (this->_type);}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */