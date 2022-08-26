/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:25:56 by guderram          #+#    #+#             */
/*   Updated: 2022/08/26 17:28:42 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

void	Weapon::setType(std::string type){
	_type = type;}

std::string Weapon::getType(void) const{
	return (_type);}

Weapon::Weapon(std::string type)
: _type(type){
	return ;}

Weapon::~Weapon(){
	return ;}
