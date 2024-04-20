# include "convert.hpp"


void	printDouble(double d, std::string str){
	if (d == 0) {std::cout << "double: " << d << ".0" << std::endl; return;}
	if (d > __DBL_MAX__){
		std::cout << "double: impossible" << std::endl;	return;}
	if (d < __DBL_MIN__){
		std::cout << "double: impossible" << std::endl;	return;}

	if (findStr(str, ".0f") || findStr(str, ".0")){
		std::cout << "double: " << d << ".0" << std::endl; return; }
	if (isCharIn(str, '.') || findMeOtherString(str, false) || findMeOtherString(str, true))
		std::cout << "double: " << d << std::endl;
	else
		std::cout << "double: " << d << ".0" << std::endl;
}

void	goDouble(std::string str){
	double d = std::atof(str.c_str());

	printChar(static_cast<char>(d), str);
	printInt(static_cast<int>(d), str);
	printFloat(static_cast<float>(d), str);
	printDouble(static_cast<double>(d), str);
}
