/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:13:24 by guderram          #+#    #+#             */
/*   Updated: 2022/09/30 18:17:46 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
	FragTrap jean;
	FragTrap jeannot("jeannot");

	for (int i = 0; i<2; i++)
		jean.attack("un lapin");

	for (int i = 0; i<2; i++)
		jeannot.takeDamage(1);

	for (int i = 0; i<2; i++)
		jeannot.beRepaired(1);

	jean.highFivesGuys();
	jeannot.highFivesGuys();

	return 0;
}
