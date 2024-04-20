# include "convert.hpp"


void	printInt(int i, std::string str){
	if (i > INT_MAX){
		std::cout << "int: impossible" << std::endl;	return;}
	if (i < INT_MIN){
		std::cout << "int: impossible" << std::endl;	return;}
	if (findMeOtherString(str, true) || findMeOtherString(str, false)){
		std::cout << "int: impossible" << std::endl;	return;}

	std::cout << "int: " << i << std::endl;
}

void	goInt(std::string str){
	int i = std::atol(str.c_str());
	
	printChar(static_cast<char>(i), str);
	printInt(i, str);
	printFloat(static_cast<float>(i), str);
	printDouble(static_cast<double>(i), str);
}
