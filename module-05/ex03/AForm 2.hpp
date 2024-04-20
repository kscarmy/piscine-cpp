#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"
# define CALL 1

class Bureaucrat;

class AForm
{

	public:

		AForm();
		AForm(std::string Name, int SignMe, int ExecuteMe, std::string Target);
		AForm( AForm const & src );
		virtual	~AForm() = 0;

		std::string	getName(void)	const;
		bool		getisSign(void)	const;
		int			getgoSign(void)	const;
		int			getExec(void)	const;
		std::string	getTarget(void)	const;
		
		int				beSigned(const Bureaucrat& src);
		void			execute(Bureaucrat const & executor)	const;
		virtual	void	andAction(void)							const;


		class		GradeTooHighException : public std::exception {
					public:
						virtual const char *what() const throw();
		};
		class		GradeTooLowException : public std::exception {
					public:
						virtual const char *what() const throw();
		};
		class		FormNotSigned : public std::exception {
					public:
						virtual const char *what() const throw();
		};

		// AForm &		operator=( AForm const & rhs );

	private:
		std::string	_Name;
		bool		_isSign;
		int			_goSign;
		int			_Exec;
		std::string	_Target;


};

std::ostream &			operator<<( std::ostream & o, AForm const & i );

#endif /* ************************************************************ AForm_H */