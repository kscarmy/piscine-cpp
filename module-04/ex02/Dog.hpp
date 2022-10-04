#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"
# define CALL 1

class Dog : public Animal
{

	public:

		Dog();
		Dog( Dog const & src );
		virtual	~Dog();

		virtual	void	makeSound(void)	const;
		virtual	std::string	getType(void)	const;

		Dog &		operator=( Dog const & rhs );

	private:
		std::string	_type;
		Brain*		_oneBrain;

};

std::ostream &			operator<<( std::ostream & o, Dog const & i );

#endif /* ************************************************************* DOG_H */