/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:13:24 by guderram          #+#    #+#             */
/*   Updated: 2023/03/23 06:00:13 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"




int main( void )
{
	/***************************************/

	// const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	// std::cout << meta->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	// meta->makeSound();

	// delete meta;
	delete j;
	delete i;

	std::cout << std::endl << std::endl;
	
	/***************************************/

	const Dog* a = new Dog();
	const Cat* b = new Cat();
	
	std::cout << a->getType() << " " << std::endl;
	std::cout << b->getType() << " " << std::endl;
	a->makeSound();
	b->makeSound();


	delete a;
	delete b;
	
	std::cout << std::endl << std::endl;
	
	/***************************************/

	const Animal* troupeau[4];

	for (int i=0;i<4;i++){
		if (i%2 == 0)	{troupeau[i] = new Dog();}
		else			{troupeau[i] = new Cat();}
	}

	for (int i=0;i<4;i++){
		troupeau[i]->makeSound();
	}

	for (int i=0;i<4;i++){
		delete troupeau[i];
	}
	
	/***************************************/

	return 0;
}
