/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 16:30:33 by guderram          #+#    #+#             */
/*   Updated: 2022/08/30 17:18:10 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

char	ft_my_toupper(char c)
{
	return (std::toupper(static_cast<unsigned char>(c)));
}

void ft_my_putstr(char *str)
{
	for (size_t i=0; i < strlen(str); i++)
	{
		std::cout << ft_my_toupper(str[i]);
	}
}

int	main(int argc, char **argv)
{
	// char 	*str;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for(int i=1; i < argc; i++)
	{
		ft_my_putstr(argv[i]);
		if (i < argc - 1)
			std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}
