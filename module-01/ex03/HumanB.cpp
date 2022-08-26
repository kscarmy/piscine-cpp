/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:56:09 by guderram          #+#    #+#             */
/*   Updated: 2022/08/26 18:33:28 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _type(0){return ;}

HumanB::~HumanB(){}

void	HumanB::attack(void)	const{
	if (_type)std::cout << _name << " attacks with their "  << _type->getType() << std::endl;}

void	HumanB::setWeapon(Weapon& type){_type = &type;}