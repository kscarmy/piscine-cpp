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

std::size_t PmergeMe::size() const
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
	// out += "\n";
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


	// if (DEBUG_SORT) std::cout << "first : " << displayVectorString(first, nF) << std::endl;
	// if (DEBUG_SORT) std::cout << "second : " << displayVectorString(second, nS) << std::endl;
}


void PmergeMe::sortVector()
{
	// sort one out of two elements (un sur deux)
	// for (size_t i = 0; i < this->_data.size(); i+=2)
	// {
	// 	if (this->_data[i + 1] )	{
	// 		if (this->_data[i] > this->_data[i + 1])	{
	// 			std::swap(this->_data[i], this->_data[i + 1]);
	// 		}
	// 	}
	// }


	if (DEBUG_SORT) displayVector();
	if (DEBUG_SORT) std::cout << "1/2 half sorted :" << std::endl;
	sortVectorNbis(&this->_data[0], &this->_data[2], 2, 1);
	// sortVectorNbis(&this->_data[0], &this->_data[2], 2, 2);
	
	if (DEBUG_SORT) displayVector();
	if (DEBUG_SORT) std::cout << "2/2 half sorted :" << std::endl;
	sortVectorNbis(&this->_data[3], &this->_data[5], 2, 1);
	// sortVectorNbis(&this->_data[4], &this->_data[6], 2, 2);

	if (DEBUG_SORT) displayVector();
	if (DEBUG_SORT) std::cout << "all half sorted :" << std::endl;
	sortVectorNbis(&this->_data[0], &this->_data[3], 3, 3);
	// sortVectorNbis(&this->_data[0], &this->_data[4], 4, 4);


}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
