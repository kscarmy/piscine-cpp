#include "PmergeMe.hpp"

#define DEBUG 0


bool	isDigit(char *str)
{
	for (int i = 0; str[i]; i++)	{
		if (!std::isdigit(str[i]))	{
			return false;
		}
	}
	return true;
}

int main(int argc, char **argv)
{
    if (argc <= 2)	{
        std::cout << "Usage: ./PmergeMe number number [...]" << std::endl;
        return 1;
    }

	for (int i = 1; i < argc; i++)	{
		if (!isDigit(argv[i]))	{
			std::cout << "Error" << std::endl;
			return 1;
		}
	}

    PmergeMe fj;

    for (int i = 1; i < argc; i++)	{
		fj.pushBackVector(std::atoi(argv[i]));
		fj.pushBackDeque(std::atoi(argv[i]));
    }

/*
** --------------------------------- VECTOR ---------------------------------
*/

	std::clock_t VectorStartPyra, VectorEndPyra, VectorStartSort, VectorEndSort;
    double durationVectorPyra, durationVectorSort, durationVectorAll;

    if (DEBUG) std::cout << "Before: ";
    std::cout << "Before: ";
    fj.displayVector();

	VectorStartPyra = std::clock();
	fj.createVectorPyra();
	VectorEndPyra = std::clock();
	durationVectorPyra = (VectorEndPyra - VectorStartPyra) / (double) CLOCKS_PER_SEC;

	VectorStartSort = std::clock();
    fj.sortVector();
	VectorEndSort = std::clock();
	durationVectorSort = (VectorEndSort - VectorStartSort) / (double) CLOCKS_PER_SEC;


    std::cout << "After: ";
    if (DEBUG) std::cout << "After: ";
	fj.displayVector();

	if (VERIFY)	{
		fj.verifyVectorResult();
	}
	durationVectorAll = (VectorEndSort - VectorStartPyra) / (double) CLOCKS_PER_SEC;

	if (TIME_ALL)	{
		std::cout << "Time to create the pyramid: " << std::fixed << std::setprecision(8) << durationVectorPyra << "s" << std::endl;
		std::cout << "Time to sort the vector:    " << std::fixed << std::setprecision(8) << durationVectorSort << "s" << std::endl;
	}

/*
** --------------------------------- VECTOR ---------------------------------
*/


/*
** --------------------------------- DEQUE ---------------------------------
*/

	std::clock_t  DequeStartPyra, DequeEndPyra, DequeStartSort, DequeEndSort;
    double  durationDequePyra, durationDequeSort, durationDequeAll;

    if (DEBUG) std::cout << "Before: ";
	// fj.displayDeque();

	DequeStartPyra = std::clock();
	fj.createDequePyra();
	DequeEndPyra = std::clock();
	durationDequePyra = (DequeEndPyra - DequeStartPyra) / (double) CLOCKS_PER_SEC;

	DequeStartSort = std::clock();
	fj.sortDeque();
	DequeEndSort = std::clock();
	durationDequeSort = (DequeEndSort - DequeStartSort) / (double) CLOCKS_PER_SEC;

	if (DEBUG) std::cout << "After: ";
	// fj.displayDeque();

	if (VERIFY)	{
		fj.verifyDequeResult();
	}
	durationDequeAll = (DequeEndSort - DequeStartPyra) / (double) CLOCKS_PER_SEC;

	if (TIME_ALL)	{
		std::cout << "Time to create the pyramid: " << std::fixed << std::setprecision(8) << durationDequePyra << "s" << std::endl;
		std::cout << "Time to sort the deque:     " << std::fixed << std::setprecision(8) << durationDequeSort << "s" << std::endl;
	}


/*
** --------------------------------- DEQUE ---------------------------------
*/

	if (!TIME_ALL)	{
		std::cout << "Time to process a range of  " << fj.getVectorDataSize() << " elements with std::[Vector] : " << std::fixed << std::setprecision(8) << durationVectorAll << "s" << std::endl;
		std::cout << "Time to process a range of  " << fj.getDequeDataSize() << " elements with std::[Deque]  : " << std::fixed << std::setprecision(8) << durationDequeAll << "s" << std::endl;
	}


    return 0;
}
