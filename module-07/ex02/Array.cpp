#include "Array.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
template <typename T>
Array<T>::Array() : _size(0), _tab(NULL){
}

template <typename T>
Array<T>::Array(unsigned int n){
	_size = 0;
	_tab = new T[n];
}

template <typename T>
Array<T>::Array( const Array & src ){
	_size = src.size();
	if (_size == 0) { _tab = NULL;}
	else {
		_tab = new T[_size];
		for (unsigned int i=0; i<_size; i++){
			_tab = src._tab[i];
		}
	}
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/
template <typename T>
Array<T>::~Array()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

// Array &				Array::operator=( Array const & rhs )
// {
// 	//if ( this != &rhs )
// 	//{
// 		//this->_value = rhs.getValue();
// 	//}
// 	return *this;
// }

// std::ostream &			operator<<( std::ostream & o, Array const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

template <typename T>
unsigned int Array<T>::size(void)	const{
	return(_size);
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */