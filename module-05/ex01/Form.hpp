#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"
# define CALL 1

class Bureaucrat;

class Form
{

	public:

		Form();
		Form(std::string Name, int SignMe, int ExecuteMe);
		Form( Form const & src );
		~Form();

		std::string	getName(void)	const;
		bool		getisSign(void)	const;
		int			getgoSign(void)	const;
		int			getExec(void)	const;
		
		int		beSigned(const Bureaucrat& src);


		class		GradeTooHighException : public std::exception {
					public:
						virtual const char *what() const throw();
		};
		class		GradeTooLowException : public std::exception {
					public:
						virtual const char *what() const throw();
		};

		Form &		operator=( Form const & rhs );

	private:
		std::string	const	_Name;
		bool				_isSign;
		int			const	_goSign;
		int			const	_Exec;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */