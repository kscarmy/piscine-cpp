#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal() : _type("Animal")
{
	if (CALL)
		std::cout << "Animal DEFAULT CONSTRUCTOR" << std::endl;
}

Animal::Animal( const Animal & src ) : _type(src._type)
{
	if (CALL)
		std::cout << "Animal COPY CONSTRUCTOR" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	if (CALL)
		std::cout << "Animal DEFAULT DESTRUCTOR" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

// Animal &				Animal::operator=( Animal const & rhs )
// {
// 	// rhs;
// 	//if ( this != &rhs )
// 	//{
// 		//this->_value = rhs.getValue();
// 	//}
// 	return *this;
// }

// std::ostream &			operator<<( std::ostream & o, Animal const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Animal::makeSound(void)	const
{
	std::cout << _type << " sound 'Inauduble'" << std::endl;
}

std::string	Animal::getType(void)	const
{
	return (this->_type);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */