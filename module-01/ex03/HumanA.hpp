/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:38:50 by guderram          #+#    #+#             */
/*   Updated: 2022/08/26 18:26:33 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANA_HPP
# define HUMANA_HPP

class HumanA
{
private:
	std::string	_name;
	Weapon&		_type;
public:
	void	attack(void)	const;
	HumanA(std::string name, Weapon& type);
	~HumanA();
};

#endif