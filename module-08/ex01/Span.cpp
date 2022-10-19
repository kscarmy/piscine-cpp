#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/


Span::Span() : _index(0), _size(0){
	std::vector <int> ret (0);
	_tab = ret;
	if (CALL) {std::cout << "Span : DEFAULT constructor" << std::endl;}
}

Span::Span(unsigned int	size) : _index(0), _size(size){
	std::vector <int> ret (size);
	_tab = ret;
	if (CALL) {std::cout << "Span : MAIN constructor" << std::endl;}
}

// Span::Span( const Span & src ){
// 	if (CALL) {std::cout << "Span : COPY constructor" << std::endl;}
// }

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span(){
	if (CALL) {std::cout << "Span : DEFAULT destructor" << std::endl;}
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/




/*
** --------------------------------- METHODS ----------------------------------
*/

void	Span::addNumber(int nbr){
	try {
	if (_index < _size){
		_index++;
		_tab[_index] = nbr;
	}
	else{
		throw Span::SpanFull();	}	}
	catch (const Span::SpanFull &e){ std::cout << e.what() << std::endl;}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/*
** --------------------------------- EXCEPTION ---------------------------------
*/
	
	const char *Span::SpanFull::what() const throw(){
		return("Span is full !");
	}
/* ************************************************************************** */