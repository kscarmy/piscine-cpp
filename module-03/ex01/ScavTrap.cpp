/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 08:40:09 by guderram          #+#    #+#             */
/*   Updated: 2022/09/30 18:12:51 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

	ScavTrap::ScavTrap(void) {
	if (CALL) { std::cout << "DEFAULT ScavTrap CONSTRUCTOR CALL" << std::endl; }	
	}


	ScavTrap::ScavTrap(std::string Name){
	if (CALL) { std::cout << "NAME ScavTrap CONSTRUCTOR CALL" << std::endl; }
	_Name = Name;
	}

	ScavTrap::~ScavTrap(void){
	if (CALL) { std::cout << "DEFAULT ScavTrap DESTRUCTOR CALL" << std::endl; }	}


	void ScavTrap::attack(const std::string& target){
		if (CALL)	{
			if (_EnergyPoints > 0)
				{_EnergyPoints = _EnergyPoints - 1; std::cout << "ScavTrap " << _Name << " attacks " << target << ", causing " << _AttackDamage << " points of damage!" << std::endl;	}
			else
				{std::cout << "ScavTrap has not enought EnergyPoints lefts" << std::endl;}
			std::cout << "ScavTrap has " << _EnergyPoints << " EnergyPoints lefts" << std::endl;	
			}	}
	

	void ScavTrap::guardGate(){
		if (CALL)	{
			std::cout << _Name << " ScavTrap is now in Gate keeper mod !" << std::endl;	}
	}
	