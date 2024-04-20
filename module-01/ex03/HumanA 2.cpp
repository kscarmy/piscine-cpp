/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:39:44 by guderram          #+#    #+#             */
/*   Updated: 2022/08/26 18:31:19 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& type) : _name(name), _type(type){return ;}

HumanA::~HumanA(){}

void	HumanA::attack(void)	const{
	std::cout << _name << " attacks with their " << _type.getType() << std::endl;}