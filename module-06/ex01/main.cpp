/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:13:24 by guderram          #+#    #+#             */
/*   Updated: 2024/05/25 19:40:46 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <stdint.h>
# include "data.hpp"
# include "Serializer.hpp"

// struct Data
// {
// 	std::string		jeux;
// 	int				n;
// };


// uintptr_t serialize(Data* ptr){
// 	return (reinterpret_cast<uintptr_t>(ptr));
// }

// Data* deserialize(uintptr_t raw){
// 	return (reinterpret_cast<Data*>(raw));
// }

int main( void )
{
	// Data *preston = new Data;
	// preston->jeux = "Fallout";
	// preston->n = 4;
	
	// std::cout << "preston adress : " << preston << std::endl;

	// uintptr_t settlement =  serialize(preston);

	// std::cout << "settlement adress : " << settlement << std::endl;		

	// Data *garvey = deserialize(settlement);

	// std::cout << "garvey adress :  " << garvey << std::endl;		

	// delete preston;

	Data preston;
	preston.jeux = "Fallout";
	preston.n = 4;

	std::cout << "preston adress : " << &preston << std::endl;

    // Serialize the pointer to data
    uintptr_t settlement = Serializer::serialize(&preston);
	std::cout << "settlement adress : " << &settlement << std::endl;		

    // Deserialize the raw value back to a Data pointer
    Data* garvey = Serializer::deserialize(settlement);

	std::cout << "garvey adress :  " << garvey << std::endl;		

    // Verify that the deserialized pointer is equal to the original pointer
    if (garvey == &preston) {
        std::cout << "Serialization and deserialization successful!" << std::endl;
		std::cout << "Data.jeux: " << garvey->jeux << std::endl;
		std::cout << "Data.n: " << garvey->n << std::endl;
    } else {
        std::cout << "Serialization and deserialization failed." << std::endl;
    }

    // return 0;
	return 0;
}
