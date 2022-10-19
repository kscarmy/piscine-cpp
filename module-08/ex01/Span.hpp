#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# define CALL 1


class Span
{

	public:
		Span();
		Span(unsigned int size);
		Span( Span const & src );
		~Span();

		void	addNumber(int nbr);

		class SpanFull: public std::exception{
			public:
				virtual const char *what() const throw();
		};

	private:
		unsigned int		_index;
		unsigned int		_size;
		std::vector<int>	_tab;
};

#endif /* ************************************************************ SPAN_H */