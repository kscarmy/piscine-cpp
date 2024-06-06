#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>


int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: ./btc [filename]" << std::endl;
		return 1;
	}
	std::ifstream input(argv[1]);
	if (input.fail())
	{
		std::cerr << "Error: could not open file" << std::endl;
		return 1;
	}

	BitcoinExchange exchange;

    std::string ligne;
	while (std::getline(input, ligne)) {
        // std::cout << ligne << std::endl;
		exchange.ParseInput(ligne);
    }

	

	input.close();
	return 0;
}