#ifndef WRONGWrongCat_HPP
# define WRONGWrongCat_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"
# define CALL 1

class WrongCat : public WrongAnimal
{

	public:

		WrongCat();
		WrongCat( WrongCat const & src );
		virtual	~WrongCat();

		void	makeSound(void)	const;
		virtual	std::string	getType(void)	const;

		WrongCat &		operator=( WrongCat const & rhs );

	private:

		std::string	_type;

};

std::ostream &			operator<<( std::ostream & o, WrongCat const & i );

#endif /* ************************************************************* WrongCat_H */