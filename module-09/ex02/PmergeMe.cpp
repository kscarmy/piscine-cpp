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

void PmergeMe::sortVectorN(std::size_t from, std::size_t to)
{

	to ++;

	if (this->_data[from] > this->_data[from + 2])
	{
		std::swap(this->_data[from], this->_data[from + 2]);
		if (this->_data[from + 1] > this->_data[from + 2])
		{
			std::swap(this->_data[from + 1], this->_data[from + 2]);
		}
	}
	else
	{
		if (this->_data[from + 1] > this->_data[from + 2])
		{
			std::swap(this->_data[from + 1], this->_data[from + 2]);
		}
	}
}

void PmergeMe::sortVectorNbis(int *first, int *second, std::size_t n)
{
	std::size_t	fSize = 0;
	std::size_t	sSize = 0;
	while (fSize <= n && sSize <= n)
	{
		std::cout << "First: " << first[fSize] << " Second: " << second[sSize] << std::endl;
		if (fSize + sSize  + 1 == n * 2)
			break;
		if (first[fSize] < second[sSize])
		{
			std::cout << "First: " << first[fSize] << " Second: " << second[sSize] << "---" << std::endl;
			fSize++;
			continue;
		}
		else if (first[fSize] > second[sSize])
		{
			std::swap(first[fSize], second[sSize]);
			std::cout << "First: " << first[fSize] << " Second: " << second[sSize] << "-------" << std::endl;
			sSize++;
			continue;
		}
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

	displayVector();
	// sortVectorN(0, 3);
	sortVectorNbis(&this->_data[0], &this->_data[2], 2);
	
	displayVector();
	// sortVectorN(4, 7);
	sortVectorNbis(&this->_data[4], &this->_data[6], 2);

	displayVector();
	

}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
