#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <list>

template <typename T>
class MutantStack : public std::stack<T>
{

	public:

		MutantStack(void)						{	return ;	};
		MutantStack( MutantStack const & src )	{	this = src; return ;	};
		virtual	~MutantStack(void)				{	return ;	};

		// MutantStack &		operator=( MutantStack const & rhs );

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		iterator	begin(void){
			return (this->c.begin());
		}
		iterator	end(void){
			return (this->c.end());
		}

		const_iterator	begin(void) const{
			return (this->c.begin());
		}
		const_iterator	end(void) const{
			return (this->c.end());
		}

	private:

};

// std::ostream &			operator<<( std::ostream & o, MutantStack const & i );

#endif /* ***************************************************** MUTANTSTACK_H */