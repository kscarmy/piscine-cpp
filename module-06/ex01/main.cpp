/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:13:24 by guderram          #+#    #+#             */
/*   Updated: 2022/10/15 16:26:35 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <stdint.h>

struct Data
{
	std::string		jeux;
	int				n;
};


uintptr_t serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw){
	return (reinterpret_cast<Data*>(raw));
}

int main( void )
{
	Data *preston = new Data;
	preston->jeux = "Fallout";
	preston->n = 4;
	
	std::cout << "preston adress : " << preston << std::endl;

	uintptr_t settlement =  serialize(preston);

	std::cout << "settlement adress : " << settlement << std::endl;		

	Data *garvey = deserialize(settlement);

	std::cout << "garvey adress :  " << garvey << std::endl;		

	delete preston;
	return 0;
}
