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

	sortVectorN(0, 3);
	// sort one out of two elements (un sur deux)
	// for (size_t i = 0; i < this->_data.size(); i+=1)
	// {
	// 	if (this->_data[i + 2] )	{
	// 		if (this->_data[i] > this->_data[i + 2])	{
	// 			std::swap(this->_data[i], this->_data[i + 2]);
	// 		}
	// 	}
	// }

}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
