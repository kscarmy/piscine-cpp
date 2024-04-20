/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 08:40:09 by guderram          #+#    #+#             */
/*   Updated: 2022/09/30 17:27:23 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
// #include "ClapTrap.hpp"

	ClapTrap::ClapTrap(void) : _Name("default"), _Hit(100), _EnergyPoints(50), _AttackDamage(20){
	if (CALL) { std::cout << "DEFAULT ClapTrap CONSTRUCTOR CALL" << std::endl; }	}


	ClapTrap::ClapTrap(std::string Name) : _Name(Name), _Hit(100), _EnergyPoints(50), _AttackDamage(20){
	if (CALL) { std::cout << "NAME ClapTrap CONSTRUCTOR CALL" << std::endl; }	}

	ClapTrap::~ClapTrap(void){
	if (CALL) { std::cout << "DEFAULT ClapTrap DESTRUCTOR CALL" << std::endl; }	}


	void ClapTrap::attack(const std::string& target){
		if (CALL)	{
			if (_EnergyPoints > 0)
				{_EnergyPoints = _EnergyPoints - 1; std::cout << "ClapTrap " << _Name << " attacks " << target << ", causing " << _AttackDamage << " points of damage!" << std::endl;	}
			else
				{std::cout << "ClapTrap has not enought EnergyPoints lefts" << std::endl;}
			std::cout << "ClapTrap has " << _EnergyPoints << " EnergyPoints lefts" << std::endl;	}	}
	
	
	void ClapTrap::takeDamage(unsigned int amount){
		if (CALL)	{ _Hit = _Hit - amount;
			std::cout << "ClapTrap " << _Name << " takes " << amount << " damage. " << _Hit << " HP left" << std::endl;	}	}
	
	void ClapTrap::beRepaired(unsigned int amount){
		if (CALL)	{
			if (_EnergyPoints > 0)	{_EnergyPoints = _EnergyPoints - 1; 
			_Hit = _Hit + amount;
			std::cout << "ClapTrap " << _Name << " repair " << amount << " heal points. " << _EnergyPoints << "PA left" << std::endl;	}
			else
				{std::cout << "ClapTrap has not enought EnergyPoints lefts" << std::endl;}	}	}
