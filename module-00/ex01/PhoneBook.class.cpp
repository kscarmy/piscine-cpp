/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 22:05:29 by guderram          #+#    #+#             */
/*   Updated: 2022/08/20 15:53:16 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "PhoneBook : Constructor" << std::endl;
	this->_index = 0;
	this->_nbr = 0;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook : Destructor" << std::endl;
}

int	PhoneBook::getindex(void) const{
	return (this->_index);
}

void	PhoneBook::AddContact(Contact New){
	this->_cont[this->_index] = New;
}

	void	PhoneBook::DispList(void) const{
		for
	}