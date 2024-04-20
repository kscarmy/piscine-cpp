/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 22:07:27 by guderram          #+#    #+#             */
/*   Updated: 2022/08/26 11:50:43 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie {
public:
	void announce(void);
	Zombie(std::string name);
	~Zombie(void);
private:
	std::string _name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
