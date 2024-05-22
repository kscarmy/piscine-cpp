/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 16:55:44 by guderram          #+#    #+#             */
/*   Updated: 2022/09/30 17:02:42 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

void	Harl::_debug(void){std::cout << "[ DEBUG ]" << std::endl  << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl << std::endl;}

void	Harl::_info(void){std::cout << "[ INFO ]" << std::endl  << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;}

void	Harl::_warning(void){std::cout << "[ WARNING ]" << std::endl  << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;}

void	Harl::_error(void){std::cout << "[ ERROR ]" << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;}

void Harl::complain( std::string level ){
	std::string type[4] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
	};

	void	(Harl::* call_function[4]) (void) =
	{
		&Harl::_debug,
		&Harl::_info,
		&Harl::_warning,
		&Harl::_error,
	};

	for (int i = 0; i < 4; i++){
		if (level.compare(type[i]) == 0){ (this->*call_function[i])();}}
}

Harl::Harl(){ return ;}

Harl::~Harl(){ return ;}