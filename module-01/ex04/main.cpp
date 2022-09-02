/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:13:24 by guderram          #+#    #+#             */
/*   Updated: 2022/09/02 17:48:32 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int		ft_chgeck_argv(std::string file, std::string str_1){
	if (file.compare("") == 0){std::cout << "Le fichier n'existe pas ! 1" << std::endl; return 0; }
	if (str_1.compare("") == 0){std::cout << "La premiere string ne peut etre vide" << std::endl; return 0; }
	return 1;
}

int	ft_open(char *f_src){
	std::fstream src (f_src);
	if (src.is_open()){
		src.open (f_src); src.close(); return 1;}
	else{std::cout << "Le fichier n'existe pas ! 2" << std::endl; return 0; }
}

int main(int argc, char **argv)
{

	if (argc != 4){std::cout << "Les comptes sont pas bon" << std::endl; return (0);}
	if (ft_chgeck_argv(std::string(argv[1]), std::string(argv[2])) == 0){return 0;}
	if (ft_open(argv[1]) == 0){ return 0; }
	std::ofstream ret (std::string(argv[1]) += ".replace");
	std::ifstream file_src (argv[1]);
	std::string s1 = (argv[2]);
	std::string s2 = (argv[3]);
	std::string tmp;
	size_t pos = std::string::npos;
	while (std::getline (file_src, tmp)){
		while ((pos  = tmp.find(s1) )!= std::string::npos){
			tmp.erase(pos, s1.length());
			tmp.insert(pos, s2);}
		ret << tmp << std::endl;}
	file_src.close();
	ret.close();
	return 0;
}
