#include "RPN.hpp"

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




/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RPN::~RPN()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RPN &				RPN::operator=( RPN const & rhs )
{
	if ( this != &rhs )
	{
		this->_stack = rhs._stack;
	}
	
	return *this;
}

std::ostream &			operator<<( std::ostream & o, RPN const & i )
{
	(void)i;
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void RPN::getStack() const	{
	for (size_t i = 0; i < _stack.size(); i++)
	{
		std::cout << _stack[i] << " ";
	}
	std::cout << std::endl;
}

void RPN::calculate()  {
	while (_stack.size() > 1)
	{
		for (size_t i = 0; i < _stack.size(); i++)
		{
			if (_stack[i] == "+")
			{
				_stack[i - 2] = std::to_string(std::stoi(_stack[i - 2]) + std::stoi(_stack[i - 1]));
				_stack.erase(_stack.begin() + i - 1, _stack.begin() + i + 1);
				break;
			}
			else if (_stack[i] == "-")
			{
				_stack[i - 2] = std::to_string(std::stoi(_stack[i - 2]) - std::stoi(_stack[i - 1]));
				_stack.erase(_stack.begin() + i - 1, _stack.begin() + i + 1);
				break;
			}
			else if (_stack[i] == "*")
			{
				_stack[i - 2] = std::to_string(std::stoi(_stack[i - 2]) * std::stoi(_stack[i - 1]));
				_stack.erase(_stack.begin() + i - 1, _stack.begin() + i + 1);
				break;
			}
			else if (_stack[i] == "/")
			{
				_stack[i - 2] = std::to_string(std::stoi(_stack[i - 2]) / std::stoi(_stack[i - 1]));
				_stack.erase(_stack.begin() + i - 1, _stack.begin() + i + 1);
				break;
			}
		}
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */