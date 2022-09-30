/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 08:40:14 by guderram          #+#    #+#             */
/*   Updated: 2022/09/30 18:03:07 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"
# include <iostream>


# define CALL 1

class ScavTrap : public ClapTrap
{
	public:

	ScavTrap();
	ScavTrap(std::string Name);
	~ScavTrap();

	void attack(const std::string& target);
	// void takeDamage(unsigned int amount);
	// void beRepaired(unsigned int amount);

	// private:
	// std::string		_Name;
	// int				_Hit;			// PV
	// int				_EnergyPoints;	// PA
	// int				_AttackDamage;	// DMG 
};


#endif
