/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:13:24 by guderram          #+#    #+#             */
/*   Updated: 2022/10/06 18:01:01 by guderram         ###   ########.fr       */
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

	vraipier.beSigned(jean);
	// jean.signForm(vraipier);
	
	std::cout << papier << std::endl;
	std::cout << vraipier << std::endl;

	/***************************************/

	return 0;
}
