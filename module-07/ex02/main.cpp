#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750


int main(void)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
	std::cout << "partie 1 :" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
	std::cout << "partie 2 :" << std::endl;

    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
	

	std::cout << "------------------------------------------------" << std::endl;

	Array<std::string> jean(4);
	std::string* jeannot = new std::string[4];


	std::string  str[4] = {"salut", "mec", "comment", "va tu ?"};

	for (int i=0; i<4; i++){
		jean[i] = str[i];
		jeannot[i] = str[i];
	}

	for (int i=0; i<4; i++){
		std::cout << "jean[" << i << "] = " << jean[i] << std::endl;
		std::cout << "jeannot[" << i << "] = " << jeannot[i] << std::endl;
	}

	Array<std::string> ah = jean;
	Array<std::string> bh(ah);

	std::cout << "addr : "  << &jean << " jean" << std::endl;
	std::cout << "addr : "  << &ah << " ah" << std::endl;
	std::cout << "addr : "  << &bh << " bh" << std::endl;

	delete [] jeannot;

    return 0;
}