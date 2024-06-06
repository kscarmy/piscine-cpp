#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <cstdlib>


template <class T>
class Array
{

	public:

		Array();
		Array(unsigned int n);
		Array( Array const & src );
		~Array();

		unsigned int size()	const;
		Array &		operator=( Array const & rhs );
		T &		operator[]( unsigned int n );

	private:
		unsigned int	_size;
		T				*_tab;

};

// std::ostream &			operator<<( std::ostream & o, Array const & i );








/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
template <typename T>
Array<T>::Array() : _size(0){
	this->_tab = new T;
	// this->_tab[0] = 0;
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n){
	this->_tab = new T[n];
	// this->_tab[0] = 0;
}

template <typename T>
Array<T>::Array( const Array & src ){
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/
template <typename T>
Array<T>::~Array()
{
	delete [] this->_tab;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/
template <typename T>
Array<T> &				Array<T>::operator=( Array<T> const & rhs )
{
	this->_size = rhs.size();
	if (this->_size == 0)	{
		this->_tab = NULL;
	}
	else {
		this->_tab = new T[_size];
		for (unsigned int i=0; i<this->_size; i++)	{
			this->_tab[i] = rhs._tab[i];
		}
	}
	return *this;
}

template <typename T>
T &				Array<T>::operator[]( unsigned int n )
{
	if (n >= this->size())
		throw std::exception();
	return (this->_tab[n]);
}

// std::ostream &			operator<<( std::ostream & o, Array const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

template <typename T>
unsigned int Array<T>::size(void)	const{
	return(this->_size);
}


/* ************************************************************************** */





#endif /* *********************************************************** ARRAY_H */














