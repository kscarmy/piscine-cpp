#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <cstdlib>

# include <vector>
# include <list>
# include <iterator>
# include <algorithm>



template <typename T>
void EasyFind(T src, int n){
	typename T::iterator i;
	std::cout << "EasyFind : testing : " << n << " : ";
	i = std::find(src.begin(), src.end(), n);
	if (i == src.end())
		std::cout << "NOT FOUND" << std::endl;
	else
		std::cout << "FOUND" << std::endl;
}

#endif /* *********************************************************** ARRAY_H */














