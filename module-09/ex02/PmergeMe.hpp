#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <sstream>

# define DEBUG_SORT 1
# define DEBUG_PYRA 1

class PmergeMe
{
    public:
        PmergeMe();
        ~PmergeMe();


        void sortVector();
        // void sortVectorN(std::size_t from, std::size_t to);

        // void sortVectorNbis(int *first, int *second, std::size_t n);

		void sortVectorNbis(int *first, int *second, std::size_t nF, std::size_t nS);


		void pushBackVector(int n);
		std::size_t getDataSize() const;

		void displayVector() const;
		std::string displayVectorString(int *arr, std::size_t n) const;

		void createPyra();
		bool checkPyra();

    private:
		std::vector<int> _data;
		std::vector<int> _pyra;
};


#endif /* ******************************************************** PMERGEME_H */
