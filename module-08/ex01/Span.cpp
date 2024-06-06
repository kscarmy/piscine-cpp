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
			throw Span::SpanFull();
		}
	}
	catch (const Span::SpanFull &e){ std::cout << e.what() << std::endl;}
}

void	Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end){
	try {
		if (this->_index + std::distance(begin, end) > this->_size){
			throw Span::SpanFull();
		}
		else{
			_tab.insert(_tab.begin() + this->_index, begin, end);
			this->_index += std::distance(begin, end);
		}
	}
	catch (const Span::SpanFull &e){ std::cout << e.what() << std::endl;}
}

int		Span::shortestSpan(void)	const{
	int min = INT_MAX;
	try {
		if (this->_index < 2)	{
			throw Span::SpanIndexWrong();
		}
		else	{
			for (std::vector<int>::const_iterator i = this->_tab.begin(); i != this->_tab.end(); i++){
				for (std::vector<int>::const_iterator u = this->_tab.begin(); u != this->_tab.end(); u++){
					if (i != u && *i >= *u && *i - *u < min)
						min = *i - *u;
					if (min == 0)
						return (0);
				}
			}
		}
	}
	catch (const Span::SpanIndexWrong &e)	{
		std::cout << e.what();
		return (-1);
	}
	if (min == INT_MAX)
		return (-1);
	return (min);
}


int		Span::longestSpan(void)	const{
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
	catch (const Span::SpanIndexWrong &e)	{
		std::cout << e.what();
		return (-1);
	}
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