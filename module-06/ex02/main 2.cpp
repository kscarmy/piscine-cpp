/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:13:24 by guderram          #+#    #+#             */
/*   Updated: 2022/10/15 17:19:47 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <time.h>
# include "Classes.hpp"
# include <cstdlib>

Base * generate(void){
	srand(time(NULL));
	int i = rand() % 3;

	Base *ret =	 NULL;
	std::cout << "i : " << i << std::endl;
	if (i == 0){
		ret = new A;
	}
	else if (i == 1){
		ret = new B;
	}
	else if (i == 2){
		ret = new C;
	}
	return (ret);
}

void identify(Base* p){
	std::cout << "* ";
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p){
	std::cout << "& ";
	try {
	A jean = dynamic_cast<A&>(p);
	std::cout << "A" << std::endl;
	}
	catch (std::exception &e){}

	try {
	B jean = dynamic_cast<B&>(p);
	std::cout << "B" << std::endl;
	}
	catch (std::exception &e){}

	try {
	C jean = dynamic_cast<C&>(p);
	std::cout << "C" << std::endl;
	}
	catch (std::exception &e){}
}

int main( void )
{
	Base *jean = generate();
	identify(jean);
	identify(*jean);
	
	delete jean;
	return 0;
}
