#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <vector>
# include <iterator>
#include <limits.h>
# define CALL 0


class Span
{

	public:
		Span();
		Span(unsigned int size);
		Span( Span const & src );
		~Span();

		void	addNumber(int nbr);
		int		shortestSpan(void)	const;
		int		longestSpan(void)	const;

		class SpanFull: public std::exception{
			public:
				virtual const char *what() const throw();
		};

		class SpanIndexWrong: public std::exception{
			public:
				virtual const char *what() const throw();
		};

	private:
		unsigned int		_index;
		unsigned int		_size;
		std::vector<int>	_tab;
};

#endif /* ************************************************************ SPAN_H */