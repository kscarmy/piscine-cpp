#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <map>
# include <fstream>
# include <cstdlib>
# include <sstream>

class BitcoinExchange
{

	public:

		BitcoinExchange();
		BitcoinExchange( BitcoinExchange const & src );
		~BitcoinExchange();



		int ParseData(void);

		int ParseInput(std::string input);

		bool isValidNumber(std::string str);

		BitcoinExchange &		operator=( BitcoinExchange const & rhs );
		
		double findOrPrevDate(const std::map<std::string, double>& data, const std::string& date);

	private:
		std::map<std::string, double> _data;

};

// std::ostream &			operator<<( std::ostream & o, BitcoinExchange const & i );

#endif /* ************************************************* BITCOINEXCHANGE_H */