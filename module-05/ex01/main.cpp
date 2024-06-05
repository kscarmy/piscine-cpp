/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:13:24 by guderram          #+#    #+#             */
/*   Updated: 2024/06/05 13:41:10 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


int main( void )
{
	/***************************************/

	Bureaucrat jean("jean", 2);
	std::cout << jean.getName() << " has grade " << jean.getGrade() << std::endl;

	/***************************************/

	Form papier("papier", 10, 20);
	Form vraipier(papier);
	
	jean.signForm(papier);
	papier.beSigned(jean);

	std::cout << jean.getName() << " has grade " << jean.getGrade() << std::endl;
	for (int i=0; i<10; i++){
		jean.decrement();
	}
	std::cout << jean.getName() << " has grade " << jean.getGrade() << std::endl;

	std::cout << std::endl << "-------------------" << std::endl << std::endl;
	
	Form papier2("papier2", 10, 20);
	Form vraipier2(papier2);

	vraipier2.beSigned(jean);
	jean.signForm(vraipier2);
	
	std::cout << papier2 << std::endl;
	std::cout << vraipier2 << std::endl;

	/***************************************/

	return 0;
}
