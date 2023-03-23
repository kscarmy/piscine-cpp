/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:13:24 by guderram          #+#    #+#             */
/*   Updated: 2023/03/23 02:32:08 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"




int main( void )
{
	/***************************************/

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
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

	const WrongAnimal* jean = new WrongAnimal();
	const WrongAnimal* michel = new WrongCat();
	const WrongCat* olas = new WrongCat();

	std::cout << std::endl;
	std::cout << "jean " << jean->getType() << " " << std::endl;
	jean->makeSound();

	std::cout  << "michel " << michel->getType() << " " << std::endl;
	michel->makeSound();
	
	std::cout  << "olas " << olas->getType() << " " << std::endl;
	olas->makeSound();

	delete jean;
	delete michel;
	delete olas;
	
	std::cout << std::endl << std::endl;
	
	/***************************************/



	

	return 0;
}
