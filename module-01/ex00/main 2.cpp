/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 21:56:35 by guderram          #+#    #+#             */
/*   Updated: 2022/09/30 10:20:24 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Zombie.hpp"

int	main(void)
{
	Zombie* za = newZombie("jean");
	
	randomChump("jeannot");
	
	delete za;
	return (0);
}
