#include "RPN.hpp"
#include <list>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RPN::RPN()
{
}

RPN::RPN(std::string input)	{
	for (size_t i = 0; i < input.length(); i++)
	{
		if (input[i] == ' ')
			continue;
		if (input[i] >= '0' && input[i] <= '9')	{
			_stack.push_back(std::string(1, input[i]));
		}
		else if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/')	{
			_stack.push_back(std::string(1, input[i]));
		}
	}
}

RPN::RPN( const RPN & src )
{
	_stack = src._stack;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RPN::~RPN()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RPN & RPN::operator=(RPN const & rhs)
{
	if (this != &rhs)
	{
		this->_stack = rhs._stack;
	}
	return *this;
}

std::ostream & operator<<(std::ostream & o, RPN const & i)
{
	(void)i;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void RPN::getStack() const {
	for (std::list<std::string>::const_iterator it = _stack.begin(); it != _stack.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void RPN::calculate() {
	while (_stack.size() > 1)
	{
		for (std::list<std::string>::iterator it = _stack.begin(); it != _stack.end(); ++it)
		{
			if (*it == "+")
			{
				std::list<std::string>::iterator first = it;
				std::advance(first, -2);
				std::list<std::string>::iterator second = it;
				std::advance(second, -1);

				*first = std::to_string(std::stoi(*first) + std::stoi(*second));
				_stack.erase(second);
				it = _stack.erase(it);
				break;
			}
			else if (*it == "-")
			{
				std::list<std::string>::iterator first = it;
				std::advance(first, -2);
				std::list<std::string>::iterator second = it;
				std::advance(second, -1);

				*first = std::to_string(std::stoi(*first) - std::stoi(*second));
				_stack.erase(second);
				it = _stack.erase(it);
				break;
			}
			else if (*it == "*")
			{
				std::list<std::string>::iterator first = it;
				std::advance(first, -2);
				std::list<std::string>::iterator second = it;
				std::advance(second, -1);

				*first = std::to_string(std::stoi(*first) * std::stoi(*second));
				_stack.erase(second);
				it = _stack.erase(it);
				break;
			}
			else if (*it == "/")
			{
				std::list<std::string>::iterator first = it;
				std::advance(first, -2);
				std::list<std::string>::iterator second = it;
				std::advance(second, -1);

				*first = std::to_string(std::stoi(*first) / std::stoi(*second));
				_stack.erase(second);
				it = _stack.erase(it);
				break;
			}
		}
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
