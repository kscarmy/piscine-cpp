#ifndef AANIMAL_HPP
# define AANIMAL_HPP

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

		virtual	void	makeSound(void)	const = 0;
		virtual	std::string	getType(void)	const = 0;

		virtual	Animal &		operator=( Animal const & rhs );

	private:

	protected:
		std::string _type;

};


#endif /* ********************************************************** ANIMAL_H */