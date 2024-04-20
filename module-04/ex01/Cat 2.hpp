#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"
# define CALL 1

class Cat : public Animal
{

	public:

		Cat();
		Cat( Cat const & src );
		virtual	~Cat();

		virtual	void	makeSound(void)	const;
		virtual	std::string	getType(void)	const;

		Cat &		operator=( Cat const & rhs );

	private:
		std::string	_type;
		Brain*		_oneBrain;

};


#endif /* ************************************************************* CAT_H */