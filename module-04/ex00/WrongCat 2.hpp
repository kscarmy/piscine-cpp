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
			std::string	getType(void)	const;

		WrongCat &		operator=( WrongCat const & rhs );

	private:

		std::string	_type;

};


#endif /* ************************************************************* WrongCat_H */