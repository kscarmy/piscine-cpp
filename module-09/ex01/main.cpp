# include "RPN.hpp"
# define DEBUG_INPUT 0
# define DEBUG_STACK 0


int	parseInput(std::string input)
{
	if (DEBUG_INPUT) std::cout << "Parsing input: " << input << std::endl;
	for (size_t i = 0; i < input.length(); i++)
	{
		if (input[i] == ' ')
			continue;
		if (input[i] >= '0' && input[i] <= '9')
		{
			if (DEBUG_INPUT) std::cout << "Number: " << input[i] << std::endl;
			if (input[i + 1] && input[i + 1] != ' ')
			{
				std::cout << "Error: Number need to be < 10" << std::endl;
				return 1;
			}
		}
		else if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/')
		{
			if (DEBUG_INPUT) std::cout << "Operator: " << input[i] << std::endl;
		}
		else
		{
			std::cerr << "Invalid character: " << input[i] << std::endl;
			return 1;
		}
	}
	return 0;
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: ./RPN \"expression\"" << std::endl;
		return 1;
	}
	if (DEBUG_INPUT) std::cout << "Input : '" << argv[1] << "'" << std::endl;

	if (parseInput(argv[1]))
	{
		std::cerr << "Error parsing input" << std::endl;
		return 1;
	}

	if (DEBUG_STACK) std::cout << "Input is valid" << std::endl;
	RPN rpn(argv[1]);
	if (DEBUG_STACK) std::cout << "Stack: ";
	// rpn.getStack();

	rpn.calculate();

	rpn.getStack();
	

	return 0;
}
