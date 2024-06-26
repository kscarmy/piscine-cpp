#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream> // pour std::cout
# include <vector> // pour std::vector
# include <sstream> // pour std::ostringstream
# include <ctime> // pour std::clock_t
#include <cstdlib> // pour std::atoi
#include <iomanip> // pour std::setprecision
#include <deque> // pour std::deque

# define DEBUG_SORT 0
# define DEBUG_PYRA 0
# define TIME_ALL 0
# define VERIFY 0

class PmergeMe
{
    public:
        PmergeMe();
		PmergeMe( PmergeMe const & src );
        ~PmergeMe();

		PmergeMe &		operator=( PmergeMe const & rhs );

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

/*
** --------------------------------- DEQUE ---------------------------------
*/
	void pushBackDeque(int n);
    std::size_t getDequeDataSize() const;
    void displayDeque() const;
    std::string displayDequeString(std::size_t arr, std::size_t n) const;
    void sortDequeNbis(std::size_t first, std::size_t second, std::size_t nF, std::size_t nS);
    bool checkDequePyra();
    void createDequePyra();
    void verifyDequeResult();
    void sortDeque();

    private:
/*
** --------------------------------- VECTOR ---------------------------------
*/
		std::vector<int> _dataV;
		std::vector<int> _pyraV;

/*
** --------------------------------- DEQUE ---------------------------------
*/
		std::deque<int> _dataD;
		std::deque<int> _pyraD;
};

std::ostream &			operator<<( std::ostream & o, PmergeMe const & i );

#endif /* ******************************************************** PMERGEME_H */
