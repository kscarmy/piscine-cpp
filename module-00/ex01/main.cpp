/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 21:56:35 by guderram          #+#    #+#             */
/*   Updated: 2022/08/20 15:43:44 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "PhoneBook.class.hpp"
# include "Contact.class.hpp"

std::string		ft_entry_contact(std::string str){
	std::string ret;
	while (ret == "")
	{
		std::cout << str;
		std::cin >> ret;
	}
	return (ret);
}

Contact			ft_add_contact(void){
	std::string	fn = ft_entry_contact("Prenom : ");
	std::string	ln = ft_entry_contact("Nom : ");
	std::string	nn = ft_entry_contact("Surnom : ");
	std::string	ph = ft_entry_contact("Telephone : ");
	std::string	se = ft_entry_contact("Secret : ");
	Contact	NewCont(fn, ln, nn, ph, se);
	return (NewCont);
}

std::string		ft_entry(void){
	std::string		str;
	std::cout << "Commandes acceptees : ADD ; SEARCH ; EXIT" << std::endl;
	std::cout << "Menu : ";
	std::cin >> str;
	return (str);
}


int				ft_parse_entry(std::string	str, PhoneBook & PB){
	if (str == "EXIT")
		return (0);
	if (str == "ADD")
		PB.AddContact(ft_add_contact());
	return (1);
}

int	main(void)
{
	int			status = 1;
	PhoneBook	PB;


	while (status == 1)
	{
			std::string input = ft_entry();
			status = ft_parse_entry(input, PB);
	}
	return (0);
}
