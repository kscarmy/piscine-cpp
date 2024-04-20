/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:13:24 by guderram          #+#    #+#             */
/*   Updated: 2022/09/30 17:16:24 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"


int		ft_karen_level(std::string complain)
{
	std::string str [4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (str[i].compare(complain) == 0) {return (i);}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	return (5);
}

int		main(int argc, char **argv)
{
	if (argc != 2){	std::cout << "Sorry but Harl need Arg" << std::endl;	return (0);}

	std::string str = (argv[1]);
	Harl	Karen;
	switch (ft_karen_level(str))
	{
	case 0:
		Karen.complain("DEBUG");
	case 1:
		Karen.complain("INFO");
	case 2:
		Karen.complain("WARNING");
	case 3:
		Karen.complain("ERROR");
	}

	return (0);
}
