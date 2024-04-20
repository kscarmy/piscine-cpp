# include "convert.hpp"

void	printFloat(float f, std::string str){
	if (f == 0) {std::cout << "float: " << f << ".0f" << std::endl; return;}
	if (f > __FLT_MAX__){
		std::cout << "float: impossible" << std::endl;	return;}
	if (f < __FLT_MIN__){
		std::cout << "float: impossible" << std::endl;	return;}

	if (findStr(str, ".0f") || findStr(str, ".0")){
		std::cout << "float: " << f << ".0f" << std::endl; return; }
	if (isCharIn(str, '.') || findMeOtherString(str, true) || findMeOtherString(str, false)){	
		std::cout << "float: " << f << "f" << std::endl;}
	else
		std::cout << "float: " << f << ".0f" << std::endl;
	
}

void	goFloat(std::string str){
	float f = std::atof(str.c_str());

	printChar(static_cast<char>(f), str);
	printInt(static_cast<int>(f), str);
	printFloat(f, str);
	printDouble(static_cast<double>(f), str);
}
