/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 13:54:33 by guderram          #+#    #+#             */
/*   Updated: 2022/08/26 14:04:22 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "MEMORY" << std::endl;
	std::cout << "STR : " << &str << std::endl;
	std::cout << "PTR : " << &*stringPTR << std::endl;
	std::cout << "REF : " << &stringREF << std::endl;
	std::cout << "VALUE" << std::endl;
	std::cout << "STR : " << str << std::endl;
	std::cout << "PTR : " << *stringPTR << std::endl;
	std::cout << "REF : " << stringREF << std::endl;
	return (0);
}