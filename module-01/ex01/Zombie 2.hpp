/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 22:07:27 by guderram          #+#    #+#             */
/*   Updated: 2022/08/26 13:44:22 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie {
public:
	void setName(std::string name);
	void announce(void);
	Zombie(void);
	~Zombie(void);
private:
	std::string _name;
};

Zombie* newZombie(std::string name);
Zombie* zombieHorde( int N, std::string name );

#endif
