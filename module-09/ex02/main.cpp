#include "PmergeMe.hpp"
#include <vector>
#include <cstdlib> // pour std::atoi
#define DEBUG 0

int main(int argc, char **argv)
{
    if (argc <= 2)
    {
        std::cout << "Usage: ./PmergeMe number number [...]" << std::endl;
        return 1;
    }

    PmergeMe fj;
    for (int i = 1; i < argc; i++)
    {
		fj.pushBackVector(std::atoi(argv[i]));
    }

    if (DEBUG) std::cout << "Before: ";
    fj.displayVector();

    fj.sortVector();

    if (DEBUG) std::cout << "After: ";
	fj.displayVector();

    return 0;
}
