#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>

class PmergeMe
{
    public:
        PmergeMe();
        ~PmergeMe();


        void sort(std::vector<int>& vec);

    private:
        void fordJohnsonSort(std::vector<int>& vec, int left, int right);
};


#endif /* ******************************************************** PMERGEME_H */
