#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# define CALL 1

class Bureaucrat
{

	public:

		Bureaucrat();
		Bureaucrat(std::string	Name, int Grade);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		std::string	getName(void)	const;
		int			getGrade(void)	const;

		void		increment(void);
		void		decrement(void);

		class		GradeTooHighException : public std::exception {
					public:
						virtual const char *what() const throw();
		};

		class		GradeTooLowException : public std::exception {
					public:
						virtual const char *what() const throw();
		};

		Bureaucrat &		operator=( Bureaucrat const & rhs );

	private:
		std::string	const	_Name;
		int		_Grade;
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */

