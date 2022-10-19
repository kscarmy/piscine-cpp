#include "easyfind.hpp"

int main(void)
{
    std::cout << "VECTOR : ";
    std::vector<int> vect;

    for (int i=0; i<5; i++){
        vect.push_back(i*i+1);
        std::cout << vect[i] << " ";}
    std::cout << std::endl;
    EasyFind(vect, 0);
    EasyFind(vect, 1);
    EasyFind(vect, 2);
    EasyFind(vect, 4);
    EasyFind(vect, 10);
    EasyFind(vect, 17);
    EasyFind(vect, 18);

    std::cout << std::endl << "-------------------------------------" << std::endl << std::endl;

    std::cout << "LIST : ";
    std::list<int> list;

    for (int i=0; i<5; i++){
        list.push_back(i*i+1);
        std::cout << list.back() << " ";}
    std::cout << std::endl;
        EasyFind(vect, 0);
    EasyFind(vect, 1);
    EasyFind(vect, 2);
    EasyFind(vect, 4);
    EasyFind(vect, 10);
    EasyFind(vect, 17);
    EasyFind(vect, 18);


    return 0;
}
