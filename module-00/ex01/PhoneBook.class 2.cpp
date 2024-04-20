/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 22:05:29 by guderram          #+#    #+#             */
/*   Updated: 2022/08/23 16:49:57 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	this->_index = 0;
	this->_nbr = 0;
}

PhoneBook::~PhoneBook()
{
	return ;
}

int	PhoneBook::getindex(void) const{
	return (this->_index);
}

int	PhoneBook::getnbr(void) const{
	return (this->_nbr);
}

bool PhoneBook::ft_is_digits(const std::string &str){
    return str.find_first_not_of("0123456789") == std::string::npos;
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

void	PhoneBook::DispOne(int i){
	std::cout << std::right << std::setw(10) << i << "|";
	for (int u = 0; u < 3; u++){
	if (_cont[i].GetContact(u).length() > 10)
		std::cout << std::right << std::setw(10) << _cont[i].GetContact(u).substr(0, 9) + ".";
	else{
		std::cout << std::right << std::setw(10) << _cont[i].GetContact(u);}
		std::cout << "|";}
}

void	PhoneBook::DispList(void) {
	int in;
	std::string str;
	in = - 1;
	for (int i = 0; i < this->_nbr; i++){
		DispOne(i);
		std::cout << std::endl;}
	std::cout << "Index : ";
	std::cin >> str;
	std::cout << std::endl;
	if (!ft_is_digits(str))
		return ;
	in = std::stoi(str);
	if (in < 0 || in > this->_nbr - 1)
		return ;
	for (int u = 0; u < 5; u++){
		std::cout << _cont[in].GetContact(u) << std::endl;}
}
