#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream> // pour std::cout
# include <vector> // pour std::vector
# include <sstream> // pour std::ostringstream
# include <ctime> // pour std::clock_t
#include <cstdlib> // pour std::atoi
#include <iomanip> // pour std::setprecision

# define DEBUG_SORT 0
# define DEBUG_PYRA 0
# define TIME_ALL 1

class PmergeMe
{
    public:
        PmergeMe();
        ~PmergeMe();

/*
** --------------------------------- VECTOR ---------------------------------
*/

        void sortVector();
		void sortVectorNbis(int *first, int *second, std::size_t nF, std::size_t nS);

		void pushBackVector(int n);
		std::size_t getVectorDataSize() const;

		void displayVector() const;
		std::string displayVectorString(int *arr, std::size_t n) const;

		void createVectorPyra();
		bool checkVectorPyra();

		void verifyVectorResult();




    private:
/*
** --------------------------------- VECTOR ---------------------------------
*/
		std::vector<int> _data;
		std::vector<int> _pyra;
};


#endif /* ******************************************************** PMERGEME_H */
