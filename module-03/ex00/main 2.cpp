/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:13:24 by guderram          #+#    #+#             */
/*   Updated: 2022/09/30 12:53:00 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap jean;
	ClapTrap jeannot("jeannot");

	for (int i = 0; i<12; i++)
		jean.attack("un lapin");

	for (int i = 0; i<12; i++)
		jeannot.takeDamage(1);

	for (int i = 0; i<12; i++)
		jeannot.beRepaired(1);

	return 0;
}
