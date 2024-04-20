/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 22:07:16 by guderram          #+#    #+#             */
/*   Updated: 2022/08/23 14:22:28 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact(void) : _fname(""), _lname(""), _nname(""), _phone(""), _secret("")
{
	// std::cout << "Contact : Constructor" << std::endl;
}

Contact::Contact(std::string c1, std::string c2, std::string c3, std::string c4, std::string c5) : _fname(c1), _lname(c2), _nname(c3), _phone(c4), _secret(c5)
{
	// std::cout << "Contact : Constructor" << std::endl;
}

Contact::~Contact()
{
	// std::cout << "Contact : Constructor" << std::endl;
}

std::string	Contact::GetContact(int i)
{
	if (i == 0)
		return (_fname);
	if (i == 1)
		return (_lname);
	if (i == 2)
		return (_nname);
	if (i == 3)
		return (_phone);
	if (i == 4)
		return (_secret);
	return ("");
}
