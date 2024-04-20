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
			std::string	getType(void)	const;

		WrongAnimal &		operator=( WrongAnimal const & rhs );

	private:

	protected:

		std::string _type;

};


#endif /* ********************************************************** WrongAnimal_H */