/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 21:56:35 by guderram          #+#    #+#             */
/*   Updated: 2022/08/26 13:44:09 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Zombie.hpp"

int	main(void)
{
	int N = 2;
	Zombie* horde = zombieHorde(N, "jean");
	for (int i = 0; i < N; i++){
		horde[i].announce();}
	delete [] horde;
	return (0);
}
