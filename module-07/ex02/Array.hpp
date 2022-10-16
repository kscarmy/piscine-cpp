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
		// Array &		operator=( Array const & rhs );

	private:
		unsigned int	_size;
		T				_tab[];

};

// std::ostream &			operator<<( std::ostream & o, Array const & i );

#endif /* *********************************************************** ARRAY_H */