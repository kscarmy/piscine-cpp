/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:13:24 by guderram          #+#    #+#             */
/*   Updated: 2022/09/30 18:12:37 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
	ScavTrap jean;
	ScavTrap jeannot("jeannot");

	for (int i = 0; i<2; i++)
		jean.attack("un lapin");

	for (int i = 0; i<2; i++)
		jeannot.takeDamage(1);

	for (int i = 0; i<2; i++)
		jeannot.beRepaired(1);

	jean.guardGate();
	jeannot.guardGate();

	return 0;
}
