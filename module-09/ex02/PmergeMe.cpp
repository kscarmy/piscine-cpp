#include "PmergeMe.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PmergeMe::PmergeMe()
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PmergeMe::~PmergeMe()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/



/*
** --------------------------------- METHODS ----------------------------------
*/

void PmergeMe::pushBackVector(int n)
{
	this->_data.push_back(n);
}

std::size_t PmergeMe::getDataSize() const
{
	return this->_data.size();
}

void PmergeMe::displayVector() const
{
	for (size_t i = 0; i < this->_data.size(); i++)
	{
		std::cout << this->_data[i] << " ";
	}
	std::cout << std::endl;
}

std::string	PmergeMe::displayVectorString(int *arr, std::size_t n) const
{
	std::string out = "";
	for (size_t i = 0; i < n; i++)
	{
		std::stringstream ss;
		ss << arr[i];
		std::string str = ss.str();
		out += str + " ";
	}
	return out;
}

void PmergeMe::sortVectorNbis(int *first, int *second, std::size_t nF, std::size_t nS)
{
	std::size_t	fSize = 0;
	std::size_t	sSize = 0;
	std::size_t i = 0;
	std::vector<int> tmp;

	if (DEBUG_SORT) std::cout << "first : " << displayVectorString(first, nF) << std::endl;
	if (DEBUG_SORT) std::cout << "second : " << displayVectorString(second, nS) << std::endl;

	if (nF == 2)	{
		if (first[0] > first[1])	{
			std::swap(first[0], first[1]);
		}
	}
	if (nS == 2)	{
		if (second[0] > second[1])	{
			std::swap(second[0], second[1]);
		}
	}

	while (i < nF + nS)
	{
		if (fSize == nF)
		{
			while (sSize < nS)
			{
				tmp.push_back(second[sSize]);
				sSize++;
			}
			break;
		}
		if (sSize == nS)
		{
			while (fSize < nF)
			{
				tmp.push_back(first[fSize]);
				fSize++;
			}
			break;
		}

		if (first[fSize] < second[sSize])
		{
			tmp.push_back(first[fSize]);
			fSize++;
			continue;
		}
		if (first[fSize] > second[sSize])
		{
			tmp.push_back(second[sSize]);
			sSize++;
			continue;
		}
		i++;
	}
	if (DEBUG_SORT) {
		std::cout << "TMP : debut :" << std::endl;
		for (size_t i = 0; i < tmp.size(); i++){
			if (DEBUG_SORT) std::cout << tmp[i] << " ";
		}
		std::cout << std::endl;
		std::cout << "TMP : fin :" << std::endl;
	}

	// if (DEBUG_SORT) std::cout << "first : " << displayVectorString(first, nF) << std::endl;
	// if (DEBUG_SORT) std::cout << "second : " << displayVectorString(second, nS) << std::endl;

	/*	copie tmp dans le vector	*/
	for (size_t i = 0; i < nF; i++)
	{
		first[i] = tmp[i];
	}
	for (size_t i = 0; i < nS; i++)
	{
		second[i] = tmp[i + nF];
	}
}

// return true if pyra is < 2
bool PmergeMe::checkPyra()	{
	for (size_t i = 1; i < _pyra.size(); i++)
	{
		if (_pyra[i] <= 2 || _pyra[i] == 3)	{
			return true;
		}
		else
			return false;
	}
	return false;
}

void PmergeMe::createPyra()	{
	std::size_t n = getDataSize();
	std::size_t res1 = 0;
	std::size_t res2 = 0;
	if (n % 2 == 0)	{
		res1 = n / 2;
		res2 = n / 2;
	}
	else	{
		res1 = n / 2;
		res2 = (n / 2) + 1;
	}
	_pyra.insert(_pyra.begin(), -1);	// -1 = Marker in pyra
	_pyra.insert(_pyra.begin(), res1);
	_pyra.insert(_pyra.begin(), res2);
	_pyra.insert(_pyra.begin(), -1);	// -1 = Marker in pyra

	while (!checkPyra())	{
		bool foundFirstMarker = false;
		std::vector<int> tmp;
		for (std::vector<int>::iterator it = _pyra.begin(); it != _pyra.end(); ++it) {
			if (*it == -1) {
				if (foundFirstMarker) {
					break;
				} else {
					foundFirstMarker = true;
				}
			} else if (foundFirstMarker) {
				if (*it % 2 == 0)	{
					tmp.push_back(*it / 2);
					tmp.push_back(*it / 2);
				}
				else	{
					tmp.push_back(*it / 2 + 1);
					tmp.push_back(*it / 2);
				}
			}
		}
		for (std::vector<int>::reverse_iterator rit = tmp.rbegin(); rit != tmp.rend(); ++rit) {
			_pyra.insert(_pyra.begin(), *rit);
		}
		_pyra.insert(_pyra.begin(), -1);	// -1 = Marker in pyra
	}

	if (DEBUG_PYRA) {
		std::cout << "pyra :" << std::endl;
		for (size_t i = 0; i < _pyra.size(); i++)
		{
			if (_pyra[i] == -1)
				std::cout << std::endl;
			else
				std::cout << _pyra[i] << " ";
		}
		std::cout << std::endl;
	}
}

void PmergeMe::sortVector()
{

	createPyra();
	// if (DEBUG_SORT) displayVector();
	// if (DEBUG_SORT) std::cout << "1/2 half sorted :" << std::endl;
	// sortVectorNbis(&this->_data[0], &this->_data[2], 2, 1);			// 6
	// // sortVectorNbis(&this->_data[0], &this->_data[2], 2, 2);		// 8
	
	// if (DEBUG_SORT) displayVector();
	// if (DEBUG_SORT) std::cout << "2/2 half sorted :" << std::endl;
	// sortVectorNbis(&this->_data[3], &this->_data[5], 2, 1);			// 6
	// // sortVectorNbis(&this->_data[4], &this->_data[6], 2, 2);		// 8

	// if (DEBUG_SORT) displayVector();
	// if (DEBUG_SORT) std::cout << "all half sorted :" << std::endl;
	// sortVectorNbis(&this->_data[0], &this->_data[3], 3, 3);			// 6
	// // sortVectorNbis(&this->_data[0], &this->_data[4], 4, 4);		// 8

}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
