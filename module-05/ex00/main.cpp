/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:13:24 by guderram          #+#    #+#             */
/*   Updated: 2024/05/23 12:35:44 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main( void )
{
	/***************************************/

	Bureaucrat defo;
	std::cout << defo.getName() << " has grade " << defo.getGrade() << std::endl;
	for (int i=0; i<100; i++){
		defo.increment();
	}
	std::cout << defo.getName() << " has grade " << defo.getGrade() << std::endl;

	/***************************************/

	Bureaucrat jean("jean", 0);
	std::cout << jean.getName() << " has grade " << jean.getGrade() << std::endl;
	for (int i=0; i<2; i++){
		jean.decrement();
	}
	std::cout << jean.getName() << " has grade " << jean.getGrade() << std::endl;

	std::cout << jean << std::endl;
	/***************************************/

	std::cout << defo.getName() << " has grade " << defo.getGrade() << std::endl;
	for (int i=0; i<100; i++){
		defo.increment();
	}
	std::cout << defo.getName() << " has grade " << defo.getGrade() << std::endl;

	/***************************************/

	return 0;
}
