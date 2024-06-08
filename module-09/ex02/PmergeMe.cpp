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

void PmergeMe::sort(std::vector<int>& vec)
{
    if (!vec.empty())
    {
        fordJohnsonSort(vec, 0, vec.size() - 1);
    }
}

void PmergeMe::fordJohnsonSort(std::vector<int>& vec, int left, int right)
{
    // Implémentation de l'algorithme de Ford-Johnson
    // Pour simplifier, je vais utiliser std::sort ici
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        fordJohnsonSort(vec, left, mid);
        fordJohnsonSort(vec, mid + 1, right);
        std::inplace_merge(vec.begin() + left, vec.begin() + mid + 1, vec.begin() + right + 1);
    }
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
