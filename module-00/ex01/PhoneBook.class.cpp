/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 22:05:29 by guderram          #+#    #+#             */
/*   Updated: 2022/08/21 11:57:13 by guderram         ###   ########.fr       */
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
	this->_nbr++;
	this->_index++;
	if (this->_index >= 8)
		this->_index = 0;
	if (this->_nbr >= 8)
		this->_nbr = 8;
}

	void	PhoneBook::DispList(void) {
		int in;
		std::string str;
		in = - 1;
		for (int i = 0; i < this->_nbr; i++)
		{
			std::cout << i << "      |";
			for (int u = 0; u < 3; u++){
				std::cout << _cont[i].GetContact(u) << "|";}
			std::cout << std::endl;
		}
		while (in < 0 && in > 8){
		std::cout << "Index : ";
		std::cin >> str;
		in = std::stoi(str);
		std::cout << std::endl;}
		for (int u = 0; u < 5; u++){
			std::cout << _cont[in].GetContact(u) << "|";}
	}
	