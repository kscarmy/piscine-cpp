#include "PmergeMe.hpp"
#include <vector>
#include <cstdlib> // pour std::atoi

int main(int argc, char **argv)
{
    if (argc <= 2)
    {
        std::cout << "Usage: ./PmergeMe number number [...]" << std::endl;
        return 1;
    }

    std::vector<int> numbers;
    for (int i = 1; i < argc; i++)
    {
        numbers.push_back(std::atoi(argv[i]));
    }

    std::cout << "Before: ";
    for (size_t i = 0; i < numbers.size(); i++)
    {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    PmergeMe sorter;
    sorter.sort(numbers);

    std::cout << "After: ";
    for (size_t i = 0; i < numbers.size(); i++)
    {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
