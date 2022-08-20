/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 22:05:29 by guderram          #+#    #+#             */
/*   Updated: 2022/08/20 00:13:11 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "PhoneBook : Constructor" << std::endl;
	this->_index = 0;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook : Destructor" << std::endl;
}
