/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 22:00:35 by guderram          #+#    #+#             */
/*   Updated: 2022/08/23 16:50:01 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# include <string>
# include <iostream>
# include <iomanip>
# include "Contact.class.hpp"


class PhoneBook
{
public:
	PhoneBook();
	~PhoneBook();
	int		getindex(void) const;
	int		getnbr(void) const;
	void	AddContact(Contact New);
	void	DispList(void);
	bool 	ft_is_digits(const std::string &str);
	void	DispOne(int i);

private:
	Contact 	_cont[8];
	int			_index;
	int			_nbr;
};

#endif
