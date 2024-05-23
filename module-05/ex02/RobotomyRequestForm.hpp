#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
# include <stdlib.h>
# define CALL 1

class RobotomyRequestForm : public AForm
{

	public:

		RobotomyRequestForm();
		RobotomyRequestForm(const	std::string	Target);
		RobotomyRequestForm( RobotomyRequestForm const & src );
		~RobotomyRequestForm();

		virtual	void	andAction(void)	const;
		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );

	private:
};

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i );

#endif /* ****************************************** RobotomyRequestForm_H */