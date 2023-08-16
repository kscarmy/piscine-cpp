#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "AAnimal.hpp"
# include "Brain.hpp"
# define CALL 1

class Cat : public Animal
{

	public:

		Cat();
		Cat( Cat const & src );
		~Cat();

		void	makeSound(void)	const;
		std::string	getType(void)	const;

		Cat &		operator=( Cat const & src );

	private:
		std::string	_type;
		Brain*		_oneBrain;

};


#endif /* ************************************************************* CAT_H */