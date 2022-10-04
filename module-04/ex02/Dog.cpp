#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : _type("Dog"){
	_oneBrain = new Brain();
	if (CALL) std::cout << "Dog DEFAULT CONSTRUCTOR" << std::endl;}

Dog::Dog( const Dog & src ) : _type(src._type), _oneBrain(src._oneBrain){
	if (CALL) std::cout << "Dog COPY CONSTRUCTOR" << std::endl;}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog(){
	delete _oneBrain;
	if (CALL) std::cout << "Dog DEFAULT DESTRUCTOR" << std::endl;}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

// Dog &				Dog::operator=( Dog const & rhs )
// {
// 	//if ( this != &rhs )
// 	//{
// 		//this->_value = rhs.getValue();
// 	//}
// 	return *this;
// }

// std::ostream &			operator<<( std::ostream & o, Dog const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


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