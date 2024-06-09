#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>

# define DEBUG_SORT 0

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
		std::size_t size() const;

		void displayVector() const;

    private:
		std::vector<int> _data;
};


#endif /* ******************************************************** PMERGEME_H */
