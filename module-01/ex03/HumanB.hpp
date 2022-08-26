/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:55:50 by guderram          #+#    #+#             */
/*   Updated: 2022/08/26 18:30:50 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANB_HPP
# define HUMANB_HPP

class HumanB
{
private:
	std::string	_name;
	Weapon*		_type;
public:
	void	setWeapon(Weapon& type);
	void	attack(void)	const;
	HumanB(std::string name);
	~HumanB();
};

#endif
