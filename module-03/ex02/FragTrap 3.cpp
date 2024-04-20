/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 08:40:09 by guderram          #+#    #+#             */
/*   Updated: 2022/09/30 18:18:14 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

	FragTrap::FragTrap(void) {
	if (CALL) { std::cout << "DEFAULT FragTrap CONSTRUCTOR CALL" << std::endl; }	
	}


	FragTrap::FragTrap(std::string Name){
	if (CALL) { std::cout << "NAME FragTrap CONSTRUCTOR CALL" << std::endl; }
	_Name = Name;
	}

	FragTrap::~FragTrap(void){
	if (CALL) { std::cout << "DEFAULT FragTrap DESTRUCTOR CALL" << std::endl; }	}


	void FragTrap::attack(const std::string& target){
		if (CALL)	{
			if (_EnergyPoints > 0)
				{_EnergyPoints = _EnergyPoints - 1; std::cout << "FragTrap " << _Name << " attacks " << target << ", causing " << _AttackDamage << " points of damage!" << std::endl;	}
			else
				{std::cout << "FragTrap has not enought EnergyPoints lefts" << std::endl;}
			std::cout << "FragTrap has " << _EnergyPoints << " EnergyPoints lefts" << std::endl;	
			}	}
	

	void FragTrap::highFivesGuys(){
		if (CALL)	{
			std::cout << _Name << " FragTrap is now asking for high fives !" << std::endl;	}
	}
	