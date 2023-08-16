#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "AAnimal.hpp"
# include "Brain.hpp"
# define CALL 1

class Dog : public Animal
{

	public:

		Dog();
		Dog( Dog const & src );
		~Dog();

		void	makeSound(void)	const;
		std::string	getType(void)	const;

		Dog &		operator=( Dog const & src );

	private:
		std::string	_type;
		Brain		*_oneBrain;

};


#endif /* ************************************************************* DOG_H */