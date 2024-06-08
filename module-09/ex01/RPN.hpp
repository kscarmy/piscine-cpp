#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>


class RPN
{

	public:

		RPN();
		RPN(std::string input);
		~RPN();

		RPN &		operator=( RPN const & rhs );

		void getStack() const;
		void calculate();

	private:
		std::vector<std::string> _stack;
};

std::ostream &			operator<<( std::ostream & o, RPN const & i );

#endif /* ************************************************************* RPN_H */