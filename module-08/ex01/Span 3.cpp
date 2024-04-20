#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/


Span::Span() : _index(0), _size(0){
	std::vector <int> ret (0);
	this->_tab = ret;
	if (CALL) {std::cout << "Span : DEFAULT constructor" << std::endl;}
}

Span::Span(unsigned int	size) : _index(0), _size(size){
	std::vector <int> ret (size);
	this->_tab = ret;
	if (CALL) {std::cout << "Span : MAIN constructor" << std::endl;}
}

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
	if (this->_index < this->_size){
		this->_tab[this->_index] = nbr;
		this->_index++;
	}
	else{
		throw Span::SpanFull();	}	}
	catch (const Span::SpanFull &e){ std::cout << e.what() << std::endl;}
}

int		Span::shortestSpan(void)	const{
	int min = INT_MAX;
	try {
	if (this->_index < 2){
		throw Span::SpanIndexWrong();
	}
	else {
		for (unsigned int i=0; i<this->_index; i++){
			for (unsigned int u=0; u<this->_index; u++){
				if (i != u && this->_tab[i] >= this->_tab[u] && this->_tab[i] - this->_tab[u] < min)
					min = this->_tab[i] - this->_tab[u];
			}
		}
	}
	}
	catch (const Span::SpanIndexWrong &e) { std::cout << e.what(); return (-1);}
	if (min == INT_MAX)
		return (-1);
	return (min);
}


int		Span::longestSpan(void)	const{
	// if (_index < 1)
	// 	return (0);
	try {
	if (this->_index < 2){
		throw Span::SpanIndexWrong();
	}
	else {
		int max = *std::max_element(this->_tab.begin(), this->_tab.end());
		int min = *std::min_element(this->_tab.begin(), this->_tab.end());
		return (max - min);
	}
	}
	catch (const Span::SpanIndexWrong &e) { std::cout << e.what(); return (-1);}
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

	const char *Span::SpanIndexWrong::what() const throw(){
		return("Span has 1 number or lower !");
	}
/* ************************************************************************** */