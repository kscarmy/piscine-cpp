/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 22:07:16 by guderram          #+#    #+#             */
/*   Updated: 2022/08/26 13:44:09 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	Zombie *ZZ = new Zombie[N];
	for (int i = 0; i < N; i++){
		ZZ[i].setName(name);}
	return ZZ;
}
