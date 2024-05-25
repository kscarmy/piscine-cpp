
# include <iostream>
# include <string>
# include "iter.hpp"


void	incre(int &i){
	i = i + i;
}

void	addResponse(std::string &str){
	str += " Comment va tu ?";
}


int main( void ) {
	int				tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::string		str[3] = {"yo jeannot", "yo alberto", "yo jeannine"};

	for (int i=0; i<9; i++){
		std::cout << tab[i] << " ";
	}
	std::cout << std::endl;

	for (int i=0; i<3; i++){
		std::cout << str[i] << std::endl;
	}

	/***************************************/

	::iter(tab, 9, incre);
	for (int i=0; i<9; i++){
		std::cout << tab[i] << " ";
	}
	std::cout << std::endl;

	::iter(str, 3, addResponse);
	for (int i=0; i<3; i++){
		std::cout << str[i] << std::endl;
	}

	return 0;
}