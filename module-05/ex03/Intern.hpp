#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
# define CALL 1

class Intern
{

	public:

		Intern();
		Intern(std::string NameForm, std::string TargetForm);
		Intern( Intern const & src );
		~Intern();

		std::string	getNameForm(void)	const;
		std::string	getTargetForm(void)	const;

		AForm	*makeForm(std::string NameForm, std::string TargetForm);

		class		InvalidFormTypeName : public std::exception {
					public:
						virtual const char *what() const throw();
		};

		// Intern &		operator=( Intern const & rhs );

	private:
		std::string		_NameForm;
		std::string		_TargetForm;

};

// std::ostream &			operator<<( std::ostream & o, Intern const & i );

#endif /* ********************************************************** INTERN_H */