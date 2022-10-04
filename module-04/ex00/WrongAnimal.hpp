#ifndef WRONGWrongAnimal_HPP
# define WRONGWrongAnimal_HPP

# include <iostream>
# include <string>
# define CALL 1

class WrongAnimal
{

	public:

		WrongAnimal();
		WrongAnimal( WrongAnimal const & src );
		virtual	~WrongAnimal();

		void	makeSound(void)	const;
		virtual	std::string	getType(void)	const;

		WrongAnimal &		operator=( WrongAnimal const & rhs );

	private:

	protected:

		std::string _type;

};

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & i );

#endif /* ********************************************************** WrongAnimal_H */