#include "BitcoinExchange.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& src)
    : _data(src._data)  // Copie le contenu du map
{
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

BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange const& rhs)
{
    if (this != &rhs) {
        this->_data = rhs._data;  // Copie le contenu du map
    }
    return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

int BitcoinExchange::ParseData(void)
{
    std::ifstream dataFile("data.csv");
    if (dataFile.fail())
    {
        std::cerr << "Error: could not open data.csv" << std::endl;
        return -1;
    }

    std::string ligne;
    while (std::getline(dataFile, ligne)) {
        std::size_t pos = ligne.find(",");
        std::string date = ligne.substr(0, pos);
        std::string prixString = ligne.substr(pos + 1);
        if (prixString == "exchange_rate")
            continue;
        
        char* tmp;
        double prix = std::strtod(prixString.c_str(), &tmp);
        if (*tmp != '\0') {
            std::cerr << "Invalid input string for conversion to double: " << prixString << std::endl;
            return -1;
        }
        this->_data.insert(std::pair<std::string, double>(date, prix));
    }

    dataFile.close();
    return 0;
}


bool BitcoinExchange::isValidNumber(std::string str) {
    bool pointSeen = false;
    for (size_t i = 0; i < str.length(); ++i) {
		if (str[0] == '-') {
			i++;
		}
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
    std::map<std::string, double>::const_iterator it = data.lower_bound(date);
    if (it != data.end() && it->first == date) {
        return it->second;
    } else if (it != data.begin()) {
        --it;
        return it->second;
    } else {
        std::cerr << "No date found or previous date available." << std::endl;
        return 0.0;
    }
}

int BitcoinExchange::ParseInput(std::string input)
{
	if (input.empty()) {
		return 0;
	}
	if (input == "date | value")	{
		return 0;
	}
    try {
        std::size_t pos = input.find(" | ");
        if (pos == std::string::npos) {
            throw std::invalid_argument("Error: bad input => " + input);
        }

        std::string date = input.substr(0, pos);
        if (date.size() != 10 || date[4] != '-' || date[7] != '-') {
            throw std::invalid_argument("Invalid date format");
        }

        int year, month, day;
        char dash1, dash2;
        std::istringstream date_stream(date);
        date_stream >> year >> dash1 >> month >> dash2 >> day;

        if (date_stream.fail() || dash1 != '-' || dash2 != '-' ||
            year < 2009 || year > 2022 || month < 1 || month > 12 || day < 1 || day > 31 ||
            (year == 2009 && month == 1 && day < 2) || (year == 2022 && month == 3 && day > 29)) {
            throw std::invalid_argument("Invalid date value: " + date);
        }

        std::string prixVolume = input.substr(pos + 3);
        if (!isValidNumber(prixVolume)) {
            throw std::invalid_argument("Invalid volume value: " + prixVolume);
        }

        char* tmp;
        double volume = std::strtod(prixVolume.c_str(), &tmp);
        if (*tmp != '\0') {
            throw std::invalid_argument("Invalid input string for conversion to double: " + prixVolume);
        }

        if (volume < 0) {
            throw std::out_of_range("Error:  not a positive number.");
        } else if (volume > 1000) {
            throw std::out_of_range("Error: too large a number.");
        } else {
            double value = findOrPrevDate(this->_data, date);
            std::cout << date << " => " << volume << " = " << value * volume << std::endl;
        }
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return -1;
    }

    return 0;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
