#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"
# define CALL 1

class Animal
{

	public:

		Animal();
		Animal( Animal const & src );
		virtual	~Animal();

		virtual	void	makeSound(void)	const;
		virtual	std::string	getType(void)	const;

		Animal &		operator=( Animal const & rhs );

	private:

	protected:
		std::string _type;
		Brain*		_oneBrain;

};

std::ostream &			operator<<( std::ostream & o, Animal const & i );

#endif /* ********************************************************** ANIMAL_H */