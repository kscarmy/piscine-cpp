/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 08:40:14 by guderram          #+#    #+#             */
/*   Updated: 2022/09/30 17:38:44 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>


# define CALL 1

class ClapTrap
{
	public:

	ClapTrap();
	ClapTrap(std::string Name);
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	protected:
	std::string		_Name;
	int				_Hit;			// PV
	int				_EnergyPoints;	// PA
	int				_AttackDamage;	// DMG 
};


#endif
