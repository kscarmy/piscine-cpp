#include "BitcoinExchange.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange( const BitcoinExchange & src )
{
	(void)src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

BitcoinExchange::~BitcoinExchange()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

BitcoinExchange &				BitcoinExchange::operator=( BitcoinExchange const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	(void)rhs;
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, BitcoinExchange const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

int	BitcoinExchange::ParseData(void)
{
	std::ifstream dataFile("data.csv");
	if (dataFile.fail())
	{
		std::cerr << "Error: could not open data.csv" << std::endl;
		return -1;
	}

	// Read the file and store the data in the map
    std::string ligne;
	while (std::getline(dataFile, ligne)) {
        // std::cout << ligne << std::endl;
		std::size_t pos = ligne.find(",");
		std::string date = ligne.substr(0, pos);
		std::string prixString = ligne.substr(pos + 1);
		// std::cout << "prixString : " << prixString << std::endl;
		if (prixString == "exchange_rate")
			continue;
		char *tmp;
		double prix = std::strtod(prixString.c_str(), &tmp);
		try {
			if (*tmp != '\0') {
				// Conversion failed, invalid input
				throw std::invalid_argument("Invalid input string for conversion to double.");
			}
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
			return -1;
		}
		this->_data.insert(std::pair<std::string, double>(date, prix));
    }

	// std::cout << "Data loaded ?" << std::endl;

	// // Print the map
	// for (std::map<std::string, double>::iterator it = this->_data.begin(); it != this->_data.end(); ++it)	{
	// 	std::cout << it->first << " - " << it->second << std::endl;
	// }
	dataFile.close();
	return 0;
}


bool BitcoinExchange::isValidNumber(std::string str) {
    bool pointSeen = false;
    for (size_t i = 0; i < str.length(); ++i) {
        if (str[i] == '.') {
            if (pointSeen) {
                return false;
            }
            pointSeen = true;
        } else if (!isdigit(str[i])) {
            return false;
        }
    }
    return true;
}

double BitcoinExchange::findOrPrevDate(const std::map<std::string, double>& data, const std::string& date) {
    // std::map<std::string, double>::const_iterator it = data.lower_bound(date);

	int i = 0;
    // if (it == data.end() || it->first != date) {
    //     if (it == data.begin()) {
    //         // Si on est au début et que la date n'est pas trouvée, il n'y a pas de date précédente
    //         throw std::out_of_range("No date found or previous date available.");
    //     } else {
    //         // La date n'est pas trouvée, prendre la date précédente
    //         --it;
    //     }
	// 	i++;
    // }
	for (std::map<std::string, double>::const_iterator it = data.begin(); it != data.end(); ++it)	{
		// std::cout << it->first << " - " << it->second << std::endl;
		// std::cout << "tests :" << it->first << std::endl;
		if (it->first == date) {
			// std::cout << "i = " << i << std::endl;

			return it->second;
			// break;
		}
		i++;
	}
	// std::cout << "i = " << i << std::endl;
	std::cout << "No date found or previous date available." << std::endl;
    return 0;
}


int BitcoinExchange::ParseInput(std::string input)
{
	// Check if the input have the separator
	try {
		std::size_t pos = input.find(" | ");
		if (pos == input.npos)	{
			throw std::invalid_argument("Error: bad input =>" + input);
		}
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
		return -1;
	}

	// Check if the date is valid
	// std::string date;
	std::size_t pos = input.find(" | ");
	std::string date = input.substr(0, pos);
	try	{
		
		if (date.size() != 10 || date[4] != '-' || date[7] != '-') {
			throw std::invalid_argument("Invalid date format");
		}
		int year, month, day;
		char dash1, dash2;
		std::istringstream date_stream(date);

		date_stream >> year >> dash1 >> month >> dash2 >> day;

		if (date_stream.fail() || dash1 != '-' || dash2 != '-') {
			throw std::invalid_argument("Invalid date format" + date);
		}
		if (year < 2009 || year > 2022 || month < 1 || month > 12 || day < 1 || day > 31) {
			throw std::invalid_argument("Invalid date value" + date);
		}
		// date minimum is 2009-01-02
		if (year == 2009 && month == 01 && day < 02)	{
			throw std::invalid_argument("Invalid date value" + date);
		}
		// date maximum is 2022-03-29
		if (year == 2022 && month > 03)	{
			throw std::invalid_argument("Invalid date value" + date);
		}
		if (year == 2022 && month == 03 && day > 29)	{
			throw std::invalid_argument("Invalid date value" + date);
		}
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
		return -1;
	}
	std::string prixVolume = input.substr(pos + 3);
	try {
		if (!isValidNumber(prixVolume)) {
			throw std::invalid_argument("Invalid volume value" + prixVolume);
		}
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
		return -1;
	}
	char* tmp;
	double volume = strtod(prixVolume.c_str(), &tmp);
	try {
		if (*tmp != '\0') {
			// Conversion failed, invalid input
			throw std::invalid_argument("Invalid input string for conversion to double.");
		}
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
		return -1;
	}
	try {
		if (volume < 0) {
			throw std::out_of_range("Error: negative number.");
		}
		else if (volume > 1000) {
			throw std::out_of_range("Error: too large a number.");
		}
		else {
			double value = findOrPrevDate(this->_data, date);
			std::cout << date << " => " << volume << " = ";
			std::cout << value * volume << std::endl;
		}
    } catch (const std::out_of_range& e) {
        std::cerr << e.what() << std::endl;
    }
	
	


	return 0;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */