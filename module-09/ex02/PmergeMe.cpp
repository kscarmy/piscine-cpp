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


void PmergeMe::sortVectorNbis(int *first, int *second, std::size_t n)
{
	std::size_t	fSize = 0;
	std::size_t	sSize = 0;
	std::size_t i = 0;
	std::vector<int> tmp;

	if (DEBUG_SORT) std::cout << "first : " << first[0] << " " << first[1] << std::endl;
	if (DEBUG_SORT) std::cout << "second : " << second[0] << " " << second[1] << std::endl;

	while (i < n * 2)
	{
		// if (fSize + sSize  + 1 == n * 2)	{
		// 	if (fSize == n)	{
		// 		tmp.push_back(second[sSize]);
		// 		sSize++;
		// 	}
		// 	else if (sSize == n)	{
		// 		tmp.push_back(first[fSize]);
		// 		fSize++;
		// 	}
		// 	break;
		// }

		if (fSize == n)
		{
			while (sSize < n)
			{
				tmp.push_back(second[sSize]);
				sSize++;
			}
			break;
		}
		if (sSize == n)
		{
			while (fSize < n)
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
	if (DEBUG_SORT) std::cout << "TMP : debut :" << std::endl;
	for (size_t i = 0; i < tmp.size(); i++)
	{
		if (DEBUG_SORT) std::cout << tmp[i] << " ";
	}
	if (DEBUG_SORT) std::cout << std::endl;
	if (DEBUG_SORT) std::cout << "TMP : fin :" << std::endl;

	/*	copie tmp dans le vector	*/
	for (size_t i = 0; i < tmp.size(); i++)
	{
		if (i < n)
			first[i] = tmp[i];
		else
			second[i - n] = tmp[i];
	}

}


void PmergeMe::sortVector()
{
	// sort one out of two elements (un sur deux)
	for (size_t i = 0; i < this->_data.size(); i+=2)
	{
		if (this->_data[i + 1] )	{
			if (this->_data[i] > this->_data[i + 1])	{
				std::swap(this->_data[i], this->_data[i + 1]);
			}
		}
	}


	// if (DEBUG_SORT) displayVector();
	// if (DEBUG_SORT) std::cout << "1/2 half sorted :" << std::endl;
	sortVectorNbis(&this->_data[0], &this->_data[2], 2);
	
	if (DEBUG_SORT) displayVector();
	if (DEBUG_SORT) std::cout << "2/2 half sorted :" << std::endl;
	sortVectorNbis(&this->_data[4], &this->_data[6], 2);

	if (DEBUG_SORT) displayVector();
	if (DEBUG_SORT) std::cout << "all half sorted :" << std::endl;
	sortVectorNbis(&this->_data[0], &this->_data[4], 4);

}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
