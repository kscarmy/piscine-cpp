#include "PmergeMe.hpp"

#define DEBUG 0

int main(int argc, char **argv)
{
    if (argc <= 2)	{
        std::cout << "Usage: ./PmergeMe number number [...]" << std::endl;
        return 1;
    }

    PmergeMe fj;
	std::clock_t VectorStartPyra, VectorEndPyra, VectorStartSort, VectorEndSort;
    double durationVectorPyra, durationVectorSort;


    for (int i = 1; i < argc; i++)	{
		fj.pushBackVector(std::atoi(argv[i]));
    }

/*
** --------------------------------- VECTOR ---------------------------------
*/

    if (DEBUG) std::cout << "Before: ";
    fj.displayVector();

	VectorStartPyra = std::clock();
	fj.createVectorPyra();
	VectorEndPyra = std::clock();
	durationVectorPyra = (VectorEndPyra - VectorStartPyra) / (double) CLOCKS_PER_SEC;

	VectorStartSort = std::clock();
    fj.sortVector();
	VectorEndSort = std::clock();
	durationVectorSort = (VectorEndSort - VectorStartSort) / (double) CLOCKS_PER_SEC;


    if (DEBUG) std::cout << "After: ";
	fj.displayVector();


	fj.verifyVectorResult();

	if (TIME_ALL)	{
		std::cout << "Time to create the pyramid: " << std::fixed << std::setprecision(16) << durationVectorPyra << "s" << std::endl;
		std::cout << "Time to sort the vector:    " << std::fixed << std::setprecision(16) << durationVectorSort << "s" << std::endl;
	}


	

    return 0;
}
