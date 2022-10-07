/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:13:24 by guderram          #+#    #+#             */
/*   Updated: 2022/10/07 19:28:35 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#define LECTURE 0

int main( void )
{
	/***************************************/

	Bureaucrat asterix("Asterix", 30);
	if (LECTURE) std::cout << "A ----------" << std::endl;
	PresidentialPardonForm papier("Idefix");
	if (LECTURE) std::cout << "B ----------" << std::endl;
	papier.beSigned(asterix);
	if (LECTURE) std::cout << "C ----------" << std::endl;
	for (int i=0; i<10; i++){
		asterix.increment();
	}
	if (LECTURE) std::cout << "D ----------" << std::endl;
	asterix.signForm(papier);
	if (LECTURE) std::cout << "E ----------" << std::endl;
	// std::cout << asterix.getGrade() << " grade ob" << std::endl;
	papier.execute(asterix);
	if (LECTURE) std::cout << "F ----------" << std::endl;
	for (int i=0; i<10; i++){
		asterix.increment();
	}
	if (LECTURE) std::cout << "G ----------" << std::endl;
	papier.execute(asterix);
	if (LECTURE) std::cout << "H ----------" << std::endl;

	/***************************************/

	Bureaucrat obelix("Obelix", 75);
	if (LECTURE) std::cout << "A ----------" << std::endl;
	RobotomyRequestForm vraipied("Le pied");
	if (LECTURE) std::cout << "B ----------" << std::endl;
	vraipied.beSigned(obelix);
	if (LECTURE) std::cout << "C ----------" << std::endl;
	for (int i=0; i<10; i++){
		obelix.increment();
	}
	if (LECTURE) std::cout << "D ----------" << std::endl;
	obelix.signForm(vraipied);
	if (LECTURE) std::cout << "E ----------" << std::endl;
	// std::cout << obelix.getGrade() << " grade ob" << std::endl;
	vraipied.execute(obelix);
	if (LECTURE) std::cout << "F ----------" << std::endl;
	for (int i=0; i<20; i++){
		obelix.increment();
	}
	if (LECTURE) std::cout << "G ----------" << std::endl;
	vraipied.execute(obelix);
	if (LECTURE) std::cout << "H ----------" << std::endl;

	/***************************************/

	Bureaucrat panoramix("Panoramix", 150);
	if (LECTURE) std::cout << "A ----------" << std::endl;
	ShrubberyCreationForm popo("La potion");
	if (LECTURE) std::cout << "B ----------" << std::endl;
	popo.beSigned(panoramix);
	if (LECTURE) std::cout << "C ----------" << std::endl;
	for (int i=0; i<10; i++){
		panoramix.increment();
	}
	if (LECTURE) std::cout << "D ----------" << std::endl;
	panoramix.signForm(popo);
	if (LECTURE) std::cout << "E ----------" << std::endl;
	// std::cout << panoramix.getGrade() << " grade ob" << std::endl;
	popo.execute(panoramix);
	if (LECTURE) std::cout << "F ----------" << std::endl;
	for (int i=0; i<20; i++){
		panoramix.increment();
	}
	if (LECTURE) std::cout << "G ----------" << std::endl;
	popo.execute(panoramix);
	if (LECTURE) std::cout << "H ----------" << std::endl;
	
	/***************************************/

	return 0;
}
