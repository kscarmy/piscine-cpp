/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 08:40:09 by guderram          #+#    #+#             */
/*   Updated: 2022/09/30 18:03:24 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

	ScavTrap::ScavTrap(void) {
	if (CALL) { std::cout << "DEFAULT ScavTrap CONSTRUCTOR CALL" << std::endl; }	
	// ScavTrap::ClapTrap();
	}


	ScavTrap::ScavTrap(std::string Name){
	if (CALL) { std::cout << "NAME ScavTrap CONSTRUCTOR CALL" << std::endl; }
	(ScavTrap::ClapTrap(Name));
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
	
	
	// void ScavTrap::takeDamage(unsigned int amount){
	// 	if (CALL)	{ _Hit = _Hit - amount;
	// 		std::cout << "ScavTrap " << _Name << " takes " << amount << " damage. " << _Hit << " HP left" << std::endl;	}	}
	
	// void ScavTrap::beRepaired(unsigned int amount){
	// 	if (CALL)	{
	// 		if (_EnergyPoints > 0)	{_EnergyPoints = _EnergyPoints - 1; 
	// 		_Hit = _Hit + amount;
	// 		std::cout << "ScavTrap " << _Name << " repair " << amount << " heal points. " << _EnergyPoints << "PA left" << std::endl;	}
	// 		else
	// 			{std::cout << "ScavTrap has not enought EnergyPoints lefts" << std::endl;}	}	}
