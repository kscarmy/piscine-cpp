#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <list>

class RPN
{
	public:
		RPN();
		RPN(std::string input);
		RPN(RPN const & src);
		~RPN();

		RPN & operator=(RPN const & rhs);

		void getStack() const;
		void calculate();

	private:
		std::list<std::string> _stack;
};

std::ostream & operator<<(std::ostream & o, RPN const & i);

#endif /* ************************************************************* RPN_H */
