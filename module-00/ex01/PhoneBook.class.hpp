/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guderram <guderram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 22:00:35 by guderram          #+#    #+#             */
/*   Updated: 2022/08/20 14:47:59 by guderram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

class PhoneBook
{
public:
	PhoneBook();
	~PhoneBook();
	int		getindex(void) const;
	void	AddContact(Contact New);

private:
	Contact 	_cont[8];
	int			_index;
};

#endif