# include "convert.hpp"

void	printChar(char c, std::string str){
	if (findMeOtherString(str, true) || findMeOtherString(str, false)){
		std::cout << "char: impossible" << std::endl;	return;}
	if (c < 0 || c > 127){
		std::cout << "char: impossible" << std::endl;	return;}
	if (c <= 31 || c >= 127){
		std::cout << "char: Non displayable" << std::endl;	return;}

	std::cout << "char: '" << c << "'" << std::endl;
}

void	goChar(std::string str){
	char c = str[0] - 48;

	printChar(c, str);
	printInt(static_cast<int>(c), str);
	printFloat(static_cast<float>(c), str);
	printDouble(static_cast<double>(c), str);
}
