/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:13:24 by guderram          #+#    #+#             */
/*   Updated: 2024/06/05 13:50:50 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

#define LECTURE 1

int main( void )
{

	/***************************************/

	Intern		AssuranceToutRix;

	AForm*		PasLeBonFormulaire;
	PasLeBonFormulaire = AssuranceToutRix.makeForm("Jean Lasalle president !", "jeannot elu a 200pct");

	/***************************************/

	Bureaucrat asterix("Asterix", 30);
	if (LECTURE) std::cout << "A ----------" << std::endl;
	// PresidentialPardonForm papier("Idefix");
	AForm*		papier;
	papier = AssuranceToutRix.makeForm("presidential pardon", "Idefix");
	if (LECTURE) std::cout << "B ----------" << std::endl;
	papier->beSigned(asterix);
	if (LECTURE) std::cout << "C ----------" << std::endl;
	for (int i=0; i<10; i++){
		asterix.increment();
	}
	if (LECTURE) std::cout << "D ----------" << std::endl;
	asterix.signForm(*papier);
	if (LECTURE) std::cout << "E ----------" << std::endl;
	// std::cout << asterix.getGrade() << " grade ob" << std::endl;
	papier->execute(asterix);
	if (LECTURE) std::cout << "F ----------" << std::endl;
	for (int i=0; i<10; i++){
		asterix.increment();
	}
	if (LECTURE) std::cout << "G ----------" << std::endl;
	papier->execute(asterix);
	if (LECTURE) std::cout << "H ----------" << std::endl;

	/***************************************/

	Bureaucrat obelix("Obelix", 75);
	if (LECTURE) std::cout << "A ----------" << std::endl;
	AForm*		vraipied;
	vraipied = AssuranceToutRix.makeForm("robotomy request", "Le pied");
	// RobotomyRequestForm vraipied("Le pied");
	if (LECTURE) std::cout << "B ----------" << std::endl;
	vraipied->beSigned(obelix);
	if (LECTURE) std::cout << "C ----------" << std::endl;
	for (int i=0; i<10; i++){
		obelix.increment();
	}
	if (LECTURE) std::cout << "D ----------" << std::endl;
	obelix.signForm(*vraipied);
	if (LECTURE) std::cout << "E ----------" << std::endl;
	// std::cout << obelix.getGrade() << " grade ob" << std::endl;
	vraipied->execute(obelix);
	if (LECTURE) std::cout << "F ----------" << std::endl;
	for (int i=0; i<20; i++){
		obelix.increment();
	}
	if (LECTURE) std::cout << "G ----------" << std::endl;
	vraipied->execute(obelix);
	if (LECTURE) std::cout << "H ----------" << std::endl;

	/***************************************/

	Bureaucrat panoramix("Panoramix", 150);
	if (LECTURE) std::cout << "A ----------" << std::endl;
	AForm*		popo;
	popo = AssuranceToutRix.makeForm("shrubbery creation", "La potion");
	// ShrubberyCreationForm popo("La potion");
	if (LECTURE) std::cout << "B ----------" << std::endl;
	popo->beSigned(panoramix);
	if (LECTURE) std::cout << "C ----------" << std::endl;
	for (int i=0; i<10; i++){
		panoramix.increment();
	}
	if (LECTURE) std::cout << "D ----------" << std::endl;
	panoramix.signForm(*popo);
	if (LECTURE) std::cout << "E ----------" << std::endl;
	// std::cout << panoramix.getGrade() << " grade ob" << std::endl;
	popo->execute(panoramix);
	if (LECTURE) std::cout << "F ----------" << std::endl;
	for (int i=0; i<20; i++){
		panoramix.increment();
	}
	if (LECTURE) std::cout << "G ----------" << std::endl;
	popo->execute(panoramix);
	if (LECTURE) std::cout << "H ----------" << std::endl;
	
	/***************************************/

	return 0;
}
